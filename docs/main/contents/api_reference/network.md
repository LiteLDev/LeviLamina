# Network

`ll/api/network/` · **Common**

## Overview

The Network module enables registration and handling of custom network packets between client and server.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/network/packet/Packet.h` | Base packet class |
| `ll/api/network/packet/PacketRegistrar.h` | Packet registration |

## Key Classes

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

## Usage

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
        1000,  // Custom packet ID
        []() { return std::make_unique<MyCustomPacket>(); },
        nullptr  // Optional handler
    );
}
```

## Related

- [Event](event.md) — Network events for packet interception
