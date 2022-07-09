# 🔖 PluginMainAttribute 类

## 定义

<br>

> 提供管理白名单的一系列方法。

<br>

C#
```cs
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
public class PluginMainAttribute
    :Attribute
```
C++
```cpp
[AttributeUsage(AttributeTargets::Assembly, AllowMultiple = true)]
public ref class PluginMainAttribute
    :public System::Attribute
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [Attribute](https://docs.microsoft.com/zh-cn/dotnet/api/system.attribute?view=net-6.0) → [PluginMainAttribute](zh_CN/NET/APIs/Namespace/LLNET.Core/Class/PluginMainAttribute/PluginMainAttribute.md)
   
<br>

## 示例

<br>

[如何：定义插件入口](zh_CN/NET/HowTo/PluginEntry.md)

<br>

## 构造函数
- 
    |||
    |-|-|
    |`PluginMainAttribute(String)`|用指定的入口名称初始化 `PluginMainAttribute` 类的新实例。|

<br>


