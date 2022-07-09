# 🔖 CustomForm 类

## 定义

<br>

> 自定义表单类。

<br>

C#
```cs
public class CustomForm
```
C++
```cpp
ref class CustomForm : public ClassTemplate<CustomForm, ::Form::CustomForm>, public FormImpl
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [ClassTemplate<REFCLASS,NATIVECLASS>] → [CustomForm](zh_CN/NET/APIs/Namespace/LLNET.Form/Class/CustomForm.md)

<br>

<br>

## 构造函数
- 
    |||
    |-|-|
    |`CustomForm(String)`|以指定的标题初始化 `CustomForm` 类的新实例。|

<br>

##  属性
- 
    |||
    |-|-|
    |`Title`|获取或设置当前表单的标题。|
    |`Elements`|获取或设置当前自定义表单中内含的控件集合。|
    |`Callback`|获取或设置表单完成后调用的回调函数。|

<br>

##  方法
- 
    |||
    |-|-|
    |`Append(CustomFormElement)`|将指定自定义表单控件追加到表单末尾。|
    |`SendTo(MC.Player)`|将表单发送至指定玩家。|
    |`SendTo(MC.Player,CustomFormCallback)`|将表单及其回调函数发送至指定玩家。|
    |`GetType(Int32)`|获取位于指定控件索引的控件类型。|
    |`GetString(String)`|由指定的控件名获取由字符串形式表示的控件值。|
    |`GetNumber(String)`|由指定的控件名获取由数字形式表示的控件值。|
    |`GetBool(String)`|由指定的控件名获取由布尔值形式表示的控件值。|
    |`GetString(Int32)`|由指定的索引获取由字符串形式表示的控件值。|
    |`GetNumber(Int32)`|由指定的索引获取由数字形式表示的控件值。|
    |`GetBool(Int32)`|由指定的索引获取由布尔值形式表示的控件值。|
    |`SetValue(Int32,String)`|设置指定索引的控件值。|


