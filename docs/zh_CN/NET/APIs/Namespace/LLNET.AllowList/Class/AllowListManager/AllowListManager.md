# 🔖 AllowListManager 类

## 定义

<br>

> 提供管理白名单的一系列方法。

<br>

C#
```cs
public class AllowListManager
```
C++
```cpp
public ref class AllowListManager
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [AllowListManager](zh_CN/NET/APIs/Namespace/LLNET.AllowList/AllowListManager.md)
   
<br>

## 示例

<br>


C#
```cs
using System;
using LLNET.AllowList;

namespace PluginMain
{
    class Plugin
    {
        public static void OnPostInit()
        {
            AllowListManager manager = new();

            var hasPlayer = manager.Has("steve", "114514");

            Console.WriteLine(hasPlayer);

            manager.Add("alex", "11451419", true);

            manager.Remove("mojang", "233333");

            /* 如果你在使用add/remove成员之后不调用reload函数,
            这些更改将只会写入文件而不会在游戏中生效
            这意味着你添加到白名单的玩家将不能加入游戏, 直到重载白名单*/

            manager.Reload();
        }
    }
}
```

<br>

## 构造函数
- 
    |||
    |-|-|
    |`AllowListManager()`|初始化 `AllowListManager` 类的新实例。|

<br>

##  属性
- 
    |||
    |-|-|
    |[Size](zh_CN/NET/APIs/Namespace/LLNET.AllowList/Properties/Size.md)|获取 `AllowList` 大小。|
    |[AllowList](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Properties\AllowList.md)|获取或设置序列化为Json字符串的 `AllowList`。|

<br>

##  方法
- 
    |||
    |-|-|
    |[Has(String)](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Has.md)|根据玩家名称查明玩家是否存在。|
    |[Has(String, String)](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Has.md)|根据玩家名称、Xuid查明玩家是否存在。|
    |[Has(String, String, Int32)](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Has.md)|根据玩家名称、Xuid查明玩家是否存在。|
    |[Add(String)](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Add.md)|根据玩家名称将玩家添加到白名单中|
    |[Add(String, String)](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Add.md)|根据玩家名称与Xuid将玩家添加到白名单中|
    |[Add(String, String, Boolean)](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Add.md)|根据玩家名称与Xuid将玩家添加到白名单中|
    |[Remove(String)](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Remove.md)|根据玩家名称将玩家从白名单中移除。|
    |[Remove(String, String)](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Remove.md)|根据玩家名称与Xuid将玩家从白名单中移除。|
    |[Reload()](zh_CN\NET\APIs\Namespace\LLNET.AllowList\Method\Reload.md)|重载白名单。|


