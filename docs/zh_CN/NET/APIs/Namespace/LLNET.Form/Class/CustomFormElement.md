# 🔖 CustomFormElement 类

## 定义

<br>

>表示自定义表单控件的基类。

<br>

C#
```cs
public abstract class CustomFormElement
```
C++
```cpp
public ref class CustomFormElement abstract
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [CustomFormElement](zh_CN/NET/APIs/Namespace/LLNET.Form/Class/CustomFormElement.md)

<br>

<br>

## 枚举

- 
    |||
    |-|-|
    |[Type]|表示自定义表单控件类型的枚举。|
    
<br>

## 属性

- 
    |||
    |-|-|
    |`Name`|获取或设置控件名称。|
    |`Value`|获取或设置控件值。|
    |`ElementType`|获取或设置控件类型。|

<br>

## 方法

- 
    |||
    |-|-|
    |`SetName(String)`|设置控件名称。|
    |`GetElementType()`|获取控件类型。|
    |`GetString()`|获取由字符串形式表示的控件值。|
    |`GetNumber()`|获取由数字形式表示的控件值。|
    |`GetBool()`|获取由布尔值形式表示的控件值。|