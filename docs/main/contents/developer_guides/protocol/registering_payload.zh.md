# 注册协议模块与 Payload

注册操作会发布由模组拥有的兼容性声明，并将 C++ 编解码器与处理器与其绑定。请在所属模组的常规初始化阶段完成注册，在功能可用的整个期间保留所返回的所有令牌，并对每一个 `Expected` 失败进行妥善处理。

## 声明协议命名空间

在原生模组清单（Manifest）中设置 `protocolNamespace`：

```json
{
    "entry": "ExampleMod.dll",
    "name": "ExampleMod",
    "type": "native",
    "protocolNamespace": "example"
}
```

如果未填写 `protocolNamespace`，LeviLamina 会尝试使用清单中的 `name`。普通显示名称往往不符合协议标识符语法，因此建议显式声明一个简短、稳定且全小写的命名空间。

命名空间 `levilamina` 保留用于核心协议消息。第三方清单和常规模组注册不能占用该命名空间。在一个进程中，一个命名空间只能拥有一个模组所有者身份；即使其他已加载模组名称相同，也不会被赋予所有权。

更改已发布的命名空间会改变其下所有模块和 Payload 的网络 ID。请将其视为一次破坏兼容性的重命名。

## 注册模块

通过标识符解析器创建本地标识符，并向全局注册表注册 `ModuleDefinition`：

```cpp
#include "ll/api/protocol/PayloadRegistry.h"

auto moduleName = ll::protocol::ModuleName::parse("gameplay");
if (!moduleName) {
    return ll::forwardError(moduleName.error());
}

auto deltaUpdates = ll::protocol::FeatureName::parse("delta_updates");
if (!deltaUpdates) {
    return ll::forwardError(deltaUpdates.error());
}

auto module = ll::protocol::PayloadRegistry::getInstance().registerModule({
    .name             = *moduleName,
    .version          = {1, 0, 0},
    .protocolVersions = {1, 1}, // 最小值, 最大值
    .requirement      = ll::protocol::ModuleRequirement::Optional,
    .features         = {
        {
            .name     = *deltaUpdates,
            .versions = {1, 2}, // 最小值, 最大值
            .required = false,
        },
    },
});
if (!module) {
    return ll::forwardError(module.error());
}
```

默认情况下，`registerModule` 会从 `mod::NativeMod::current()` 推断所有者。所有者决定了命名空间、启用状态、回调生命周期以及自动排空行为。仅当加载器基础设施本身已持有正确的所有者对象时，才传入显式的 `weak_ptr<mod::Mod>`；该参数绝非用于借用其他模组的命名空间。

模块名称是本地局部的。基于上述清单，LeviLamina 会派生出完整的模块 ID `example:gameplay`。

请慎重选择需求策略（Requirement）：

- `Optional`：允许在没有此模块的情况下建立会话；
- `RequiredOnClient`：强制要求客户端声明此模块；
- `RequiredOnServer`：强制要求服务器声明此模块；
- `RequiredOnBoth`：强制要求两端均声明此模块。

模块版本（`version`）描述模组模块的软件发布版本。`protocolVersions` 则描述该模块网络传输契约的兼容版本范围；它独立于 LeviLamina 核心握手版本，不能与模块的语义化软件版本混为一谈。

## 声明模块特性（Feature）

特性在 `ModuleDefinition::features` 中作为 `FeatureDefinition` 进行注册；它没有单独的注册表调用或所有权令牌。其名称在模块内部局部唯一，`versions` 范围描述该能力的兼容修订版本，`required` 决定了当对端未提供该特性或声明了不相交的版本范围时，模块是否仍可保持兼容。

### 为什么使用特性

特性是模块内部协商一致的“能力开关”。它允许两端在已经兼容的模块前提下，达成对某项可选行为的共同支持，并为当前会话选出所要使用的确切版本。典型用例包括增量更新、批量处理、可选压缩模式、更丰富的诊断信息，或者可以在不支持时回退到基线行为的优化操作。

如果没有特性声明，模组代码就必须根据对端的模组版本猜测其能力、通过盲发消息等待失败，或者强制要求所有对端都必须实现该可选行为。特性协商使这一决策在两端实际使用该行为之前就显式完成，并且所选版本会针对每个活跃会话单独记录。

请使用合适的兼容性机制：

- 当同一模块内部的行为是独立可选的，或拥有自身的小型能力版本时，使用**特性（Feature）**；
- 当单个 Payload 的二进制布局发生演进时，使用 **Payload 模式（Schema）**；
- 当引入全新的消息时，使用 **新 Payload**；
- 当某项功能需要独立的需求策略、协议范围或注册生命周期时，使用 **独立模块**。

仅当模块在该特性缺失时根本无法正常运行时，才将特性标记为 `required`。如果旧版对端可以继续使用基础行为，请保持特性为可选，并在协商后的会话视图（Session View）中根据其是否存在进行分支处理。

在协商过程中，仅当两端均声明了相同名称且版本范围有重叠时，特性才会被选定。LeviLamina 会选取两端共同支持的最高版本。缺失或不兼容的可选特性将直接从协商结果中剔除。如果任一端点将该特性标记为强制要求，整个模块将变为不兼容；此时模块的需求策略将决定是禁用该模块还是导致整个连接握手失败。

