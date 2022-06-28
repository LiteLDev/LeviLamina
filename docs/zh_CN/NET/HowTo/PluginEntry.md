# 🔍 如何：定义插件入口

>以下示例演示如何定义插件入口。入口函数是每一个插件必不可少的要素，插件需要通过入口函数进行事件监听、初始化对象等操作。

<br>

- 此示例具有两个部分  
  
<br>

1. 简单入口
2. 自定义入口

<br>

## 定义简单插件入口

>定义简单入口只需要以下几个步骤：定义PluginMain命名空间 → 定义Plugin类 → 实现OnPostInit静态方法。

<br>

C#
```cs
using System;

namespace PluginMain
{
    public class Plugin
    {
        //插件入口函数
        public static void OnPostInit()
        {
            Console.WriteLine("Plugin ExampleSimpleEntry loaded!");
        }
    }
}
```

<br>

<br>

>可使用位于 [LLNET.LL] 命名空间中的 [LLAPI] 类的 [RegisterPlugin] 静态方法注册插件信息。

<br>

示例：

C#
```cs
using System;
using LLNET.LL;

namespace PluginMain
{
    public class Plugin
    {
        //插件入口函数
        public static void OnPostInit()
        {
            //提供插件名、插件描述、插件版本等信息
            LLAPI.RegisterPlugin("ExamplePlugin","An example Plugin shows Plugin entry.",new Version(1,0,0));
        }
    }
}
```

<br>

## 定义自定义插件入口

>自定义插件入口不必受限制于命名空间与类名，通过继承 [LLNET.Core](../APIs/Namespace/LLNET.Core/LLNET.Core.md) 命名空间下的 [IPluginInitializer](../APIs/Namespace/LLNET.Core/Interface/IPluginInitializer/IPluginInitializer.md) 接口并实现接口属性与方法，即可完成插件入口的定义与插件信息的注册。<br><br> 
自定义入口需要 [PluginMainAtribute](../APIs/Namespace/LLNET.Core/Class/PluginMainAttribute/PluginMainAttribute.md) 的配合使用。

<br>

C#
```cs
using System;
using LLNET.Core;

//自定义命名空间
namespace CustomNameSpace;

//使用PluginMainAttribute提供插件名称

[PluginMain("CustomPlugin")]
public class CustomPlugin: IPluginInitializer
{
    //提供插件描述
    public string Introduction => "Example plugin for Liteloader.NET";

    //提供插件额外信息
    public Dictionary<string, string> MetaData => new()
        {
            {"Something", "..."},
            {"foo", "bar"}
        };

    //提供插件版本信息
    public Version Version => new(2, 3, 3);

    //插件入口类初始化完成后会调用的函数
    public void OnInitialize()
    {
        //do something...
        Console.WriteLine("2333");
    }

}
```