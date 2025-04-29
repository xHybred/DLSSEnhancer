### DLSS Enhancer

- Enhances how DLSS looks by being able to change some aspects of it to your liking
- Force DLAA for better image quality
- Custom scaling factors so you get either get better image quality or better performance
- Preset selection: A, B, C, D, E, F, J & K
- Disable anti-aliasing in games that force TAA

If the DLL loaded in fine there should be a dlsstweaks.log file created next to the EXE

---
### New Scale Factors

1. DLAA: 100%

2. DLAA Lite: 88%

3. Ultra Quality+: 83%

4. Ultra Quality: 77%

5. High Quality: 72%

6. Quality: 67%

7. Balanced Quality: 62%

8. Balanced: 58%

9. Balanced Performance: 54%

10. Performance: 50%

11. Extra Performance: 45%

12. High Performance: 41%

13: Extreme Performance: 37%

14: Ultra Performance: 33%

**Scale Factor Presets**

DLSS Enhancer features 7 presets you can choose from for upscaling

- Default (66%, 58%, 50%, 33%)
- Ultra Quality+ - Balanced+ (84%, 76%, 66%, 62%)
- Ultra Quality - Balanced (76%, 66%, 62%, 58%)
- Quality - Performance (66%, 62%, 58%, 50%)
- Balanced+ - Performance+ (62%, 58%, 50%, 45%)
- Balanced - Extra Performance (58%, 50%, 45%, 41%)
- Performance+ - Ultra Performance (45%, 41%, 37%, 33%)

The reason theirs so many presets, especially at the lower end is because the larger the difference is in image quality between presets. The difference between Ultra Quality+ and Ultra Quality is small, but the difference between Performance & Extra Performance is larger despite being the same % difference (about 8%), so I've added more presets to the lower end to compensate for this.

**How To Manually Override Scale Factors**

**Example:** Opening DLSSTweaks.ini > going down to "Quality" > replacing "0.66666667" with "0.849231" *(Ultra Quality+)* > save changes. 

Also make sure "Enable" under "[DLSSQualityLevels]" is set to "true"

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

Preset J
- Prioritizes preserving image detail. It is the sharpest of all presets

Preset K
- Prioritizes preserving image detail while still maintaining image stability. It is the second sharpest preset & has significantly less shimmering than J, but more ghosting at times.

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

---
### Other

- [DLSSEnhancer Mod Page](https://www.nexusmods.com/site/mods/998)

- [Socials](https://linktr.ee/Hybred)

![Logo](https://github.com/user-attachments/assets/d567f3ec-76be-46d9-8b12-82380a4d4e5d)

![Banner](https://github.com/user-attachments/assets/9ba6c82e-279e-47ec-bf5e-600a687ee5c0)
