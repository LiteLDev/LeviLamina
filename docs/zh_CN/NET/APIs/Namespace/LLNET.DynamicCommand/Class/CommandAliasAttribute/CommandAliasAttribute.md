# 🔖 CommandAliasAttribute 类

## 定义

<br>

> 用于指定命令别名的特性。

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

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [Attribute](https://docs.microsoft.com/zh-cn/dotnet/api/system.attribute?view=net-6.0) → [PluginMainAttribute](zh_CN/NET/APIs/Namespace/LLNET.DynamicCommand/Class/CommandAliasAttribute/CommandAliasAttribute.md)
   
<br>

## 示例

<br>

[如何：使用静态指令](../../../../HowTo/Static_DynamicCommand.md)

<br>

## 构造函数
- 
    |||
    |-|-|
    |`PluginMainAttribute(String)`|用指定的入口名称初始化 `PluginMainAttribute` 类的新实例。|

<br>


