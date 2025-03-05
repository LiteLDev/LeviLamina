# 接口导出指南

导出Mod的函数或方法的方式可以参考LeviLamina的`LLAPI`宏，通过在头文件中加入以下代码:

```cpp
#ifdef MOD_EXPORT
#define MODAPI __declspec(dllexport)
#else
#define MODAPI __declspec(dllimport)
#endif
```

在Mod的`xmake.lua`中添加`add_defines("MOD_EXPORT")`，然后再在需要被导出的函数或方法前添加`MODAPI`即可导出，在实际使用中你需要将
`MOD_EXPORT`和`MODAPI`改名以避免与其它Mod的宏产生冲突。