# 创建协议 Payload

协议 Payload 是具有显式网络传输契约（Wire Contract）的类型化消息。在注册 C++ 类型之前，请先设计好该契约：其稳定的名称、传输方向、模式版本（Schema Version）以及编码后的大小限制，决定了独立更新的客户端和服务器能否安全通信。

本指南以一个简单的客户端到服务器请求为例。相同的规则同样适用于服务器到客户端的 Payload。

## 定义 Payload 类型

保持 C++ 对象独立于 Minecraft 数据包类以及编译器特定的对象内存布局。Payload 编解码器（Codec）显式序列化各个字段，因此该类型无需满足可平凡复制（Trivially Copyable）或内存对齐紧凑（Packed）。

```cpp
#include <cstdint>
#include <string>

struct SetLabelRequest {
    std::uint32_t entityId{};
    std::string   label;
};
```

C++ 类型名称是本地实现细节。它不会在网络上传输，只要注册的 Payload ID 和编码后的模式保持不变，就可以随意重构而不会破坏兼容性。

## 选择稳定的标识符

每个模组拥有一个协议命名空间。模块与 Payload 分别贡献其本地名称：

```text
<protocol namespace>:<module name>/<payload name>
example:gameplay/set_label
```

在本例中，`example` 来自模组清单（Manifest），`gameplay` 是本地模块名称，`set_label` 是本地 Payload 名称。注册接口接受本地名称；请勿在其中重复包含命名空间。

命名空间和模块名称必须以小写 ASCII 字母或数字开头。其余字符可包含小写 ASCII 字母、数字、`_`、`.` 和 `-`。Payload 名称遵循相同的规则，且在第一个字符之后还可包含 `/`。长度限制为：命名空间 64 字节，模块名称 64 字节，Payload 名称 128 字节。请使用 `ProtocolNamespace::parse`、`ModuleName::parse` 和 `PayloadName::parse` 进行校验，而不要直接假设字符串有效。

一旦正式发布，应将每个完整的 Payload ID 视为永久不可变。将旧 ID 复用于无关消息可能会导致两个原本兼容的安装实例将其解析为不同的含义。

## 指定确切的一个方向

每个 Payload 必须具有确切的一个传输方向：

- `PayloadDirection::ClientToServer`：用于客户端请求或汇报；
- `PayloadDirection::ServerToClient`：用于服务器状态下发或服务器通知。

请勿在两个方向上使用相同的 Payload ID。当某项功能需要请求与响应时，请定义两个具有独立稳定名称的 Payload 类型。方向会在分发前进行校验，并作为 Payload 注册历史的一部分保留。

## 实现有界编解码器

编解码器（Codec）是一个支持不抛异常移动构造（Nothrow-move-constructible）的值对象，包含以下两个操作：

```cpp
Expected<> encode(Encoder&, T const&, SchemaVersion) const;
Expected<T> decode(Decoder&, SchemaVersion) const;
```

只能使用协议层传入的有界 `Encoder` 和 `Decoder`。首先检查模式版本，对每个可变长度字段施加语义限制，并在出错时转发错误，而不是接受不完整的数据。

```cpp
#include "ll/api/protocol/Codec.h"
#include "ll/api/protocol/Error.h"

class SetLabelCodec {
public:
    ll::Expected<> encode(
        ll::protocol::Encoder&       output,
        SetLabelRequest const&       value,
        ll::protocol::SchemaVersion  schema
    ) const {
        using namespace ll::protocol;

        if (schema != 1) {
            return makeCodecError(CodecErrc::UnsupportedSchema);
        }
        if (auto result = output.writeU32(value.entityId); !result) {
            return ll::forwardError(result.error());
        }
        return output.writeString(value.label, 64);
    }

    ll::Expected<SetLabelRequest> decode(
        ll::protocol::Decoder&      input,
        ll::protocol::SchemaVersion schema
    ) const {
        using namespace ll::protocol;

        if (schema != 1) {
            return makeCodecError(CodecErrc::UnsupportedSchema);
        }

        auto entityId = input.readU32();
        if (!entityId) {
            return ll::forwardError(entityId.error());
        }
        auto label = input.readString(64);
        if (!label) {
            return ll::forwardError(label.error());
        }

        return SetLabelRequest{*entityId, std::move(*label)};
    }
};
```

LeviLamina 在 `decode` 返回后会严格检查尾随字节，因此解码器无法静默接受未知的后缀数据。编解码器抛出的异常会被转换为 `CodecErrc::ExceptionEscaped`，但编解码器仍应编写为普通的确定性函数，避免包含阻塞 I/O、全局状态或对游戏世界的访问。

解码成功仅能证明消息在结构上是合法的。接收方的处理器必须进一步验证语义值，并对照当前游戏状态对所请求的操作进行授权校验。

## 编码常见数据形态

