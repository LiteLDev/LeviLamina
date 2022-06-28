# 🔖 CommandAttribute 类

## 定义

<br>

> 用于指定命令主体的特性。

<br>

C#
```cs
[AttributeUsage(AttributeTargets.Class)]
public class CommandAttribute
    :Attribute
```
C++
```cpp
[AttributeUsage(AttributeTargets::Class)]
public ref class CommandAttribute
    :public System::Attribute
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [Attribute](https://docs.microsoft.com/zh-cn/dotnet/api/system.attribute?view=net-6.0) → [CommandAttribute](CommandAttribute.md)
   
<br>

## 示例

<br>

[如何：使用静态指令](../../../../HowTo/Static_DynamicCommand.md)

<br>

## 构造函数
- 
    |||
    |-|-|
    |`CommandAttribute(String)`|用指定的命令名称初始化 `CommandAttribute` 类的新实例。|

<br>

##  字段
- 
    |||
    |-|-|
    |[Name]|指令名称。(只能小写)|
    |[Description]|指令描述。|
    |[Permission]|指令权限。|
    |Alia|指令别名。|
    |AutoReset|指示是否自动重置。|
    |Flag1||
    |Flag2||

<br>


