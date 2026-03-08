# Network（网络）

`ll/api/network/` · **通用**

## 概述

Network 模块支持在客户端和服务器之间注册和处理自定义网络数据包。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/network/packet/Packet.h` | 数据包基类 |
| `ll/api/network/packet/PacketRegistrar.h` | 数据包注册 |

## 核心类

### Packet

```cpp
namespace ll::network {
class Packet {
public:
    virtual void write(BinaryStream& stream);
    virtual void read(BinaryStream& stream);
    
    void sendToServer();
    void sendToClient(NetworkIdentifier const& id, SubClientId clientId);
    void sendBroadcast();
};
}
```

### PacketRegistrar

```cpp
namespace ll::network {
class PacketRegistrar {
public:
    static PacketRegistrar& getInstance();
    
    bool registerPacket(
        std::string const& name,
        int id,
        std::function<std::unique_ptr<Packet>()> factory,
        std::shared_ptr<IPacketHandler> handler
    );
    
    std::unique_ptr<Packet> createPacket(int runtimeId);
};
}
```

## 使用方法

```cpp
#include "ll/api/network/packet/Packet.h"
#include "ll/api/network/packet/PacketRegistrar.h"

class MyCustomPacket : public ll::network::Packet {
    int data;
public:
    void write(BinaryStream& stream) override {
        stream.writeVarInt(data);
    }
    void read(BinaryStream& stream) override {
        data = stream.readVarInt();
    }
};

void registerPacket() {
    ll::network::PacketRegistrar::getInstance().registerPacket(
        "MyCustomPacket",
        1000,  // 自定义数据包 ID
        []() { return std::make_unique<MyCustomPacket>(); },
        nullptr  // 可选处理器
    );
}
```

## 相关模块

- [Event（事件系统）](event.zh.md) — 用于数据包拦截的网络事件