编解码器提供了定宽有符号与无符号整数、`float`、`double`、Java 风格的 `VarInt` 与 `VarLong`、布尔值、有界 UTF-8 字符串以及原始字节范围。无后缀的定宽方法采用小端序（Little-endian）；以 `BE` 结尾的方法（如 `writeI32BE`、`readU64BE`、`writeFloatBE` 和 `readDoubleBE`）采用大端序（Big-endian）编码数值。`U8` 和 `I8` 由于仅占一个字节，因此没有端序变体。`writeVarInt` 和 `writeVarLong` 保留有符号的二进制补码位模式，因此负数分别占用 5 个或 10 个字节，与 Java 版网络编解码器常用的表示一致。

| Java 数值 | 编码 | 解码 |
|---|---|---|
| `byte`, `short`, `int`, `long` | `writeI8`, `writeI16`, `writeI32`, `writeI64` | `readI8`, `readI16`, `readI32`, `readI64` |
| 非负定宽整数 | `writeU8`, `writeU16`, `writeU32`, `writeU64` | `readU8`, `readU16`, `readU32`, `readU64` |
| Minecraft 风格 `VarInt`, `VarLong` | `writeVarInt`, `writeVarLong` | `readVarInt`, `readVarLong` |
| `float`, `double` | `writeFloat`, `writeDouble` | `readFloat`, `readDouble` |
| `boolean` | `writeBool` | `readBool` |
| UTF-8 `String` | `writeString(value, maxBytes)` | `readString(maxBytes)` |

对于大端序定宽字段，请使用相应的 `BE` 方法代替无后缀方法。`VarInt` 和 `VarLong` 定义了自身的字节序列规则，因此没有端序变体。切勿仅凭 C++ 存储类型来选择方法，而必须根据 Payload 冻结的网络模式进行选择：例如将 `writeI32` 改为 `writeI32BE` 或 `writeVarInt` 会改变传输字节，必须引入新的模式。

枚举必须声明确切的底层类型。`writeEnum` 以小端序写入该定宽整数，而 `writeEnumBE` 采用大端序；`readEnum` 和 `readEnumBE` 需要提供谓词函数进行校验，防止不可信对端构造出未声明的枚举值：

```cpp
enum class EffectKind : std::uint8_t {
    Speed = 1,
    Jump  = 2,
};

auto writeResult = output.writeEnum(EffectKind::Speed);
auto kind = input.readEnum<EffectKind>([](EffectKind value) {
    return value == EffectKind::Speed || value == EffectKind::Jump;
});
```

对于可空（Nullable）字段，请使用 `writeOptional` 和 `readOptional`。其传输表示为一个布尔标记，仅在存在时才紧跟该字段的值。对于 `std::array`，使用 `writeArray` 和 `readArray`；由于其编译期大小是模式的一部分，因此无需写入元素计数。

列表使用 `varuint` 计数，随后紧跟各元素。编码时需要指定最大允许数量。解码时除最大允许数量外，还必须指定单个元素的最小可能编码大小；这使解码器能够在分配 `std::vector` 内存之前，对照剩余字节拒绝伪造的超大数量。相同的回调机制也是模组自定义嵌套类型的扩展点：

```cpp
struct Effect {
    EffectKind kind;
    float      strength;
};

constexpr std::size_t MaxEffects           = 32;
constexpr std::size_t MinEncodedEffectSize = 5; // u8 枚举 + binary32

auto encoded = output.writeList(effects, MaxEffects, [](ll::protocol::Encoder& out, Effect const& effect) -> ll::Expected<> {
    if (auto kind = out.writeEnum(effect.kind); !kind) {
        return kind;
    }
    return out.writeFloat(effect.strength);
});

auto decoded = input.readList<Effect>(
    MaxEffects,
    MinEncodedEffectSize,
    [](ll::protocol::Decoder& in) -> ll::Expected<Effect> {
        auto kind = in.readEnum<EffectKind>([](EffectKind value) {
            return value == EffectKind::Speed || value == EffectKind::Jump;
        });
        if (!kind) {
            return ll::forwardError(kind.error());
        }
        auto strength = in.readFloat();
        if (!strength) {
            return ll::forwardError(strength.error());
        }
        return Effect{*kind, *strength};
    }
);
```

请保持这些回调显式明确。协议层特意不序列化原生对象内存，也不通过反射发现字段：内存对齐填充、编译器 ABI、指针成员和平台特定类型绝不应意外混入网络传输契约中。

映射（Map）通过 `writeMap` 和 `readMap` 采用相同的有界模型。`std::map` 与 `std::unordered_map` 均按键的严格递增顺序输出 `varuint 数量` 以及键值对。编码默认使用 `std::less<>` 对条目进行排序，而不是依赖容器自身的迭代顺序，从而保证无序容器也能输出稳定的字节。解码要求相同的严格顺序，并拒绝重复或等价的键。如果模式使用了其他键排序，请作为最后一个参数传入自定义比较器，并在该模式的整个生命周期内保持该比较器不变。

