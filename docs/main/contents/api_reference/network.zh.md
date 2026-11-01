# Network（网络）

`ll/api/network/` · **通用**

## 概述

Network 模块用于定义在客户端和服务器之间收发的自定义数据包。玩家进入之前，LeviLamina 会检查两端是否处理了各自需要的数据包，
之后也会持续告诉每一端对方处理哪些数据包。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/network/packet/Packet.h` | `Packet`、`PacketBase` 与 `PacketHandlerBase` |
| `ll/api/network/packet/PacketRegistrar.h` | `PacketRegistrar` 与 `PacketSide`，用于运行时注册数据包 |

## 使用方法

### 定义数据包

继承 `PacketBase` 并实现 `write` 与 `read`。继承即完成注册，不需要再调用别的函数。

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

### 处理数据包

继承 `PacketHandlerBase` 并实现 `handlePacket`。继承即完成注册，LeviLamina 会创建一个处理器实例。`side` 表示处理该数据包的一端：
客户端发来的数据包为 `PacketSide::Server`，服务器发来的为 `PacketSide::Client`。

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

### 发送数据包

```cpp
SetLabelPacket packet;
packet.label = "hello";

packet.sendToServer();                       // 客户端发往服务器
packet.sendTo(player);                       // 服务器发往某个玩家
packet.sendToClient(networkId, subClientId); // 服务器发往某个连接
packet.sendToClients();                      // 服务器发往所有客户端
```

`sendTo` 也可以传入方块坐标与维度，或者一个实体，发给其周围的玩家。

### 自定义数据包 ID 与版本

数据包在网络上默认以类型名作为标识，因此重命名类或其命名空间都会改变 ID，分开编写的服务端模组和客户端模组也必须使用相同的类型名。
如需固定 ID，可声明 `CustomPacketId`；它在编译期读取，与事件的 `CustomEventId` 相同。数据包的线上格式改变时，请增加
`PacketVersion`：版本不同的对端会把它视为另一个数据包，因此不会读错。

```cpp
class SetLabelPacket : public ll::network::PacketBase<SetLabelPacket> {
public:
    static constexpr std::string_view CustomPacketId{"mymod:set_label"};
    static constexpr uint             PacketVersion{2};
    // ...
};
```

`ll::network::getPacketId<T>` 返回 `T` 实际使用的 ID，`ll::network::makePacketRuntimeId(id, version)` 返回网络上实际发送的运行时 ID。
版本为 0 时就是 ID 的哈希，因此没有版本号的数据包运行时 ID 不变。脚本引擎通过 `makePacketRuntimeId` 与 C++ 定义的数据包互通。

### 处理端与必需数据包

`Side` 表示数据包由哪一端处理：`PacketSide::Server` 表示客户端发往服务器的数据包，`PacketSide::Client` 表示服务器发往客户端的数据包，
`PacketSide::Both`（默认）表示两端都处理。处理器默认在数据包声明的一端处理，也可以通过 `PacketHandlerBase` 的第三个模板参数另行指定。
主持世界的客户端同时是服务器和客户端。

数据包默认是必需的，声明 `Optional` 后才是可选的。玩家登录时、发送世界之前，服务器会检查客户端是否处理了所有客户端一侧的必需数据包，
客户端也会检查服务器是否处理了所有服务端一侧的必需数据包。缺少的一方会被断开连接，并提示缺少哪些数据包；原版客户端或服务器视为全部缺少。

```cpp
class SetLabelPacket : public ll::network::PacketBase<SetLabelPacket> {
public:
    static constexpr std::string_view        CustomPacketId{"mymod:set_label"};
    static constexpr ll::network::PacketSide Side{ll::network::PacketSide::Client};
    static constexpr bool                    Optional{true}; // 没有安装该模组的客户端也能进入服务器
    // ...
};
```

### 检查对端

必需数据包不需要检查。缺少必需数据包的客户端或服务器会在登录时被断开，所以服务端从 `PlayerJoinEvent` 起可以直接向任何玩家发送必需数据包，
客户端在世界开始加载后也可以直接发给服务器。

只有可选数据包可能在对端缺失。服务端用 `canSendTo` 检查，可以传入玩家或连接的 `NetworkIdentifier`；客户端用 `canSendToServer` 检查：

```cpp
SetLabelPacket packet;            // 声明了 Optional{true}
if (packet.canSendTo(player)) {   // 服务端
    packet.sendTo(player);
}
if (packet.canSendToServer()) {   // 客户端
    packet.sendToServer();
}
```

两者都会保持最新：加载或卸载模组时，只把它处理的数据包告诉对端。

这些检查只是本地查找，不会发送任何数据。它们在 `PacketBase` 上也是静态函数，不必为了检查而先构造数据包，适合在同一数据包的多个版本之间选择。
运行时注册的数据包可以把运行时 ID 传给 `Packet::canSendTo(id, player)` 和 `Packet::canSendToServer(id)`：

```cpp
if (SetLabelPacketV2::canSendToServer()) {
    SetLabelPacketV2{/* ... */}.sendToServer();
} else {
    SetLabelPacket{/* ... */}.sendToServer();
}
```

### 运行时注册

脚本引擎以及在运行时定义数据包的模组可以直接使用 `PacketRegistrar`。请传入拥有该注册的模组，这样它被卸载时注册会被移除；处理器的变化会立即告诉对端。

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

处理器在被注销或其模组被卸载之前必须保持存活。

### 示例：SimpleTunnel

一个双向传递字符串的通道。`send` 发送消息，`co_await receive()` 等待下一条消息。收到的消息先放在队列里，等协程来取；
消息到达时，`InterruptableSleep` 会唤醒正在等待的协程。处理器把消息放进收到它的那一端的通道；通道在它那一端第一次用到时才创建，服务器或客户端只有一个，主持世界的客户端两端各一个。
每一端处理数据包的线程就是执行器运行的线程，所以队列不需要加锁。该数据包是必需的，所以玩家进入之后，两端一定都有这个通道。

服务端模组和客户端模组共用：

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

服务端模组在启用时启动循环，把每条消息回显回去：

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

客户端模组发送消息并等待回复：

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

### 检查的过程

玩家登录时，在 `PlayerConnectEvent` 之后，服务器会暂缓发送 StartGame。它先发送 `levilamina:register`，列出自己处理的数据包的运行时 ID，
再发送一个时间戳为 0 的 `NetworkStackLatencyPacket` 作为栅栏。LeviLamina 客户端会在回显栅栏之前先回复自己的 `levilamina:register`；
原版客户端会丢弃不认识的数据包，只回显栅栏。栅栏回来后，服务器检查自己需要的数据包，然后发送 StartGame 或断开客户端。
客户端在收到 StartGame 时检查自己需要的数据包。

此后，任一端处理的数据包发生变化时，都会再发送 `levilamina:register`。它的内容是一个布尔值（true 表示开始处理这些数据包，false 表示不再处理），
接着是一个 64 位无符号变长整数表示的数量，后面跟着这么多个 64 位运行时 ID。

## 相关模块

- [Event（事件系统）](event.zh.md) — 用于数据包拦截的网络事件
