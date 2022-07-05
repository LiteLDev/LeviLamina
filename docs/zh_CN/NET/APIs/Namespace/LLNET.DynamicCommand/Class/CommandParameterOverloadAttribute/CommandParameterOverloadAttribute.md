# 🔖 CommandParameterOverloadAttribute 类

## 定义

<br>

> 用于指定命令枚举的特性。

<br>

C#
```cs
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Property)]
public class CommandParameterOverloadAttribute
    :Attribute
```
C++
```cpp
[AttributeUsage(AttributeTargets::Field | AttributeTargets::Property)]
public ref class CommandParameterOverloadAttribute
    :public System::Attribute
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [Attribute](https://docs.microsoft.com/zh-cn/dotnet/api/system.attribute?view=net-6.0) → [CommandParameterOverloadAttribute](zh_CN/NET/APIs/Namespace/LLNET.DynamicCommand/Class/CommandParameterOverloadAttribute/CommandParameterOverloadAttribute.md)
   
<br>

## 示例

<br>

[如何：使用静态指令](../../../../HowTo/Static_DynamicCommand.md)

<br>

## 构造函数
- 
    |||
    |-|-|
    |`CommandParameterOverloadAttribute(Int32)`|使用指定的指令参数标识初始化 `CommandParameterOverloadAttribute` 类的新实例。|

<br>

##  字段
- 
    |||
    |-|-|
    |[OverloadId]|指令参数重载标识。|

<br>