```cpp
std::unordered_map<std::uint32_t, std::string> labels;

auto encodedLabels = output.writeMap(
    labels,
    128,
    [](ll::protocol::Encoder& out, std::uint32_t id) { return out.writeVarUint(id); },
    [](ll::protocol::Encoder& out, std::string const& label) { return out.writeString(label, 64); }
);

auto decodedLabels = input.readMap<std::unordered_map<std::uint32_t, std::string>>(
    128,
    2, // 键至少 1 字节，字符串长度至少 1 字节
    [](ll::protocol::Decoder& in) { return in.readVarUint(); },
    [](ll::protocol::Decoder& in) { return in.readString(64); }
);
```

传入 `readMap` 的最小编码条目大小涵盖一个完整的键值对。与列表一样，它是内存预分配防线，不能替代最大条目数限制以及键/值读取器内部的长度限制。

对于动态大小的二进制数据块（Blob），请使用 `writeByteArray` 和 `readByteArray`。其网络传输格式为 `varuint 字节长度` 后紧随字节内容，且两项操作均需要指定最大字节长度。与 `writeList` 不同，编码器一次性拷贝连续字节区间；与 `writeBytes` 不同，长度信息已包含在传输格式中。解码器在返回 `std::vector<std::byte>` 之前，会根据调用方限制和剩余输入长度对声明的长度进行校验。

```cpp
std::vector<std::byte> compressedData;

auto encodedData = output.writeByteArray(compressedData, 64 * 1024);
auto decodedData = input.readByteArray(64 * 1024);
```

对于由 `std::variant` 表示的带标签联合体（Tagged Union），请使用 `writeVariant` 和 `readVariant`。其网络传输格式为 `varuint 备选分支索引` 后紧随所选分支的数据。必须严格按照 `std::variant` 声明中的相同顺序，为每个备选分支提供一个写入器或读取器：

```cpp
using PropertyValue = std::variant<std::int32_t, float, std::string>;

auto encodedProperty = output.writeVariant(
    property,
    [](ll::protocol::Encoder& out, std::int32_t value) { return out.writeI32(value); },
    [](ll::protocol::Encoder& out, float value) { return out.writeFloat(value); },
    [](ll::protocol::Encoder& out, std::string const& value) { return out.writeString(value, 64); }
);

auto decodedProperty = input.readVariant<std::int32_t, float, std::string>(
    [](ll::protocol::Decoder& in) { return in.readI32(); },
    [](ll::protocol::Decoder& in) { return in.readFloat(); },
    [](ll::protocol::Decoder& in) { return in.readString(64); }
);
```

备选分支索引从 0 开始。它们的顺序是冻结模式的一部分：插入或重新排序备选分支会改变既有字节的含义，必须引入新的模式版本。解码器在调用任何读取器之前，会拒绝超出已声明变体范围的索引。

## 显式演进模式（Schema）

`PayloadDefinition::schemas` 列出了当前实现能够编码和解码的每一个模式。协商会选出两端均支持的一个模式。

演进 Payload 时请遵循以下规则：

1. 绝不改变现有模式编号的字节含义。
2. 对于不兼容的字段新增、删除、重新排序或表示形式变更，增加新的模式编号。
3. 只要仍需支持旧版对端，就保留旧的编解码器分支。
4. 仅在明确放弃与旧模式兼容的发布版本中移除旧模式。
5. 对于本质上不同的操作，分配新的 Payload ID，而不是在同一 Payload 下堆积无关的模式分支。

由于解码器要求完整消费所有输入，因此直接在模式 1 末尾追加字段是不向后兼容的。应引入模式 2 并进行显式分支处理：

```cpp
switch (schema) {
case 1:
    // 仅解码原有的字段。
    break;
case 2:
    // 解码原有字段以及新添加的字段。
    break;
default:
    return ll::protocol::makeCodecError(ll::protocol::CodecErrc::UnsupportedSchema);
}
```

## 选择最大编码大小

`PayloadDefinition::maxEncodedSize` 在编解码器生成或消费数据体之前对其大小进行界定。请选择能够涵盖所有合法模式及 Payload 字段的最小值。

- 默认值为 256 KiB。
- 协议层硬性限制的数据体上限为 8 MiB。
- 仍必须对各个具体字段设置限制（例如上述 64 字节的标签）。
- Minecraft 帧头和封装开销不包含在该数据体限制内。

在本例中，256 字节的数据体既能满足需求，又远低于默认上限：

```cpp
ll::protocol::PayloadDefinition{
    .name           = ll::protocol::PayloadName::parse("set_label").value(),
    .direction      = ll::protocol::PayloadDirection::ClientToServer,
    .requirement    = ll::protocol::PayloadRequirement::Required,
    .schemas        = {1},
    .maxEncodedSize = 256,
};
```

请勿为了传输文件或大型快照而调高此值。版本 1 不支持流式传输、分片传输、断点续传或 `BulkTransfer` API。有关支持的传输模型，请参阅[限制与约束](limitations.zh.md)。

下一步是[注册模块、Payload、编解码器与接收处理器](registering_payload.zh.md)。
