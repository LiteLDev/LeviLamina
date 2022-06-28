# 🔖 NativePluginException 类

## 定义

<br>

> 检测到 [BDS](https://www.minecraft.net/en-us/download/server/bedrock) 发生的错误而引发的异常基类。

<br>

C#
```cs
public class NativePluginException
    :LiteLoaderDotNETException
```
C++
```cpp
public ref class NativePluginException
    :public LiteLoaderDotNETException
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [Exception](https://docs.microsoft.com/zh-cn/dotnet/api/system.exception?view=net-6.0) → [LiteLoaderDotNETException](../LiteLoaderDotNETException/LiteLoaderDotNETException.md) → 
[NativePluginException](NativePluginException.md)

<br>

## 示例

<br>


C#
```cs
using System;
using LLNET.LL;
using LLNET.Core;

namespace PluginMain
{
    class Plugin
    {
        public static void OnPostInit()
        {
            var plugin = LLAPI.GetPlugin("LLMoney");
            try
            {
                //将会得到一个NativePluginException
                //因为LLMoney是一个c++插件
                var asm = plugin.GetPluginAssembly();
            }
            catch(NativePluginException ex)
            {
                Console.WriteLine(ex);
            }
        }
    }
}

```

<br>

## 构造函数
- 
    |||
    |-|-|
    |`NativePluginException()`|初始化 `NativePluginException` 类的新实例。|

<br>


