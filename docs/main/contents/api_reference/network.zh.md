# Network（网络）

`ll/api/network/` · **通用**

## 概述

Network 模块支持在客户端和服务器之间注册和处理自定义网络数据包。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/network/packet/PacketBase.h` | 自定义数据包的 CRTP 基类 |
| `ll/api/network/packet/PacketHandlerBase.h` | 数据包处理器的 CRTP 基类 |

## 核心类

### PacketBase

使用 CRTP（奇异递归模板模式）的自定义数据包基类。

```cpp
namespace ll::network {
template <class Derived>
class PacketBase {
public:
    virtual void write(BinaryStream& stream);
    virtual void read(BinaryStream& stream);
    
    void sendToServer();
    void sendToClient(NetworkIdentifier const& id, SubClientId clientId);
    void sendBroadcast();
};
}
```

### PacketHandlerBase

使用 CRTP 的数据包处理器基类。

```cpp
namespace ll::network {
template <class Derived, class PacketType>
class PacketHandlerBase {
public:
    virtual void handle(NetworkIdentifier const& source, PacketType& packet) = 0;
};
}
```

## 使用方法

### 定义自定义数据包

```cpp
#include "ll/api/network/packet/PacketBase.h"

class MyCustomPacket : public ll::network::PacketBase<MyCustomPacket> {
    int data;
public:
    void setData(int value) { data = value; }
    int getData() const { return data; }
    
    void write(BinaryStream& stream) override {
        stream.writeVarInt(data);
    }
    void read(BinaryStream& stream) override {
        data = stream.readVarInt();
    }
};
```

### 定义数据包处理器

```cpp
#include "ll/api/network/packet/PacketHandlerBase.h"

class MyPacketHandler : public ll::network::PacketHandlerBase<MyPacketHandler, MyCustomPacket> {
public:
    void handle(NetworkIdentifier const& source, MyCustomPacket& packet) override {
        // 处理数据包
        auto data = packet.getData();
        // 处理数据...
    }
};
```

### 发送数据包

```cpp
void sendCustomPacket() {
    MyCustomPacket packet;
    packet.setData(42);
    
    // 发送到服务器（从客户端）
    packet.sendToServer();
    
    // 或发送到特定客户端（从服务器）
    // packet.sendToClient(networkId, subClientId);
    
    // 或广播到所有客户端（从服务器）
    // packet.sendBroadcast();
}
```

## 相关模块

- [Event（事件系统）](event.zh.md) — 用于数据包拦截的网络事件
