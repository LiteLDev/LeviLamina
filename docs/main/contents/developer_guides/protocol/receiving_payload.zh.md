# 接收协议 Payload

通过 `PayloadRegistry::registerPayload<T>` 安装接收处理器。LeviLamina 会在调用处理器之前，对信封封装、协商身份、方向、模式、长度、速率配额、描述符世代以及编解码器是否完整消费全部数据进行严格校验。

## 在接收目标端注册处理器

接收 Payload 的目标端必须提供处理器。对于客户端到服务器的 Payload，接收端为专用服务器：

```cpp
auto registration = ll::protocol::PayloadRegistry::getInstance()
                        .registerPayload<SetLabelRequest>(
                            module,
                            definition,
                            SetLabelCodec{},
                            [](ll::protocol::PayloadContext const& context, SetLabelRequest&& request)
                                -> ll::Expected<> {
                                return handleSetLabel(context, std::move(request));
                            }
                        );
if (!registration) {
    return ll::forwardError(registration.error());
}
```

对于服务器到客户端的 Payload，客户端注册时提供处理器，而服务器注册时不提供。若接收目标端缺少入站处理器，注册时将被拒绝并返回 `RegistrationErrc::InvalidDirection`。

解码成功后，Payload 值将作为右值传入。在保存解码数据时，请移动所拥有的字符串、向量或其他缓冲区；切勿保留对处理器参数本身的引用。

## 使用处理器上下文

`PayloadContext` 仅提供协议所有的、生命周期安全的交付视图：

- `session()`：当前协商会话世代的句柄；
- `view()`：不可变的协商快照；
- `role()`：本地端点角色；
- `peer()`：标识远程端点，暴露其 `NetworkIdentifier`、连接世代、连接描述文本以及 `subClientId`。

```cpp
ll::Expected<> handleSetLabel(
    ll::protocol::PayloadContext const& context,
    SetLabelRequest&&                   request
) {
    if (context.role() != ll::protocol::EndpointRole::Server) {
        return ll::protocol::makeCodecError(
            ll::protocol::CodecErrc::InvalidValue,
            "set_label received outside the server role"
        );
    }

    auto peer = context.peer();
    // 在更改游戏状态前，先解析并鉴权 peer 所代表的玩家。
    // 随后对照当前服务器端状态验证 entityId 和 label。
    return {};
}
```

`PeerIdentityView::networkIdentifier` 是一个独立拷贝。`PeerIdentityView::connection` 是对 `SessionView` 快照内部文本的视图引用；所属视图销毁后切勿保留该文本指针。仅拷贝模组确实需要的文本。同理，切勿将连接描述文本作为账户身份标识或鉴权依据。

在专用服务器上，`ll::protocol::server::getPlayer(context.view())` 仅在相同的协议连接世代处于活跃状态时才能解析出玩家。在断开连接或重新连接后，它将返回空的 `optional_ref`，因此切勿将解析结果或裸玩家指针保留到当前同步处理器作用域之外。

## 处理协商好的特性

特性没有单独的处理器。已注册的 Payload 处理器正常接收 Payload，并通过 `context.view()` 判断所属模块是否协商成功了相关特性，以及协商选出了哪个版本：

```cpp
ll::Expected<> handleDeltaUpdate(
    ll::protocol::PayloadContext const& context,
    DeltaUpdate&&                       update,
    ll::protocol::ModuleId const&       moduleId,
    ll::protocol::FeatureName const&    featureName
) {
    auto module = context.view().findModule(moduleId);
    if (module == nullptr) {
        return ll::protocol::makeSessionError(
            ll::protocol::SessionErrc::NotNegotiated,
            moduleId.str()
        );
    }

    auto feature = std::ranges::find(module->features, featureName, &ll::protocol::NegotiatedFeature::name);
    if (feature == module->features.end()) {
        return ll::protocol::makeSessionError(
            ll::protocol::SessionErrc::NotNegotiated,
            featureName.str()
        );
    }

    switch (feature->version) {
    case 1:
        return applyDeltaV1(context, std::move(update));
    case 2:
        return applyDeltaV2(context, std::move(update));
    default:
        return ll::protocol::makeSessionError(
            ll::protocol::SessionErrc::NotNegotiated,
            "unsupported negotiated delta_updates version"
        );
    }
}
```

在传入 `registerPayload` 的处理器中调用此函数，即可将其接入传输链路。此处 `moduleId` 和 `featureName` 是由模组协议状态保留的稳定解析标识符：

