# Network

`ll/api/network/` · **Common**

## Overview

The Network module defines custom packets sent between client and server. Before a player joins, LeviLamina checks
that both ends handle the packets they need, and afterwards keeps each end told about what the other end handles.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/network/packet/Packet.h` | `Packet`, `PacketBase` and `PacketHandlerBase` |
| `ll/api/network/packet/PacketRegistrar.h` | `PacketRegistrar` and `PacketSide`, for registering packets at runtime |

## Usage

### Defining a Packet

Derive from `PacketBase` and implement `write` and `read`. Deriving registers the packet, so nothing else needs to be
called.

```cpp
#include "ll/api/network/packet/Packet.h"

class SetLabelPacket : public ll::network::PacketBase<SetLabelPacket> {
public:
    std::string label;

    void write(BinaryStream& stream) const override { stream.writeString(label, nullptr, nullptr); }

    Bedrock::Result<void> read(ReadOnlyBinaryStream& stream) override {
        auto value = stream.getString(256);
        if (!value) {
            return nonstd::make_unexpected(value.error());
        }
        label = std::move(*value);
        return {};
    }
};
```

### Handling a Packet

Derive from `PacketHandlerBase` and implement `handlePacket`. Deriving registers the handler, and LeviLamina creates
one instance of it. `side` is the end handling the packet: `PacketSide::Server` for a packet sent by a client,
`PacketSide::Client` for one sent by the server.

```cpp
class SetLabelHandler : public ll::network::PacketHandlerBase<SetLabelHandler, SetLabelPacket> {
public:
    void handlePacket(
        NetworkIdentifier const& source,
        NetEventCallback&        callback,
        ll::network::PacketSide  side,
        SetLabelPacket const&    packet
    ) const {
        // ...
    }
};
```

### Sending Packets

```cpp
SetLabelPacket packet;
packet.label = "hello";

packet.sendToServer();                       // from a client
packet.sendTo(player);                       // from the server, to one player
packet.sendToClient(networkId, subClientId); // from the server, to one connection
packet.sendToClients();                      // from the server, to every client
```

`sendTo` also takes a block position and dimension, or an actor, to reach the players around it.

### Custom Packet Id and Version

A packet is identified on the wire by its type name by default, so renaming the class or its namespace changes the
id, and a server mod and a client mod written separately must use the same type name. To pin a stable id, declare
`CustomPacketId`; it is read at compile time, like `CustomEventId` for events. When the wire format of a packet changes,
bump `PacketVersion`: a peer on another version sees it as a different packet, so it never misreads one.

```cpp
class SetLabelPacket : public ll::network::PacketBase<SetLabelPacket> {
public:
    static constexpr std::string_view CustomPacketId{"mymod:set_label"};
    static constexpr uint             PacketVersion{2};
    // ...
};
```

`ll::network::getPacketId<T>` returns the id in use for `T`, and `ll::network::makePacketRuntimeId(id, version)` the
runtime id sent on the wire. Version 0 gives the plain hash of the id, so an unversioned packet keeps its runtime id.
Script engines use `makePacketRuntimeId` to talk to packets defined in C++.

### Side and Required Packets

`Side` says which end handles a packet: `PacketSide::Server` for packets sent by clients, `PacketSide::Client` for
packets sent by the server, `PacketSide::Both` (the default) for both. A handler handles the packet on the side the
packet declares, unless it passes another side as the third template argument of `PacketHandlerBase`. A client hosting
a world is both a server and a client.

A packet is required unless it declares `Optional`. While a player logs in, before the world is sent, the server checks
that the client handles every required packet with a client side, and the client checks that the server handles every
required packet with a server side. A side that lacks one is disconnected with a message listing the missing packets;
a vanilla client or server lacks them all.

```cpp
class SetLabelPacket : public ll::network::PacketBase<SetLabelPacket> {
public:
    static constexpr std::string_view        CustomPacketId{"mymod:set_label"};
    static constexpr ll::network::PacketSide Side{ll::network::PacketSide::Client};
    static constexpr bool                    Optional{true}; // the server still works with clients without the mod
    // ...
};
```

### Checking the Peer

Required packets need no check. A client or server that lacks one is disconnected during login, so a server can send
required packets to any player from `PlayerJoinEvent` on, and a client can send them to the server once the world
starts loading.

Only optional packets may be missing on the other end. Check them with `canSendTo` on the server, which takes a player
or the `NetworkIdentifier` of a connection, and with `canSendToServer` on the client:

```cpp
SetLabelPacket packet;            // declares Optional{true}
if (packet.canSendTo(player)) {   // server side
    packet.sendTo(player);
}
if (packet.canSendToServer()) {   // client side
    packet.sendToServer();
}
```

Both stay up to date: when a mod is loaded or unloaded, peers are told about just the packets it handles.

The checks are local lookups, nothing is sent. They are also static on `PacketBase`, so a packet doesn't have to be
built just to ask, which helps when picking between versions of a packet. For packets registered at runtime, pass the
runtime id to `Packet::canSendTo(id, player)` and `Packet::canSendToServer(id)`:

```cpp
if (SetLabelPacketV2::canSendToServer()) {
    SetLabelPacketV2{/* ... */}.sendToServer();
} else {
    SetLabelPacket{/* ... */}.sendToServer();
}
```

### Registering at Runtime

Script engines and other mods that define packets at runtime use `PacketRegistrar` directly. Pass the mod that owns
the registration, so it is dropped when that mod is unloaded; peers are told about handler changes right away.

```cpp
auto& registrar = ll::network::PacketRegistrar::getInstance();
auto  id        = ll::network::makePacketRuntimeId("myscript:ping", 1);
registrar.registerPacket("myscript:ping", id, [] { return std::make_unique<ScriptPacket>(/* ... */); },
                         ll::network::PacketSide::Both, /*optional=*/false, scriptMod);
