# 🔖 CommandParameterAttribute 类

## 定义

<br>

> 用于指定命令枚举的特性。

<br>

C#
```cs
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Property)]
public class CommandParameterAttribute
    :Attribute
```
C++
```cpp
[AttributeUsage(AttributeTargets::Field | AttributeTargets::Property)]
public ref class CommandParameterAttribute
    :public System::Attribute
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [Attribute](https://docs.microsoft.com/zh-cn/dotnet/api/system.attribute?view=net-6.0) → [CommandParameterAttribute](zh_CN/NET/APIs/Namespace/LLNET.DynamicCommand/Class/CommandParameterAttribute/CommandParameterAttribute.md)
   
<br>

## 示例

<br>

[如何：使用静态指令](../../../../HowTo/Static_DynamicCommand.md)

<br>

## 构造函数
- 
    |||
    |-|-|
    |`CommandParameterAttribute()`|初始化 `CommandParameterAttribute` 类的新实例。|

<br>

##  属性
- 
    |||
    |-|-|
    |[OverloadId]|获取或设置当前指令参数的重载标识。|

<br>

##  字段
- 
    |||
    |-|-|
    |[Type]|指令参数类型。|
    |[IsMandatory]|指示指令参数是否为可选参数。|
    |[Permission]|指令权限。|
    |[Identifier]|指令参数标识。|
    |[Option]|指令参数选项。|

<br>