```cpp
auto featureName = ll::protocol::FeatureName::parse("delta_updates");
if (!featureName) {
    return ll::forwardError(featureName.error());
}

// ...

auto moduleId = module.id();

auto registration = ll::protocol::PayloadRegistry::getInstance()
                        .registerPayload<DeltaUpdate>(
                            module,
                            deltaDefinition,
                            DeltaUpdateCodec{},
                            [moduleId, featureName = *featureName](
                                ll::protocol::PayloadContext const& context,
                                DeltaUpdate&&                       update
                            ) -> ll::Expected<> {
                                return handleDeltaUpdate(
                                    context,
                                    std::move(update),
                                    moduleId,
                                    featureName
                                );
                            }
                        );
if (!registration) {
    return ll::forwardError(registration.error());
}
```

当合法的 `DeltaUpdate` 到达时，LeviLamina 会对其进行解码并调用此注册的 Lambda。该 Lambda 进而调用 `handleDeltaUpdate`，检查为该特定会话选定的特性，并分发至相应特性版本的实现代码。与其他 `PayloadRegistration` 一样妥善保留 `registration` 令牌；如果没有该令牌，处理器将被注销。

发送方在执行特性特定行为之前必须进行相同的能力检查。接收方仍必须再次验证，因为远程输入是不可信的，且单纯的 Payload 协商成功并不意味着所属模块的每个可选特性都被选定。务必使用该会话协商出的实际版本，而非本地声明的特性版本范围。

协议层既不对所请求的游戏操作鉴权，也不验证对实体的所有权。结构合法的客户端 Payload 仍然属于不可信输入。服务器处理器必须解析当前玩家、校验权限与可达性（Reachability）、校验数值范围与状态转移，并在必要时执行特定特性的速率限制。

## 保持处理器有界且非阻塞

处理器在接收端点的游戏线程上同步执行。这虽然便于访问常规游戏状态，但也带来了严格的延迟契约要求。

处理器**应当**：

- 执行有界的语义验证；
- 应用小型的游戏状态变更操作，或将有界的模组工作加入队列；
- 迅速返回 `Expected<>`；
- 避免保留对协议上下文的引用；
- 对任何生命周期长于会话的工作实施显式取消机制。

处理器**绝对不能**：

- 执行阻塞式的文件、数据库、HTTP 或进程 I/O；
- 在 Future 上等待且其完成依赖于当前游戏线程；
- 在已解码的字符串或字节字段中解析无界的次级数据格式；
- 在客户端控制的计数上运行无界循环；
- 为实施速率限制或背压而执行 Sleep 等待；
- 假定在处理器返回后会话依然保持活跃。

编解码器的字段限制保护的是内存字节分配，而非后续行为引发的计算代价。例如，包含 1000 个标识符的有界列表很容易符合 Payload 大小限制，但仍可能触发无法接受的世界全量扫描。请基于处理器最坏情况的工作量设置语义层面的限制。

## 安全卸载模组所属的工作

如果某项操作需要阻塞或开销巨大的工作，请仅拷贝该工作所需的已验证数值，并将其提交至模组拥有的执行器中。切勿将 `PayloadContext`、`SessionView` 范围、游戏对象或裸连接指针移动到工作线程中。

当工作线程后续需要发送结果时：

1. 在正确的端点游戏线程上调度一个有界的后续任务；
2. 重新解析当前会话，或使用旧句柄并接受可能发生的世代失效错误；
3. 重新检查相关游戏状态与取消标记；
4. 发送响应并处理其 `Expected` 结果。

这可以防止延迟交付的结果被意外发送给恰好复用了相关 Minecraft 状态的替代连接中。

## 返回与汇报失败

仅在 Payload 被处理器成功接受后返回 `{}`。当语义输入无效或操作无法安全继续时，返回结构化错误。切勿跨越回调边界抛出异常；虽然 LeviLamina 会将逃逸的异常转换为错误，但抛出异常仍然属于处理器缺陷而非正常控制流。

格式错误的信封、无效的协商元数据、大小违规、编解码器失败以及速率网关失败都会在分发给处理器之前被拒绝。根据严重程度和协议状态，端点可能会汇报协议错误并关闭协议会话。模组代码应当监听生命周期事件，而不是假定每条被拒绝的消息都会让会话继续保持活跃。

处理器注册受到生命周期租约（Lease）的保护。在模组禁用期间，LeviLamina 会阻止新的回调进入，并在允许所有者卸载之前等待进行中的回调排空完毕。模组本身仍必须释放其 Payload 令牌，且不得创建调用已卸载代码的游离任务。

关于令牌所有权请参阅[注册协议模块与 Payload](registering_payload.zh.md)，关于完整线程契约请参阅[限制与约束](limitations.zh.md)。
