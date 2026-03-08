# Network

`ll/api/network/` · **Common**

## Overview

The Network module enables registration and handling of custom network packets between client and server.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/network/packet/PacketBase.h` | CRTP base class for custom packets |
| `ll/api/network/packet/PacketHandlerBase.h` | CRTP base class for packet handlers |

## Key Classes

### PacketBase

Base class for custom packets using CRTP (Curiously Recurring Template Pattern).

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

Base class for packet handlers using CRTP.

```cpp
namespace ll::network {
template <class Derived, class PacketType>
class PacketHandlerBase {
public:
    virtual void handle(NetworkIdentifier const& source, PacketType& packet) = 0;
};
}
```

## Usage

### Defining a Custom Packet

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

### Defining a Packet Handler

```cpp
#include "ll/api/network/packet/PacketHandlerBase.h"

class MyPacketHandler : public ll::network::PacketHandlerBase<MyPacketHandler, MyCustomPacket> {
public:
    void handle(NetworkIdentifier const& source, MyCustomPacket& packet) override {
        // Handle the packet
        auto data = packet.getData();
        // Process data...
    }
};
```

### Sending Packets

```cpp
void sendCustomPacket() {
    MyCustomPacket packet;
    packet.setData(42);
    
    // Send to server (from client)
    packet.sendToServer();
    
    // Or send to specific client (from server)
    // packet.sendToClient(networkId, subClientId);
    
    // Or broadcast to all clients (from server)
    // packet.sendBroadcast();
}
```

## Related

- [Event](event.md) — Network events for packet interception
