# 🔖 EventTemplate\<REFEVENT, NATIVEEVENT\> 类

## 定义

<br>

>作为 [LLNET.Event](zh_CN/NET/APIs/Namespace/LLNET.Event/LLNET.Event.md) 命名空间中所有**事件**的模板基类。

<br>

C++
```cpp
template <typename REFEVENT, typename NATIVEEVENT>
public ref class EventTemplate
```

## 构造函数

- 
    |||
    |-|-|
    |`EventTemplate()`|初始化对应 `REFEVENT` 事件的新实例。|


## 方法
- 
    |||
    |-|-|
    |`Subscribe(REFEVENT.EventHandler)`|使用事件委托作为回调函数订阅此事件。|
    |`Subscribe_Ref(REFEVENT.EventHandler)`|使用事件委托作为回调函数订阅具有可供修改的引用参数的事件。|
    |`Unsubscribe(REFEVENT.EventListener)`|接收对应事件监听器的实例进而取消订阅该事件。|
    |`HasListener()`|查明此事件是否被订阅。|

## 事件
- 
    |||
    |-|-|
    |`Event`|提供 `Subscribe` / `Unsubscribe` 的.NET事件形式。|