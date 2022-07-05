# 💡 AllowListManager.Add 方法

## 定义

<br>

> 将玩家添加到当前白名单中。

<br>

## 重载
- 
    |||
    |-|-|
    |`Add(String)`|根据玩家名称将玩家添加到白名单中|
    |`Add(String, String)`|根据玩家名称与Xuid将玩家添加到白名单中|
    |`Add(String, String, Boolean)`|根据玩家名称与Xuid将玩家添加到白名单中|

## Add(String)

<br>

C#
```cs
public AllowListManager Add(string name)
```
C++
```cpp
public:
    AllowListManager^ Add(System::String^ name)
```

- 参数
  - `name` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要添加的玩家名称。

<br>

- 返回
  - [AllowListManager](zh_CN/NET/APIs/Namespace/LLNET.AllowList/AllowListManager.md)  
    当前 `AllowListManager` 对象
  
<br>

## Add(String, String)

<br>

C#
```cs
public AllowListManager Add(string name, string xuid)
```
C++
```cpp
public:
    AllowListManager^ Add(System::String^ name, System::String^ xuid)
```

- 参数
  - `name` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要添加的玩家名称
  - `xuid` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要添加的玩家xuid

<br>

- 返回
  - [AllowListManager](zh_CN/NET/APIs/Namespace/LLNET.AllowList/AllowListManager.md)  
    当前 `AllowListManager` 对象
  
<br>

## Add(String, String, Boolean)

<br>

C#
```cs
public bool Add(string name, string xuid, bool ignore)
```
C++
```cpp
public:
    bool Add(System::String^ name, System::String^ xuid, bool ignore)
```

- 参数
  - `name` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要查找的玩家名称
  - `xuid` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要查找的玩家xuid
  - `ignore` : [Boolean](https://docs.microsoft.com/zh-cn/dotnet/api/system.boolean?view=net-6.0)  
    是否忽略玩家限制

<br>

- 返回
  - [AllowListManager](zh_CN/NET/APIs/Namespace/LLNET.AllowList/AllowListManager.md)  
    当前 `AllowListManager` 对象
  
<br>