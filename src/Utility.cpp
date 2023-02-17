#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <cstdint>
#include <string>
#include <fstream>
#include <filesystem>
#include "Utility.hpp"

namespace utility
{

BOOL HookIAT(HMODULE callerModule, char const* targetModule, void* targetFunction, void* detourFunction)
{
	uint8_t* base = (uint8_t*)callerModule;
	IMAGE_DOS_HEADER* dos_header = (IMAGE_DOS_HEADER*)base;
	IMAGE_NT_HEADERS* nt_headers = (IMAGE_NT_HEADERS*)(base + dos_header->e_lfanew);

	IMAGE_IMPORT_DESCRIPTOR* imports = (IMAGE_IMPORT_DESCRIPTOR*)(base + nt_headers->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);

	for (int i = 0; imports[i].Characteristics; i++)
	{
		const char* name = (const char*)(base + imports[i].Name);

		if (lstrcmpiA(name, targetModule) != 0)
			continue;

		void** thunk = (void**)(base + imports[i].FirstThunk);

		for (; thunk; thunk++)
		{
			void* import = *thunk;

			if (import != targetFunction)
				continue;

			DWORD oldState;
			if (!VirtualProtect(thunk, sizeof(void*), PAGE_READWRITE, &oldState))
				return FALSE;

			*thunk = (void*)detourFunction;

			VirtualProtect(thunk, sizeof(void*), oldState, &oldState);

			return TRUE;
		}
	}

	return FALSE;
}

bool GetPrivateProfileBool(const wchar_t* path, const wchar_t* app, const wchar_t* key, bool default_val)
{
	WCHAR val[256];
	const wchar_t* default_val_str = default_val ? L"true" : L"false";
	GetPrivateProfileStringW(app, key, default_val_str, val, 256, path);

	if (!_wcsicmp(val, L"true"))
		return true;
	if (!_wcsicmp(val, L"yes"))
		return true;
	if (!_wcsicmp(val, L"1"))
		return true;

	return false;
}

float GetPrivateProfileFloat(const wchar_t* path, const wchar_t* app, const wchar_t* key, float default_val)
{
	WCHAR val[256];
	auto default_val_str = std::to_wstring(default_val);
	GetPrivateProfileStringW(app, key, default_val_str.c_str(), val, 256, path);

	float ret = default_val;
	try
	{
		ret = std::stof(val);
	}
	catch (const std::exception&)
	{
		ret = default_val;
	}
	return ret;
}

unsigned int GetPrivateProfileDlssPreset(const wchar_t* path, const wchar_t* app, const wchar_t* key)
{
	WCHAR val[256];
	const wchar_t* default_val = L"Default";
	GetPrivateProfileStringW(app, key, default_val, val, 256, path);

	if (!_wcsicmp(val, default_val))
		return NVSDK_NGX_DLSS_Hint_Render_Preset_Default;
	if (!_wcsicmp(val, L"A"))
		return NVSDK_NGX_DLSS_Hint_Render_Preset_A;
	if (!_wcsicmp(val, L"B"))
		return NVSDK_NGX_DLSS_Hint_Render_Preset_B;
	if (!_wcsicmp(val, L"C"))
		return NVSDK_NGX_DLSS_Hint_Render_Preset_C;
	if (!_wcsicmp(val, L"D"))
		return NVSDK_NGX_DLSS_Hint_Render_Preset_D;
	if (!_wcsicmp(val, L"E"))
		return NVSDK_NGX_DLSS_Hint_Render_Preset_E;
	if (!_wcsicmp(val, L"F"))
		return NVSDK_NGX_DLSS_Hint_Render_Preset_F;

	return NVSDK_NGX_DLSS_Hint_Render_Preset_Default;
}

};