registrar.registerHandler("myscript:ping", id, scriptHandler, ll::network::PacketSide::Both, scriptMod);
// ...
registrar.unregisterHandler(id);
registrar.unregisterPacket(id);
```

The handler must stay alive until it is unregistered or its mod is unloaded.

### Example: SimpleTunnel

A tunnel that carries strings both ways. `send` sends a message, and `co_await receive()` waits for the next one.
Received messages wait in a queue until a coroutine takes them, and `InterruptableSleep` wakes the waiting coroutine
when one arrives. The handler puts a message into the tunnel of the side it was received on, and a tunnel is created
the first time its side is used: a server or a client has one, and a client hosting a world has one for each side.
On each end, packets are handled on the same thread the executor runs on, so the queue needs no lock. The packet is
required, so once a player has joined, both ends have the tunnel.

Shared by the server mod and the client mod:

```cpp
#include "ll/api/coro/CoroTask.h"
#include "ll/api/coro/InterruptableSleep.h"
#include "ll/api/network/packet/Packet.h"

class SimpleTunnelPacket : public ll::network::PacketBase<SimpleTunnelPacket> {
public:
    static constexpr std::string_view CustomPacketId{"mymod:simple_tunnel"};

    std::string data;

    SimpleTunnelPacket() = default;

    explicit SimpleTunnelPacket(std::string data) : data(std::move(data)) {}

    void write(BinaryStream& stream) const override { stream.writeString(data, nullptr, nullptr); }

    Bedrock::Result<void> read(ReadOnlyBinaryStream& stream) override {
        auto value = stream.getString(4096);
        if (!value) {
            return nonstd::make_unexpected(value.error());
        }
        data = std::move(*value);
        return {};
    }
};

class SimpleTunnel {
public:
    struct Message {
        NetworkIdentifierWithSubId source;
        std::string                data;
    };

    static SimpleTunnel& of(ll::network::PacketSide side) {
        if (side == ll::network::PacketSide::Server) {
            static SimpleTunnel server;
            return server;
        }
        static SimpleTunnel client;
        return client;
    }

    void send(std::string data) const { SimpleTunnelPacket{std::move(data)}.sendToServer(); }

    void send(NetworkIdentifierWithSubId const& client, std::string data) const {
        SimpleTunnelPacket{std::move(data)}.sendToClient(client);
    }

    ll::coro::CoroTask<Message> receive() {
        while (received.empty()) {
            co_await arrived.sleep();
        }
        auto message = std::move(received.front());
        received.pop_front();
        co_return message;
    }

    void push(NetworkIdentifierWithSubId source, std::string data) {
        received.push_back({std::move(source), std::move(data)});
        arrived.interrupt();
    }

private:
    std::deque<Message>          received;
    ll::coro::InterruptableSleep arrived;
};

class SimpleTunnelHandler : public ll::network::PacketHandlerBase<SimpleTunnelHandler, SimpleTunnelPacket> {
public:
    void handlePacket(
        NetworkIdentifier const&  source,
        NetEventCallback&,
        ll::network::PacketSide   side,
        SimpleTunnelPacket const& packet
    ) const {
        SimpleTunnel::of(side).push({source, packet.mSenderSubId}, packet.data);
    }
};
```

The server mod echoes every message back, starting the loop when the mod is enabled:

```cpp
#include "ll/api/thread/ServerThreadExecutor.h"

void serveTunnel() {
    ll::coro::keepThis([]() -> ll::coro::CoroTask<> {
        auto& tunnel = SimpleTunnel::of(ll::network::PacketSide::Server);
        while (true) {
            auto message = co_await tunnel.receive();
            tunnel.send(message.source, "echo: " + message.data);
        }
    }).launch(ll::thread::ServerThreadExecutor::getDefault());
}
```

The client mod sends a message and waits for the reply:

```cpp
#include "ll/api/thread/ClientThreadExecutor.h"

void talkToServer() {
    ll::coro::keepThis([]() -> ll::coro::CoroTask<> {
        auto& tunnel = SimpleTunnel::of(ll::network::PacketSide::Client);
        tunnel.send("hello");
        auto reply = co_await tunnel.receive();
        // reply.data == "echo: hello"
    }).launch(ll::thread::ClientThreadExecutor::getDefault());
}
```

### How the Check Works

When a player logs in, after `PlayerConnectEvent`, the server holds back StartGame. It sends `levilamina:register`
listing the runtime ids of the packets it handles, followed by a `NetworkStackLatencyPacket` with a zero timestamp as a
fence. A LeviLamina client answers with its own `levilamina:register` before echoing the fence; a vanilla client drops
the unknown packet and only echoes the fence. When the fence comes back, the server checks the packets it requires and
then sends StartGame or disconnects the client. The client checks the packets it requires when StartGame arrives.

After that, each end sends `levilamina:register` again when the packets it handles change. It carries a bool, true when
the packets are now handled and false when they no longer are, then an unsigned 64-bit varint count followed by that
many 64-bit runtime ids.

## Related

- [Event](event.md) — Network events for packet interception
