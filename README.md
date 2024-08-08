### DLSS Enhancer

- Enhances how DLSS looks by being able to change some aspects of it to your liking
- Force DLAA for better image quality
- Custom scaling factors so you get either get better image quality or better performance
- Preset selection: A, B, C, D, E & F
- Disable anti-aliasing in games that force TAA

If the DLL loaded in fine there should be a dlsstweaks.log file created next to the EXE

![Logo](https://github.com/user-attachments/assets/d567f3ec-76be-46d9-8b12-82380a4d4e5d)

---
### Custom Scale Factors

Ultra Quality+: 0.849231

Ultra Quality: 0.769231

Quality: 0.66666667

Balanced+: 0.623333335

Balanced: 0.58

Performance: 0.5

Extra Performance: 0.41666667

Ultra Performance: 0.33333334

**Scale Factor Presets**

DLSS Enhancer features 6 presets you can choose from for upscaling

- Default *(66% - 33%)*
- Ultra Quality+ - Balanced+ *(84% - 62%)*
- Ultra Quality - Balanced *(76% - 58%)*
- Quality - Performance *(66% - 50%)*
- Balanced+ - Extra Performance *(62% - 41%)*
- Balanced - Ultra Performance *(58% - 33%)*


**How To Manually Override Scale Factors**

**Example:** Opening DLSSTweaks.ini > going down to "Quality" > replacing "0.66666667" with "0.849231" *(Ultra Quality+)* > save changes. 

Also make sure "Enable" under "DLSSQualityLevels" is set to "true"

---
### Letter Presets

Preset A & B
- Combats ghosting for elements with missing inputs

Preset C
- Favors current frame information, reducing ghosting at the expense of image stability

Preset D
- Favors prior frame information, improving image stability at the expense of ghosting. Default preset for Perf/Bal/Quality

Preset E
- Blend between D & C, equal stability to D but slightly more ghosting than C

Preset F
- No information given. Default preset for Ultra Perf/DLAA

---
### Game Compatibility
A list of games tested against DLSSEnhancer can be found here: https://github.com/emoose/DLSSTweaks/wiki/Games

---
### Credits
DLSSEnhancer is built on top of several open-source projects, many thanks to the following:

- emoose dlsstweaks project https://github.com/emoose/DLSSTweaks
- praydog for the project template https://github.com/praydog/AutomataMP
- cursey for safetyhook https://github.com/cursey/safetyhook
- Silent for ModUtils https://github.com/CookiePLMonster/ModUtils
- PotatoOfDoom for CyberFSR2 & the nvngx.dll loading method/signature override https://github.com/PotatoOfDoom/CyberFSR2
- This software contains source code provided by NVIDIA Corporation.
