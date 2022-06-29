# 💡 AllowListManager.Remove 方法

## 定义

<br>

### 将玩家从当前白名单中移除。

<br>

## 重载
- 
    |||
    |-|-|
    |`Remove(String)`|根据玩家名称将玩家从白名单中移除。|
    |`Remove(String, String)`|根据玩家名称与Xuid将玩家从白名单中移除。|

## Add(String)

<br>

C#
```cs
public AllowListManager Remove(string name)
```
C++
```cpp
public:
    AllowListManager^ Remove(System::String^ name)
```

- 参数
  - `name` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要移除的玩家名称。

<br>

- 返回
  - [AllowListManager](zh_CN/NET/APIs/Namespace/LLNET.AllowList/AllowListManager.md)  
    当前 `AllowListManager` 对象
  
<br>

## Remove(String, String)

<br>

C#
```cs
public AllowListManager Remove(string name, string xuid)
```
C++
```cpp
public:
    AllowListManager^ Remove(System::String^ name, System::String^ xuid)
```

- 参数
  - `name` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要移除的玩家名称
  - `xuid` : [String](https://docs.microsoft.com/zh-cn/dotnet/api/system.string?view=net-6.0)  
    要移除的玩家xuid

<br>

- 返回
  - [AllowListManager](zh_CN/NET/APIs/Namespace/LLNET.AllowList/AllowListManager.md)  
    当前 `AllowListManager` 对象
  
<br>