# 🔖 Button 类

## 定义

<br>

> 简单表单**按钮**类。

<br>

C#
```cs
public class Button: SimpleFormElement
```
C++
```cpp
public ref class Button: public SimpleFormElement
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [SimpleFormElement] → [Button](Button.md)

<br>

<br>

## 构造函数
- 
    |||
    |-|-|
    |`Button(String, String, ButtonCallBack)`|以指定的显示文本、显示图像、按钮回调函数初始化 `Button` 类的新实例。|
    |`Button(String, String)`|以指定的显示文本、显示图像初始化 `Button` 类的新实例。|
    |`Button(String)`|以指定的显示文本初始化 `Button` 类的新实例。|

<br>

##  属性
- 
    |||
    |-|-|
    |`Text`|获取或设置按钮显示的文本。|
    |`Image`|获取或设置按钮显示的图像的路径或链接。|
    |`Callback`|获取或设置按钮点击后调用的回调函数。|

<br>

##  方法
- 
    |||
    |-|-|
    |`SetText(String)`|设置按钮的显示文本。|
    |`SetImage(String)`|设置按钮的显示图像路径或链接。|
    |`SetCallback(ButtonCallback)`|设置按钮的回调函数。|