特性协商不会注册回调，也不会自动启用或禁用 Payload 处理器。正常注册模块下的各 Payload，然后在发送消息或应用特性特定行为之前，在会话视图中检查协商结果。当需要频繁使用时，可在模组的协议状态中保留解析后的稳定 `ModuleId` 和 `FeatureName`。

## 在各目标端注册 Payload

调用 `registerPayload<T>`，传入模块令牌、`PayloadDefinition` 和编解码器。在能够接收所声明方向的目标端上，处理器（Handler）是必填项。

对于上一指南中客户端到服务器的 `SetLabelRequest`，客户端注册出站 Payload，无需提供处理器：

```cpp
auto payloadName = ll::protocol::PayloadName::parse("set_label");
if (!payloadName) {
    return ll::forwardError(payloadName.error());
}

auto request = ll::protocol::PayloadRegistry::getInstance()
                   .registerPayload<SetLabelRequest>(
                       *module,
                       {
                           .name           = *payloadName,
                           .direction      = ll::protocol::PayloadDirection::ClientToServer,
                           .requirement    = ll::protocol::PayloadRequirement::Required,
                           .schemas        = {1},
                           .maxEncodedSize = 256,
                       },
                       SetLabelCodec{}
                   );
if (!request) {
    return ll::forwardError(request.error());
}
```

服务器注册相同的定义和编解码器，并附带接收处理器：

```cpp
auto request = ll::protocol::PayloadRegistry::getInstance()
                   .registerPayload<SetLabelRequest>(
                       *module,
                       {
                           .name           = *payloadName,
                           .direction      = ll::protocol::PayloadDirection::ClientToServer,
                           .requirement    = ll::protocol::PayloadRequirement::Required,
                           .schemas        = {1},
                           .maxEncodedSize = 256,
                       },
                       SetLabelCodec{},
                       [](ll::protocol::PayloadContext const& context, SetLabelRequest&& value)
                           -> ll::Expected<> {
                           // 在此处验证权限并执行有界操作。
                           return {};
                       }
                   );
if (!request) {
    return ll::forwardError(request.error());
}
```

两端必须描述兼容的 ID、方向、需求策略、模式集以及大小限制，协商才能成功暴露该 Payload。派生出的完整 ID 为 `example:gameplay/set_label`。

在同一个目标进程中，一个 C++ 类型只能标识一个活跃的 Payload 注册。即使两条消息恰好包含完全相同的字段，也请使用不同的包装类型。

## 保留仅移动令牌

`ModuleRegistration` 和 `PayloadRegistration` 是仅支持移动语义（Move-only）的所有权令牌。请将它们保存在模组的协议状态对象中：

```cpp
class ProtocolSurface {
    ll::protocol::ModuleRegistration  mModule;
    ll::protocol::PayloadRegistration mSetLabel;
};
```

移动令牌会转移所有权。销毁令牌或调用 `reset()` 会注销其注册。必须在模块令牌之前销毁其下属的 Payload 令牌；在仍有 Payload 处于注册状态时重置模块会返回 `RegistrationErrc::PayloadsStillRegistered`。

切勿在初始化函数结束时直接丢弃成功的令牌，否则声明会被立即注销。

## 启用、禁用与卸载行为

在所属模组处于禁用状态时创建的注册会保持待定（Pending）状态。在模组启用之前，它不会发布用于协商。当所有者被禁用时，LeviLamina 会在模组的 disable 回调触发或原生库卸载导致代码失效之前，先排空其所有注册和进行中的回调。

注册表变更不会对现有活跃连接就地重新协商。受影响的会话会被直接撤销，后续连接将针对新的注册表世代进行全新协商。因此，注册代码绝不能假设添加一个 Payload 会即时作用于既有会话。

请确保注册和处理器状态由同一模组的生命周期所拥有。在处理器中捕获其他模组的裸对象不会延长这些对象的生命周期，并且会绕过注册表的所有者保护机制。

## 处理注册错误

注册 API 返回 `Expected<T>`，在发生错误后不会留下可用的部分声明。相关错误类型包括：

| 错误 | 含义 |
| --- | --- |
| `OwnerUnavailable` | 所推导或提供的所有者已不存在。 |
| `OwnerDisabled` | 操作要求所有者处于启用状态。 |
| `ReservedNamespace` | 模组试图使用仅供核心保留的命名空间。 |
| `NamespaceOwned` | 另一个模组身份已占有该命名空间。 |
| `DuplicateModule`, `DuplicatePayload`, `DuplicateType` | 声明与现有的活跃注册冲突。 |
| `TombstoneMismatch` | 之前使用过的 Payload ID 正在被复用，但所有权或方向不兼容。 |
| `InvalidDirection` | 接收目标端未提供处理器。 |
| `EmptySchemaSet`, `DuplicateSchema` | 模式声明格式不正确。 |
| `InvalidLimit` | 大小、数量或世代限制无效或已耗尽。 |
| `PayloadsStillRegistered` | 模块在其下属 Payload 被重置之前无法重置。 |

记录结构化错误，并保持受影响的协议功能处于不可用状态。切勿使用默认令牌继续运行，也不要静默伪造一个替代 ID；这两种做法都会导致客户端/服务器声明不匹配。

注册完成后，即可通过协商好的 `Session` 发送 Payload。[发送](sending_payload.zh.md)与[接收](receiving_payload.zh.md)将在后续指南中介绍；线程、生命周期与大小边界详见[限制与约束](limitations.zh.md)。
