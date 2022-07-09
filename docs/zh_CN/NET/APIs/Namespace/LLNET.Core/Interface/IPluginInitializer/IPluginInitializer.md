# 🔗 IPluginInitializer 接口

## 定义

<br>

> 作为自定义插件入口的基础接口。

<br>

C#
```cs
public interface IPluginInitializer
```
C++
```cpp
public interface class IPluginInitializer
```

<br>

## 示例

<br>

[如何：定义插件入口](zh_CN/NET/HowTo/PluginEntry.md)

<br>

## 方法

- 
    |||
    |-|-|
    |`OnInitialize`|作为自定义入口插件的入口。|

<br>

## 属性

- 
    |||
    |-|-|
    |`Version`|插件版本信息。|
    |`Introduction`|插件介绍、描述。|
    |`MetaData`|插件额外信息。|