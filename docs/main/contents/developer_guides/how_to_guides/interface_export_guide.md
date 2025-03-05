# Interface Export Guide

You can refer to LeviLamina's `LLAPI` macro for exporting functions or methods of a Mod. Add the following code to the
header file:

```cpp
#ifdef MOD_EXPORT
#define MODAPI __declspec(dllexport)
#else
#define MODAPI __declspec(dllimport)
#endif
```

In the Mod's `xmake.lua`, add `add_defines("MOD_EXPORT")`, and then prepend `MODAPI` to the functions or methods that
need to be exported. In actual use, you should rename `MOD_EXPORT` and `MODAPI` to avoid conflicts with macros from
other Mods.