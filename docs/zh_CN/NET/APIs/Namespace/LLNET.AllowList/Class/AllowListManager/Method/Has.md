# 💡 AllowListManager.Has 方法

## 定义

<br>

> 返回一个值，该指指示指定的玩家是否存在于白名单中。

<br>

## 重载
- 
    |||
    |-|-|
    |`Has(String)`|根据玩家名称查明玩家是否存在。|
    |`Has(String, String)`|根据玩家名称、Xuid查明玩家是否存在。|
    |`Has(String, String, Int32)`|根据玩家名称、Xuid查明玩家是否存在。|

## Has(String)

<br>

C#
```cs
public bool Has(string name)
```
C++
```cpp
public:
    bool Has(System::String^ name)
```

- 参数
  - `name` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要查找的玩家名称。

<br>

- 返回
  - [Boolean](https://docs.microsoft.com/zh-cn/dotnet/api/system.boolean?view=net-6.0)  
    如果 `name` 参数所指向的玩家在此白名单中出现，则为，则为 `true`；否则为 `false`。
  
<br>

## Has(String, String)

<br>

C#
```cs
public bool Has(string name, string xuid)
```
C++
```cpp
public:
    bool Has(System::String^ name, System::String^ xuid)
```

- 参数
  - `name` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要查找的玩家名称
  - `xuid` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要查找的玩家xuid

<br>

- 返回
  - [Boolean](https://docs.microsoft.com/zh-cn/dotnet/api/system.boolean?view=net-6.0)  
    如果 `name` 参数与 `xuid` 参数所指向的玩家在此白名单中出现，则为 `true`；否则为 `false`。
  
<br>

## Has(String, String, Int32)

<br>

C#
```cs
public bool Has(string name, string xuid, out int index)
```
C++
```cpp
public:
    bool Has(System::String^ name, System::String^ xuid, [Out]int% index)
```

- 参数
  - `name` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要查找的玩家名称
  - `xuid` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要查找的玩家xuid
  - `index` : [Int32](https://docs.microsoft.com/zh-cn/dotnet/api/system.int32?view=net-6.0)  
    如果索引存在，则将此值设置为数组索引(?)

<br>

- 返回
  - [Boolean](https://docs.microsoft.com/zh-cn/dotnet/api/system.boolean?view=net-6.0)  
    如果 `name` 参数与 `xuid` 参数所指向的玩家在此白名单中出现，则为 `true`；否则为 `false`。
  
<br>