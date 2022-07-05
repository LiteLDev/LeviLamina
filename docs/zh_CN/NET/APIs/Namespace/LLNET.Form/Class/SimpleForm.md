# 🔖 SimpleForm 类

## 定义

<br>

> 简单表单类。

<br>

C#
```cs
public class SimpleForm
```
C++
```cpp
ref class SimpleForm : public ClassTemplate<SimpleForm, ::Form::SimpleForm>, public FormImpl
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [ClassTemplate<REFCLASS,NATIVECLASS>] → [SimpleForm](zh_CN/NET/APIs/Namespace/LLNET.Form/Class/SimpleForm.md)

<br>

<br>

## 构造函数
- 
    |||
    |-|-|
    |`SimpleForm(String, String)`|以指定的标题和表单内容初始化 `SimpleForm` 类的新实例。|

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
    |`SetTitle(String)`|设置表单标题。|
    |`CstContent(String)`|-|
    |`AddButton(String, String, Button.ButtonCallback)`|以指定的按钮名称，按钮显示图像，按钮回调函数为表单添加新按钮。|
    |`AddButton(String, String)`|以指定的按钮名称，按钮显示图像为表单添加新按钮。|
    |`AddButton(String)`|以指定的按钮名称为表单添加新按钮。|
    |`Append(Button)`|将指定的按钮追加到表单末尾。|
    |`SendTo(MC.Player,SimpleFormCallback)`|将表单及其回调函数发送至指定玩家。|
    |`SendTo(MC.Player)`|将表单发送至指定玩家。|



