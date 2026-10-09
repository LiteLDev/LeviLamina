# 发送协议 Payload

仅能通过活跃且已协商的 `Session`、在正确的端点游戏线程上、针对已注册的出站 Payload 成功执行发送。发送是即时发生的：LeviLamina 不会在登录完成、重新协商或线程可用之前在后台队列中暂存消息。

## 获取会话

在客户端目标端上，获取当前活跃的远程服务器会话：

```cpp
#include "ll/api/protocol/Client.h"

auto session = ll::protocol::client::currentSession();
if (!session) {
    return ll::forwardError(session.error());
}
```

在专用服务器目标端上，指定具体的 Minecraft 连接和子客户端（SubClient）：

```cpp
#include "ll/api/protocol/Server.h"

auto session = ll::protocol::server::getSession(recipient);
if (!session) {
    return ll::forwardError(session.error());
}
```

这里的 `recipient` 可以是 `NetworkIdentifierWithSubId` 或 `Player const&`。玩家重载保留了连接标识符及其真实的子客户端 ID。单独一个共享的 `NetworkIdentifier` 并不构成完整的协议接收者。

`Session` 是指向某个具体连接世代的可撤销句柄。`session.active()` 可用作快速状态检查提示，但不能保证随后的发送一定会成功。断开连接、超时、运行时关闭、注册表变更以及重新连接都可能在检查与发送之间使该句柄失效。最终的发送结果具有决定性。

会话不可变的 `SessionView` 暴露了已协商的模块、Payload、模式、限制、角色、注册表修订版本以及对端身份：

```cpp
auto view = session->view();
auto id   = ll::protocol::PayloadId::parse("example:gameplay/set_label");
if (!id) {
    return ll::forwardError(id.error());
}

if (view.findPayload(*id) == nullptr) {
    // 此可选能力未协商成功。
}
```

对于可选的模块和 Payload，请检查视图或妥善处理 `SessionErrc::NotNegotiated`。切勿仅凭本地安装的模组推断其可用性。

## 检查协商好的特性

特性没有单独的发送函数。在发送 Payload 或选用其含义依赖于某特性的字段之前，请先在会话视图中找到其所属模块并检查协商好的特性列表：

```cpp
auto moduleId = ll::protocol::ModuleId::parse("example:gameplay");
if (!moduleId) return ll::forwardError(moduleId.error());

auto featureName = ll::protocol::FeatureName::parse("delta_updates");
if (!featureName) return ll::forwardError(featureName.error());

auto view   = session->view();
auto module = view.findModule(*moduleId);
if (module == nullptr) {
    // 模块未协商成功；不要发送该模块的 Payload。
    return {};
}

auto feature = std::ranges::find(module->features, *featureName, &ll::protocol::NegotiatedFeature::name);
if (feature == module->features.end()) {
    // 可选特性未协商成功；使用基础行为或跳过该操作。
    return {};
}

if (feature->version >= 2) {
    // 执行为此特定会话协商出的第 2 版行为。
}
```

在协议初始化阶段解析并保留稳定的标识符，而不是在每次发送时重复解析字符串字面量。切勿将本地声明的最高特性版本直接作为对端的能力：不同的活跃会话可能会协商出不同的版本。

## 从客户端发送

客户端使用 `Session::sendToServer`：

```cpp
SetLabelRequest payload{
    .entityId = selectedEntityId,
    .label    = "merchant",
};

if (auto sent = session->sendToServer(payload); !sent) {
    return ll::forwardError(sent.error());
}
```

所注册类型的方向必须为 `ClientToServer`。LeviLamina 会自动选用为此特定会话协商出的模式和编码大小限制；模组代码无需在发送时手动选择模式。

## 从服务器发送

对于单个先前获取的会话，使用 `Session::send`：

```cpp
StatusUpdate payload{/* 各字段 */};
if (auto sent = session->send(payload); !sent) {
    return ll::forwardError(sent.error());
}
```

所注册类型的方向必须为 `ServerToClient`。

对于 Minecraft 接收者列表，`server::sendTo` 会解析各个会话并返回汇总结果：

```cpp
auto result = ll::protocol::server::sendTo(recipients, payload);
if (!result) {
    return ll::forwardError(result.error());
}

logger.info(
    "协议扇出发送: requested={}, sent={}, failed={}",
    result->requested,
    result->sent,
    result->failed
);

for (auto const& failure : result->failures) {
    logger.warn("接收者 {}: {}", failure.recipientIndex, failure.error.message());
}
```

`requested` 统计输入的条目数，`attempted` 统计会话解析成功的接收者数，`sent` 和 `failed` 汇报各接收者的发送结果。失败记录最多只保留到 `FanoutOptions::maxReportedFailures`（受协议上限约束）；在假定该向量记录了所有失败之前，请先检查 `failuresTruncated`。

若要向当前所有活跃的服务器会话发送，请使用 `server::broadcast`：

```cpp
auto result = ll::protocol::server::broadcast(payload, {
    .maxReportedFailures = 32,
});
if (!result) {
    return ll::forwardError(result.error());
}
```

广播在调用开始时对活跃会话进行快照。并发建立或关闭的连接不会与整个扇出过程保持事务一致性。不同接收者可能协商出了不同的模式或限制；LeviLamina 会对兼容的接收者进行分组，每个兼容组只执行一次编码。

## 遵守线程契约

在版本 1 中，所有发送 API 都必须在相应的端点游戏线程上运行。从其他线程调用会返回 `SessionErrc::WrongThread`；协议层不会自动重新调度。

- `sendToServer` 使用客户端游戏线程。
- `send`、`sendTo` 和 `broadcast` 使用服务器线程。
- 如果工作源自其他线程，请通过相应的 LeviLamina 执行器（Executor）调度有界任务。
- 在已调度的任务内部重新获取或重新校验会话，因为旧世代可能在任务排队等待时已关闭。

切勿阻塞游戏线程等待网络回复。如果某项操作需要请求/响应行为，请将后续入站的 Payload 定义为响应，并通过特性特定的请求 ID 进行关联。

## 显式处理失败

常见的会话错误包括：

| 错误 | 含义 |
| --- | --- |
| `NotFound` | 所请求的接收者不存在协议会话。 |
| `Closed` | 会话已被撤销。 |
| `WrongGeneration` | 该句柄属于较旧的连接世代。 |
| `WrongThread` | 发送操作在端点游戏线程之外执行。 |
| `WrongState` | 协商或普通登录尚未达到活跃状态。 |
| `NotNegotiated` | 该 Payload 不属于此会话契约。 |
| `WrongDirection` | 本地端点无法发送此方向的 Payload。 |
| `RegistryChanged` | 描述符世代在协商后发生了变化。 |
| `RateLimited` | 出站速率配额拒绝了本次发送。 |
| `TransportUnavailable` | 端点传输层不可用。 |

调用还可能返回编解码器和传输层错误。请勿盲目重试：大多数失败都需要生命周期变更、模组受控的退避重试或修正 Payload。协议层不提供隐式重试、离线队列或背压等待。

处理器执行方式请参阅[接收 Payload](receiving_payload.zh.md)，大小和拓扑边界请参阅[限制与约束](limitations.zh.md)。
