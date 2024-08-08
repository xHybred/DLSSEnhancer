### DLSS Enhancer

- Enhances how DLSS looks by being able to change some aspects of it to your liking
- Force DLAA for better image quality
- Custom scaling factors so you get either get better image quality or better performance
- Preset selection: A, B, C, D, E & F
- Disable anti-aliasing in games that force TAA

If the DLL loaded in fine there should be a dlsstweaks.log file created next to the EXE

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

**How To Setup Custom Scale Factors**

When editing the DLSSEnhancer.ini file, change the default scale factors to match one of these custom ones. 

**Example:** Opening DLSSEnhancer.ini > going down to "Quality" > replacing "0.66666667" with "0.849231" *(a
Ultra Quality+)* > save changes

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
