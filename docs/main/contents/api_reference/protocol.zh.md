# Protocol（协议系统）

`ll/api/protocol/` · **通用 / 服务器 / 客户端**

## 概述

`ll::protocol` API 提供了在受支持的专用服务器与客户端目标端之间进行类型化、经协商的 Payload 交换能力。它结合了模组专属的网络传输标识符、有界编解码器、登录阶段的能力协商、可撤销会话、类型化 Payload 分发以及服务器端扇出（Fan-out）发送。

Payload 声明与编解码器属于通用 API。会话获取以及部分发送操作与具体目标端相关。通过以下方式引入通用接口表面：

```cpp
#include "ll/api/protocol/Protocol.h"
```

目标端会话查找与服务器扇出功能分别在独立的头文件中提供：

```cpp
#include "ll/api/protocol/Client.h" // 仅客户端目标端
#include "ll/api/protocol/Server.h" // 仅专用服务器目标端
```

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/protocol/Protocol.h` | 通用协议 API 的聚合头文件 |
| `ll/api/protocol/Id.h` | 命名空间、名称、模块 ID 与 Payload ID |
| `ll/api/protocol/Version.h` | 核心/模式版本别名与 `VersionRange` |
| `ll/api/protocol/Direction.h` | 端点角色、传输方向与需求策略枚举 |
| `ll/api/protocol/Codec.h` | 有界 `Encoder`、`Decoder` 与 `PayloadCodec` 概念 |
| `ll/api/protocol/ModuleDescriptor.h` | 模块与特性定义以及不可变描述符 |
| `ll/api/protocol/PayloadDescriptor.h` | Payload 定义以及不可变描述符 |
| `ll/api/protocol/PayloadRegistry.h` | 模块/Payload 注册、查找、快照与所有者排空 |
| `ll/api/protocol/ModuleRegistration.h` | 仅支持移动的模块注册令牌 |
| `ll/api/protocol/PayloadRegistration.h` | 仅支持移动的 Payload 注册令牌 |
| `ll/api/protocol/Session.h` | 可撤销会话句柄与目标端发送成员方法 |
| `ll/api/protocol/SessionView.h` | 不可变的协商会话快照 |
| `ll/api/protocol/PayloadContext.h` | 传递给入站 Payload 处理器的上下文 |
| `ll/api/protocol/ProtocolEvents.h` | 连接建立、关闭与协议错误事件 |
| `ll/api/protocol/Error.h` | 类型化协议错误族 |
| `ll/api/protocol/Limits.h` | 针对标识符、声明、Payload 大小与通信速率的协议限制 |
| `ll/api/protocol/Client.h` | 客户端构建中的当前会话查找 |
| `ll/api/protocol/Server.h` | 服务器端会话/玩家查找与多接收方发送 |

## 运行模型

协议 API 仅在当前目标端启用了 LeviLamina 协议支持时可用。注册操作在进程本地执行：注册一个模块仅描述当前端点能够支持的功能，本身不会向对端发送任何内容。在登录期间，LeviLamina 会交换声明，选出相互兼容的模块、特性、Payload、模式及大小数值，且仅在两端对结果达成一致后才会发布活跃的 `Session`。

公开 API 具有四个明确的分层：

1. 标识符与定义类型：描述稳定的网络名称与支持的版本范围；
2. `PayloadRegistry`：拥有本地声明以及类型擦除的编解码器/处理器回调；
3. 注册令牌：保持声明处于存活状态，并在模组卸载注销时将其撤销；
4. `Session`、`SessionView` 与目标端辅助函数：操作于某个已协商连接的单一世代上。

Payload 不是 Minecraft 数据包类。注册的 C++ 类型会被编码到有界的协议数据体中，并通过 LeviLamina 的 [`ll::network::RuntimePacket`](network.zh.md) 传输信封（`MinecraftPacketIds::LeviLaminaRuntimePacket`，数据包 ID `201`）进行传输。运行时 Payload ID 是用于分发的传输层标识符。切勿对其进行持久化或硬编码；应使用 `PayloadId` 作为稳定的身份标识，使用已注册的 C++ 类型进行类型化查找与发送。

所有常规失败均使用 `Expected<T>` 汇报。公开操作不会使用异常来汇报畸形输入、会话缺失、模式不支持、调用线程错误或连接已关闭。

## 核心类型

### 标识符与版本

| 类型 | 用途 |
| --- | --- |
| `ProtocolNamespace` | 经过校验的模组专属命名空间。 |
| `ModuleName`, `PayloadName`, `FeatureName` | 经过校验的本地声明名称。 |
| `ModuleId` | 完整的 `<namespace>:<module>` 身份标识。 |
| `PayloadId` | 完整的 `<namespace>:<module>/<payload>` 身份标识。 |
| `CoreVersion` | LeviLamina 控制协议版本。 |
| `SchemaVersion` | Payload 编码模式版本。 |
| `VersionRange` | 闭区间非零 16 位范围，提供 `contains` 与 `highestCommon`。 |

协议命名空间来自所属模组清单中的 `protocolNamespace` 字段。它并不是传递给 `registerModule` 的任意字符串：注册表的所有权检查会防止其他模组实例在同一命名空间下注册声明。命名空间 `example` 下名为 `gameplay` 的模块其完整 ID 为 `example:gameplay`；其下名为 `set_label` 的 Payload 为 `example:gameplay/set_label`。

```cpp
auto moduleName = ll::protocol::ModuleName::parse("gameplay");
auto payloadId  = ll::protocol::PayloadId::parse("example:gameplay/set_label");
if (!moduleName || !payloadId) {
    // 转发或汇报类型化标识符错误。
}
```

解析后的标识符对象拥有其内部文本，支持比较操作与 `std::hash`。`ModuleId` 暴露了 `protocolNamespace()` 与 `name()`；`PayloadId` 暴露了 `protocolNamespace()`、`module()` 与 `name()`。组件访问器返回的是所属 ID 内部文本的视图，因此在 ID 销毁后切勿继续保留这些视图。

### 方向与需求策略

| 类型 | 取值 |
| --- | --- |
| `EndpointRole` | `Client`, `Server` |
| `PayloadDirection` | `ClientToServer`, `ServerToClient` |
| `PayloadRequirement` | `Optional`, `Required` |
| `ModuleRequirement` | `Optional`, `RequiredOnClient`, `RequiredOnServer`, `RequiredOnBoth` |

`canSend(role, direction)` 和 `canReceive(role, direction)` 提供了 `constexpr` 方向判断函数。

需求策略影响的是协商阶段，而非本地注册阶段。被标记为必需（Required）的模块或 Payload，若在对应端点缺失或不兼容，会导致登录失败。可选（Optional）的声明可能会在协商结果中被省略；尝试通过该会话发送未协商的项将返回 `SessionErrc::NotNegotiated`。传输方向始终按照客户端到服务器或服务器到客户端进行解读，与由哪个端点注册了该定义无关。

### 编解码器

`Encoder` 和 `Decoder` 为 Payload 编解码器提供有界的二进制序列化支持。没有 `BE` 后缀的方法采用小端序字节序。单字节数值无字节序区别，因此不存在单独的 `writeU8BE`、`writeI8BE`、`readU8BE` 或 `readI8BE` 方法。

| Encoder 方法 | Decoder 方法 | 网络传输表示 |
| --- | --- | --- |
| `writeU8(value)` | `readU8()` | 单字节无符号 8 位整数。 |
| `writeU16(value)` | `readU16()` | 小端序无符号 16 位整数。 |
| `writeU32(value)` | `readU32()` | 小端序无符号 32 位整数。 |
| `writeU64(value)` | `readU64()` | 小端序无符号 64 位整数。 |
| `writeI8(value)` | `readI8()` | 二进制补码表示的有符号 8 位整数。 |
| `writeI16(value)` | `readI16()` | 小端序有符号 16 位整数。 |
| `writeI32(value)` | `readI32()` | 小端序有符号 32 位整数。 |
| `writeI64(value)` | `readI64()` | 小端序有符号 64 位整数。 |
| `writeU16BE(value)` | `readU16BE()` | 大端序无符号 16 位整数。 |
| `writeU32BE(value)` | `readU32BE()` | 大端序无符号 32 位整数。 |
| `writeU64BE(value)` | `readU64BE()` | 大端序无符号 64 位整数。 |
| `writeI16BE(value)` | `readI16BE()` | 大端序有符号 16 位整数。 |
| `writeI32BE(value)` | `readI32BE()` | 大端序有符号 32 位整数。 |
| `writeI64BE(value)` | `readI64BE()` | 大端序有符号 64 位整数。 |
| `writeVarUint(value)` | `readVarUint()` | 规范 LEB128 无符号 32 位整数，占用 1 至 5 个字节。 |
| `writeVarInt(value)` | `readVarInt()` | 兼容 Java 的有符号 `VarInt`：32 位二进制补码直接作为 LEB128 编码（无 ZigZag 变换）。负数始终占用 5 个字节。 |
| `writeVarLong(value)` | `readVarLong()` | 兼容 Java 的有符号 `VarLong`：64 位二进制补码直接作为 LEB128 编码（无 ZigZag 变换）。负数始终占用 10 个字节。 |
| `writeFloat(value)` | `readFloat()` | 小端序 IEEE 754 binary32 格式。 |
| `writeDouble(value)` | `readDouble()` | 小端序 IEEE 754 binary64 格式。 |
| `writeFloatBE(value)` | `readFloatBE()` | 大端序 IEEE 754 binary32 格式。 |
| `writeDoubleBE(value)` | `readDoubleBE()` | 大端序 IEEE 754 binary64 格式。 |
| `writeBool(value)` | `readBool()` | 单字节：`0` 表示 `false`，`1` 表示 `true`。解码时其他数值将被拒绝。 |
| `writeBytes(value)` | `readBytes(length)` | 逐字写入原始字节，不带长度前缀。解码器返回对其输入的非拥有式 span。 |
| `writeByteArray(value, maxBytes)` | `readByteArray(maxBytes)` | 规范 `varuint` 字节计数后紧随原始字节。解码器返回拥有所有权的 `std::vector<std::byte>`。 |
| `writeString(value, maxBytes)` | `readString(maxBytes)` | 规范 `varuint` UTF-8 字节计数后紧随合法的 UTF-8 字节。限制是以编码字节数衡量的，而非 Unicode 码点数。 |

模板化辅助方法根据调用方提供的元素编解码器构建有界复合值：

| Encoder 方法 | Decoder 方法 | 行为说明 |
| --- | --- | --- |
| `writeEnum(value)` | `readEnum<E>(validator)` | 以小端序使用枚举的定宽底层整数，并使用 `validator` 校验解码后的值。支持所有有符号和无符号的 8、16、32、64 位底层类型。 |
| `writeEnumBE(value)` | `readEnumBE<E>(validator)` | `writeEnum` 和 `readEnum` 的大端序等价形式；8 位枚举不受影响。 |
| `writeOptional(value, writer)` | `readOptional<T>(reader)` | 写入布尔存在标记；若存在，则紧随该值。 |
| `writeList(values, maxCount, writer)` | `readList<T>(maxCount, minEncodedEntrySize, reader)` | 写入 `varuint` 元素计数后紧随各元素，解码时返回拥有所有权的 `std::vector<T>`。`minEncodedEntrySize` 必须非零，用于在分配内存前拒绝伪造的不合理数量。 |
| `writeMap(values, maxCount, keyWriter, valueWriter, keyCompare)` | `readMap<M>(maxCount, minEncodedEntrySize, keyReader, valueReader, keyCompare)` | 写入 `varuint` 条目计数后紧随按 `keyCompare` 排序的键值对。解码时要求相同的严格键顺序并拒绝重复键，可返回 `std::map`、`std::unordered_map` 或其他兼容的 Map 类型。 |
| `writeArray(values, writer)` | `readArray<T, N>(reader)` | 写入确切的 `N` 个元素（无计数前缀），解码时返回 `std::array<T, N>`。 |
| `writeVariant(value, writers...)` | `readVariant<T...>(readers...)` | 写入基于 0 的备选分支索引（作为 `varuint`），后紧随活动分支的值。必须按声明顺序为每个备选分支提供一个写入器或读取器。 |

两个编解码器对象均可移动但不可拷贝。构造 `Encoder` 时需指定最大允许的输出大小。`Encoder::size()` 报告当前已写入的字节数，`maxSize()` 报告构造时的上限，`bytes()` 暴露当前缓冲区的非拥有式视图，`takeBuffer()` 将缓冲区所有权转移到 `std::string` 中。在修改编码器或调用 `takeBuffer()` 之后，切勿继续使用 `bytes()` 返回的视图。

构造 `Decoder` 时需传入输入 span 以及最大接受的输入大小。若完整输入超过该上限，读取将失败并返回 `CodecErrc::SizeLimitExceeded`。`Decoder::size()` 报告完整输入大小，`remaining()` 报告未读字节数。`requireFullyConsumed()` 仅在所有输入均被消费完时成功。注册表分发逻辑会在 Payload 编解码器返回后自动调用它，但直接使用编解码器的用户应自行调用。

`PayloadCodec<C, T>` 要求具备不抛异常移动构造的编解码器类型，并实现：

```cpp
Expected<> encode(Encoder&, T const&, SchemaVersion) const;
Expected<T> decode(Decoder&, SchemaVersion) const;
```

`Encoder` 拥有其输出缓冲区，每次写入都会检查构造时设置的限制。接受 `maxBytes` 或 `maxCount` 的方法还会额外强制执行 Payload 编解码器提供的字段级限制。`Decoder` 绝不拥有其输入；传递给其构造函数的字节在整个解码操作期间必须保持存活。变长整数会拒绝溢出、未终止的输入以及非规范的过长表示。截断的数据体、无效的 UTF-8 字符串、过大的集合、无效的枚举或变体索引、重复或顺序错误的 Map 键，或尾随多余字段，均会被视作编解码器错误而非部分成功。

编解码器应显式根据 `schema` 进行分支处理。模式的选择是针对单个 Payload 和单个会话的，因此两个活跃对端在同一时刻可能会使用不同的模式。

#### 示例 1：标量、字节序列与缓冲区所有权

本示例使用了所有标量编码、两种字节序、原始字节、有界字节数组、字符串以及编码器/解码器的缓冲区检查方法。错误检查特意保持显式，因为生产环境中的 Payload 编解码器必须在遇到第一个失败字段时及时传播错误。

```cpp
using ll::protocol::CodecErrc;
using ll::protocol::Decoder;
using ll::protocol::Encoder;
using ll::protocol::SchemaVersion;

struct ScalarPayload {
    std::vector<std::byte> blob;
    std::string            name;
};

struct ScalarCodec {
    ll::Expected<> encode(Encoder& out, ScalarPayload const& value, SchemaVersion schema) const {
        if (schema != 1) return ll::protocol::makeCodecError(CodecErrc::UnsupportedSchema);

        if (auto r = out.writeU8(0x12); !r) return r;
        if (auto r = out.writeU16(0x1234); !r) return r;
        if (auto r = out.writeU32(0x12345678); !r) return r;
        if (auto r = out.writeU64(0x0102030405060708); !r) return r;
        if (auto r = out.writeI8(-1); !r) return r;
        if (auto r = out.writeI16(-2); !r) return r;
        if (auto r = out.writeI32(-3); !r) return r;
        if (auto r = out.writeI64(-4); !r) return r;
        if (auto r = out.writeU16BE(0x1234); !r) return r;
        if (auto r = out.writeU32BE(0x12345678); !r) return r;
        if (auto r = out.writeU64BE(0x0102030405060708); !r) return r;
        if (auto r = out.writeI16BE(-2); !r) return r;
        if (auto r = out.writeI32BE(-3); !r) return r;
        if (auto r = out.writeI64BE(-4); !r) return r;
        if (auto r = out.writeVarUint(300); !r) return r;
        if (auto r = out.writeVarInt(-300); !r) return r;
        if (auto r = out.writeVarLong(-300); !r) return r;
        if (auto r = out.writeFloat(1.25F); !r) return r;
        if (auto r = out.writeDouble(2.5); !r) return r;
        if (auto r = out.writeFloatBE(3.5F); !r) return r;
        if (auto r = out.writeDoubleBE(4.5); !r) return r;
        if (auto r = out.writeBool(true); !r) return r;

        constexpr std::array magic{std::byte{0x4C}, std::byte{0x4C}};
        if (auto r = out.writeBytes(magic); !r) return r;
        if (auto r = out.writeByteArray(value.blob, 1024); !r) return r;
        return out.writeString(value.name, 64);
    }

    ll::Expected<ScalarPayload> decode(Decoder& in, SchemaVersion schema) const {
        if (schema != 1) return ll::protocol::makeCodecError(CodecErrc::UnsupportedSchema);

        auto u8 = in.readU8();
        if (!u8) return ll::forwardError(u8.error());
        auto u16 = in.readU16();
        if (!u16) return ll::forwardError(u16.error());
        auto u32 = in.readU32();
        if (!u32) return ll::forwardError(u32.error());
        auto u64 = in.readU64();
        if (!u64) return ll::forwardError(u64.error());
        auto i8 = in.readI8();
        if (!i8) return ll::forwardError(i8.error());
        auto i16 = in.readI16();
        if (!i16) return ll::forwardError(i16.error());
        auto i32 = in.readI32();
        if (!i32) return ll::forwardError(i32.error());
        auto i64 = in.readI64();
        if (!i64) return ll::forwardError(i64.error());
        auto u16be = in.readU16BE();
        if (!u16be) return ll::forwardError(u16be.error());
        auto u32be = in.readU32BE();
        if (!u32be) return ll::forwardError(u32be.error());
        auto u64be = in.readU64BE();
        if (!u64be) return ll::forwardError(u64be.error());
        auto i16be = in.readI16BE();
        if (!i16be) return ll::forwardError(i16be.error());
        auto i32be = in.readI32BE();
        if (!i32be) return ll::forwardError(i32be.error());
        auto i64be = in.readI64BE();
        if (!i64be) return ll::forwardError(i64be.error());
        auto varUint = in.readVarUint();
        if (!varUint) return ll::forwardError(varUint.error());
        auto varInt = in.readVarInt();
        if (!varInt) return ll::forwardError(varInt.error());
        auto varLong = in.readVarLong();
        if (!varLong) return ll::forwardError(varLong.error());
        auto floating = in.readFloat();
        if (!floating) return ll::forwardError(floating.error());
        auto doubleValue = in.readDouble();
        if (!doubleValue) return ll::forwardError(doubleValue.error());
        auto floatingBE = in.readFloatBE();
        if (!floatingBE) return ll::forwardError(floatingBE.error());
        auto doubleBE = in.readDoubleBE();
        if (!doubleBE) return ll::forwardError(doubleBE.error());
        auto boolean = in.readBool();
        if (!boolean) return ll::forwardError(boolean.error());
        auto magic = in.readBytes(2);
        if (!magic) return ll::forwardError(magic.error());
        auto blob = in.readByteArray(1024);
        if (!blob) return ll::forwardError(blob.error());
        auto name = in.readString(64);
        if (!name) return ll::forwardError(name.error());

        return ScalarPayload{std::move(*blob), std::move(*name)};
    }
};

ll::Expected<ScalarPayload> roundTrip(ScalarPayload const& source) {
    Encoder     encoder{4096};
    ScalarCodec codec;

    auto encoded = codec.encode(encoder, source, 1);
    if (!encoded) return ll::forwardError(encoded.error());

    auto encodedSize = encoder.size();
    auto limit       = encoder.maxSize();
    auto preview     = encoder.bytes(); // 在修改编码器或移走其缓冲区之前有效。
    auto buffer      = encoder.takeBuffer();

    Decoder decoder{std::as_bytes(std::span{buffer}), buffer.size()};
    auto    inputSize       = decoder.size();
    auto    initiallyUnread = decoder.remaining();

    auto decoded = codec.decode(decoder, 1);
    if (!decoded) return ll::forwardError(decoded.error());

    if (auto consumed = decoder.requireFullyConsumed(); !consumed) {
        return ll::forwardError(consumed.error());
    }

    return std::move(*decoded);
}
```

#### 示例 2：枚举、可选值、列表、数组与自定义类型

通过在提供给集合辅助方法的回调内部组合基本方法，可以编码自定义类型。回调自身仍负责其字段限制与错误传播。

```cpp
enum class UpdateKind : std::uint8_t {
    Add    = 1,
    Remove = 2,
};

enum class WireMode : std::uint16_t {
    Normal = 1,
    Bulk   = 2,
};

struct Entry {
    std::uint32_t id{};
    std::string   label;
};

struct CollectionPayload {
    UpdateKind                   kind{};
    WireMode                     mode{};
    std::optional<std::string>   note;
    std::vector<Entry>           entries;
    std::array<std::int16_t, 3>  position{};
};

struct CollectionCodec {
    ll::Expected<> encode(ll::protocol::Encoder& out, CollectionPayload const& value, ll::protocol::SchemaVersion schema) const {
        if (schema != 1) return ll::protocol::makeCodecError(ll::protocol::CodecErrc::UnsupportedSchema);

        if (auto r = out.writeEnum(value.kind); !r) return r;
        if (auto r = out.writeEnumBE(value.mode); !r) return r;
        if (auto r = out.writeOptional(value.note, [](auto& encoder, std::string const& note) {
                return encoder.writeString(note, 128);
            }); !r) return r;
        if (auto r = out.writeList(value.entries, 256, [](auto& encoder, Entry const& entry) -> ll::Expected<> {
                if (auto id = encoder.writeU32(entry.id); !id) return id;
                return encoder.writeString(entry.label, 64);
            }); !r) return r;

        return out.writeArray(value.position, [](auto& encoder, std::int16_t coordinate) {
            return encoder.writeI16(coordinate);
        });
    }

    ll::Expected<CollectionPayload> decode(ll::protocol::Decoder& in, ll::protocol::SchemaVersion schema) const {
        if (schema != 1) return ll::protocol::makeCodecError(ll::protocol::CodecErrc::UnsupportedSchema);

        auto kind = in.readEnum<UpdateKind>([](UpdateKind value) {
            return value == UpdateKind::Add || value == UpdateKind::Remove;
        });
        if (!kind) return ll::forwardError(kind.error());

        auto mode = in.readEnumBE<WireMode>([](WireMode value) {
            return value == WireMode::Normal || value == WireMode::Bulk;
        });
        if (!mode) return ll::forwardError(mode.error());

        auto note = in.readOptional<std::string>([](auto& decoder) {
            return decoder.readString(128);
        });
        if (!note) return ll::forwardError(note.error());

        auto entries = in.readList<Entry>(256, 5, [](auto& decoder) -> ll::Expected<Entry> {
            auto id = decoder.readU32();
            if (!id) return ll::forwardError(id.error());

            auto label = decoder.readString(64);
            if (!label) return ll::forwardError(label.error());

            return Entry{*id, std::move(*label)};
        });
        if (!entries) return ll::forwardError(entries.error());

        auto position = in.readArray<std::int16_t, 3>([](auto& decoder) {
            return decoder.readI16();
        });
        if (!position) return ll::forwardError(position.error());

        return CollectionPayload{*kind, *mode, std::move(*note), std::move(*entries), std::move(*position)};
    }
};
```

#### 示例 3：有序 Map、无序 Map 与 Variant

`writeMap` 在编码前会对有序和无序容器进行排序，因此其传输表示是确定性的。`readMap` 在将条目插入请求的 Map 类型之前会验证该顺序。两端所使用的比较器因此构成 Payload 模式的一部分。

```cpp
using Attribute = std::variant<std::int32_t, std::string, std::vector<std::byte>>;

struct PropertyPayload {
    std::map<std::uint16_t, std::string>          names;
    std::unordered_map<std::uint16_t, Attribute>  attributes;
};

auto writeAttribute = [](ll::protocol::Encoder& out, Attribute const& value) {
    return out.writeVariant(
        value,
        [](auto& encoder, std::int32_t number) { return encoder.writeVarInt(number); },
        [](auto& encoder, std::string const& text) { return encoder.writeString(text, 256); },
        [](auto& encoder, std::vector<std::byte> const& bytes) { return encoder.writeByteArray(bytes, 4096); }
    );
};

auto readAttribute = [](ll::protocol::Decoder& in) {
    return in.readVariant<std::int32_t, std::string, std::vector<std::byte>>(
        [](auto& decoder) { return decoder.readVarInt(); },
        [](auto& decoder) { return decoder.readString(256); },
        [](auto& decoder) { return decoder.readByteArray(4096); }
    );
};

struct PropertyCodec {
    ll::Expected<> encode(ll::protocol::Encoder& out, PropertyPayload const& value, ll::protocol::SchemaVersion schema) const {
        if (schema != 1) return ll::protocol::makeCodecError(ll::protocol::CodecErrc::UnsupportedSchema);

        if (auto r = out.writeMap(
                value.names,
                128,
                [](auto& encoder, std::uint16_t key) { return encoder.writeU16(key); },
                [](auto& encoder, std::string const& name) { return encoder.writeString(name, 128); }
            ); !r) return r;

        return out.writeMap(
            value.attributes,
            128,
            [](auto& encoder, std::uint16_t key) { return encoder.writeU16(key); },
            writeAttribute
        );
    }

    ll::Expected<PropertyPayload> decode(ll::protocol::Decoder& in, ll::protocol::SchemaVersion schema) const {
        if (schema != 1) return ll::protocol::makeCodecError(ll::protocol::CodecErrc::UnsupportedSchema);

        auto names = in.readMap<std::map<std::uint16_t, std::string>>(
            128,
            3,
            [](auto& decoder) { return decoder.readU16(); },
            [](auto& decoder) { return decoder.readString(128); }
        );
        if (!names) return ll::forwardError(names.error());

        auto attributes = in.readMap<std::unordered_map<std::uint16_t, Attribute>>(
            128,
            4,
            [](auto& decoder) { return decoder.readU16(); },
            readAttribute
        );
        if (!attributes) return ll::forwardError(attributes.error());

        return PropertyPayload{std::move(*names), std::move(*attributes)};
    }
};
```

注册表包装层会捕获从编解码器或处理器中逃逸的异常并将其转换为错误。这属于安全包容边界，绝非用于通过抛出异常来进行常规验证。编解码器应返回精确的 `CodecErrorInfo`，并在 CPU 时间与内存分配上保持有界。解码仅确立网络结构有效性；业务授权与游戏状态校验应在服务器处理器中完成。

### 定义与描述符

`ModuleDefinition` 包含本地名称、语义化的 `data::Version`、支持的核心 `VersionRange`、需求策略以及特性（Feature）声明。`PayloadDefinition` 包含本地名称、单一传输方向、需求策略、支持的模式列表以及 `maxEncodedSize`。

`ModuleDescriptor` 和 `PayloadDescriptor` 是已发布的不可变视图。Payload 描述符还暴露了其模块 ID、确定性运行时 ID、所有者名称以及注册世代。

`FeatureDefinition` 由经过校验的名称、支持的版本范围以及 `required` 标志组成。特性允许模块在不创造新 Payload 模式或新模块的前提下，协商可选行为。协商成功的特性将其选定的版本记录在 `NegotiatedFeature` 中；特性缺失意味着该会话中不得使用该行为。

语义化的 `ModuleDefinition::version` 用于标识模组模块的软件发布版本。`protocolVersions` 则描述模块的网络契约，是用于兼容性判断的范围。`PayloadDefinition::schemas` 列出支持的 Payload 布局；协商会选取一个共同模式。`maxEncodedSize` 既是声明也是本地安全边界，不得超过全局 Payload 大小限制。

描述符通过 `shared_ptr<const ...>` 持有，因为注册表的发布是基于快照的。描述符在其注册被撤销后可能仍保持可读，但在旧指针中的存在并不代表其仍处于活跃状态。当当前可用性至关重要时，请使用令牌的 `active()` 状态或进行全新的注册表/会话查找。

### 注册表与所有权令牌

`PayloadRegistry::getInstance()` 暴露了：

```cpp
Expected<ModuleRegistration> registerModule(
    ModuleDefinition,
    std::weak_ptr<mod::Mod> const& owner = mod::NativeMod::current()
);

template <class T, class Codec>
Expected<PayloadRegistration> registerPayload(
    ModuleRegistration const&, PayloadDefinition, Codec
);

template <class T, class Codec>
Expected<PayloadRegistration> registerPayload(
    ModuleRegistration const&, PayloadDefinition, Codec, PayloadHandler<T>
);
```

它还提供了按文本 ID、运行时 ID 或已注册 C++ 类型查找描述符的功能；所有描述符的快照；`revision()`；以及供加载器生命周期集成的所有者排空机制。

`ModuleRegistration` 和 `PayloadRegistration` 仅支持移动语义。两者均暴露了身份标识、世代、活跃状态检查以及 `reset()`。Payload 注册令牌还额外暴露了其运行时 ID。

注册顺序必须先模块后 Payload。传递给 `registerPayload` 的 `ModuleRegistration` 必须仍处于活跃状态，且必须属于完全相同的模组身份。注册表会拒绝重复的模块 ID、Payload ID、C++ Payload 类型、运行时 ID 冲突、无效的模式列表、无效的方向以及超出支持范围的大小限制。

```cpp
struct ProtocolState {
    ll::protocol::ModuleRegistration module;
    ll::protocol::PayloadRegistration rename;

    ll::Expected<> reset() noexcept {
        if (auto payload = rename.reset(); !payload) {
            return ll::forwardError(payload.error());
        }
        return module.reset();
    }
};
```

在模组处于启用状态的整个生命周期内保留所有令牌。在常规的 LeviLamina 生命周期中，禁用模组并不一定会销毁其 DLL 或长生命周期的状态对象。因此，若模组的 `ProtocolState` 存活跨越了 `disable()`，必须在禁用期间调用 `reset()`。销毁令牌同样会撤销其声明，但析构函数无法汇报失败，且执行时机可能过晚。

在模块令牌之前重置 Payload 令牌。若仍有活跃的 Payload 声明依赖于模块，显式重置模块将失败并返回 `RegistrationErrc::PayloadsStillRegistered`。`reset()` 还可能会等待有界进行中的注册表回调；生命周期错误会细分排空中、活跃任务、死锁防护以及运行时关闭等情况。切勿从当前正在被排空的 Payload 处理器中递归调用销毁/重置操作。

当发布的声明集发生变化时，注册表的 `revision()` 会改变。活跃会话与协商它们时的修订版本绑定。注册表变更不会热更新到现有会话中；生命周期代码会关闭或使过时的会话失效，对端在利用新声明集之前必须重新协商新的快照。

#### 完整注册示例

```cpp
auto moduleName = ll::protocol::ModuleName::parse("gameplay");
if (!moduleName) return ll::forwardError(moduleName.error());

auto module = ll::protocol::PayloadRegistry::getInstance().registerModule({
    .name             = *moduleName,
    .version          = {1, 0, 0},
    .protocolVersions = {1, 2},
    .requirement      = ll::protocol::ModuleRequirement::Optional,
    .features         = {},
});
if (!module) return ll::forwardError(module.error());
state.module = std::move(*module);

auto payloadName = ll::protocol::PayloadName::parse("rename");
if (!payloadName) return ll::forwardError(payloadName.error());

auto payload = ll::protocol::PayloadRegistry::getInstance().registerPayload<RenameRequest>(
    state.module,
    {
        .name           = *payloadName,
        .direction      = ll::protocol::PayloadDirection::ClientToServer,
        .requirement    = ll::protocol::PayloadRequirement::Required,
        .schemas        = {1},
        .maxEncodedSize = 256,
    },
    RenameCodec{},
    [](ll::protocol::PayloadContext const&, RenameRequest&&) -> ll::Expected<> {
        return {};
    }
);
if (!payload) return ll::forwardError(payload.error());
state.rename = std::move(*payload);
```

在仅发送该 Payload 的端点上，可以省略处理器重载。接收端点必须为其入站声明提供处理器。C++ 类型是进程本地的，不需要在两个构建目标端中具有相同的 ABI；网络兼容性由 Payload ID、选定模式与编解码器行为定义。

### 会话与协商视图

`Session` 是一个可撤销的句柄。通用成员包括：

```cpp
explicit operator bool() const;
bool active() const;
SessionView view() const;
```

客户端目标端增加了 `sendToServer<T>`。服务器目标端增加了 `send<T>`。

`SessionView` 暴露了状态、本地角色、`PeerIdentityView`、选定的核心版本、注册表修订版本、已协商的模块与 Payload spans，以及 `findModule`/`findPayload`。`PeerIdentityView` 拥有其 `NetworkIdentifier` 拷贝；其连接描述文本是对会话快照的视图。返回的 span 和指针与视图快照绑定，无法从右值视图中获取。

`PayloadContext` 被传递给入站处理器，暴露了 `session`、`view`、`role` 和 `peer`。

#### 会话状态

| 状态 | 含义 |
| --- | --- |
| `Handshaking` | 正在进行登录服务发现与控制握手。 |
| `Negotiating` | 正在比对两端的声明集。 |
| `ReadyLocal` | 本地端点已接受协商结果。 |
| `ProtocolReady` | 协议就绪已确立，但尚未发布激活。 |
| `Active` | 允许公开的发送与接收。 |
| `Closing` | 撤销过程已开始；新的操作必须失败。 |
| `Closed` | 该世代已处于终态，无法再次变为活跃。 |

仅有活跃会话才能发送已协商的协议 Payload。`operator bool()` 指示该句柄仍能解析到其捕获的会话世代；`active()` 还会额外检查活跃状态。两者均属于状态观察，不构成并发同步保证：连接可能在检查后立即关闭，因此发送操作返回的 `Expected` 具有决定性。

`Session` 包含一个弱引用与一个连接世代。它不负责保持网络会话存活。拷贝句柄开销很小，且仍绑定到相同的世代；重新连接相同的网络身份并不会使旧句柄指向替代的新会话。

`SessionView` 是适合用于诊断与关闭事件的不可变拥有快照。默认构造的视图是无效的；查询其状态会生成关闭/默认表示，而 `operator bool()` 可将其与真实快照区分开。已协商的 span 以及 `findModule`/`findPayload` 指针仅在该 `SessionView` 存活期间有效。右值重载已被删除，以防止从临时快照中获取悬垂指针或 span。

`PeerIdentityView` 包含：

| 成员 | 契约说明 |
| --- | --- |
| `endpointInstanceId` | 标识本地协议运行时的单个实例。 |
| `connectionGeneration` | 区分复用了连接标识符的重新连接。 |
| `subClientId` | 保留 Bedrock 子客户端标识，而不将其简单折叠为主客户端。 |
| `connection` | 从所属会话快照中查看的诊断连接文本。 |
| `networkIdentifier` | 用于目标端查找的独立拥有的 Bedrock 网络身份拷贝。 |

切勿将诊断连接文本用作账户身份标识或鉴权决策依据。在服务器端，应使用 `server::getPlayer` 解析出当前的 `ServerPlayer`，随后应用常规的权限与游戏状态校验。端点与世代字段是协议身份，并非用于跨重连持久化的稳定 ID。

#### 协商状态检查

`coreProtocol()` 报告选定的 LeviLamina 控制协议版本。`modules()` 仅列出协商成功的模块，每个模块包含其选定的模块协议版本与已协商特性。`payloads()` 仅列出当前会话可用的 Payload，包含选定模式、协商方向、运行时 ID 与最大编码大小。

针对重复检查，建议使用解析后的 ID：

```cpp
auto id = ll::protocol::PayloadId::parse("example:gameplay/rename");
if (!id) return ll::forwardError(id.error());

auto view = session.view();
auto negotiated = view.findPayload(*id);
if (!negotiated) {
    return ll::protocol::makeSessionError(ll::protocol::SessionErrc::NotNegotiated, id->str());
}

auto schema = negotiated->schema;
auto limit  = negotiated->maxEncodedSize;
```

此类检查适用于可选 UI 或可选行为的判断。在每次发送前无需重复此检查：发送路径会自动再次校验状态、世代、方向、类型、模式、大小、注册表修订版本、速率以及传输层状态。

## 使用方法

### 目标端辅助函数

客户端命名空间 `ll::protocol::client`：

```cpp
Expected<Session> currentSession();
```

服务器命名空间 `ll::protocol::server`：

```cpp
Expected<Session> getSession(NetworkIdentifierWithSubId const&);
Expected<Session> getSession(Player const&);

optional_ref<ServerPlayer> getPlayer(SessionView const&);

template <class T>
Expected<FanoutResult> sendTo(
    std::span<NetworkIdentifierWithSubId const>, T const&, FanoutOptions = {}
);

template <class T>
Expected<FanoutResult> broadcast(T const&, FanoutOptions = {});
```

当视图不是活跃的服务器会话、其连接世代已过时或对应的 `ServerPlayer` 不再可用时，`getPlayer` 返回空。

`FanoutResult` 汇报请求数、尝试数、成功发送数与失败数，以及包含索引的 `FanoutFailure` 有界向量与 `failuresTruncated` 截断标记。

目标端辅助函数必须在对应端点的游戏线程上调用。查找操作可能会返回 `NotFound`、`TransportUnavailable` 或其他会话错误；若会话关闭或在查找与分发之间注册表修订版本发生变化，发送可能会进一步失败。

在客户端上，至多存在一个活跃的远程服务器协议会话：

```cpp
auto session = ll::protocol::client::currentSession();
if (!session) return ll::forwardError(session.error());

RenameRequest request{entityId, newName};
if (auto sent = session->sendToServer(request); !sent) {
    return ll::forwardError(sent.error());
}
```

在服务器上，当已有当前玩家对象时，优先使用 `Player const&` 重载；它能同时保留 `NetworkIdentifier` 和 `SubClientId`。在针对已存储的接收者数据进行寻址时，使用 `NetworkIdentifierWithSubId`。

```cpp
auto session = ll::protocol::server::getSession(player);
if (!session) return ll::forwardError(session.error());

RenameApplied update{entityId, newName};
return session->send(update);
```

### 扇出统计核算

`sendTo` 在失败记录中保留了输入顺序。`requested` 为提供的接收者条目数；`attempted` 统计成功解析为会话的条目数；`sent` 统计成功发送 Payload 的数量；`failed` 包含查找失败与发送失败。重复的接收者会被视为独立尝试，因此可能会收到重复的 Payload。

每个 `FanoutFailure` 包含其原始的 `recipientIndex`、在解析成功时的可选会话快照，以及类型化的 `Error`。`FanoutOptions::maxReportedFailures` 用于限制诊断存储，受 `Limits::MaxReportedFanoutFailures` 约束。在向量达到该上限后，`failed` 计数仍会继续累加，且 `failuresTruncated` 会变为 true。

```cpp
auto result = ll::protocol::server::sendTo<RenameApplied>(recipients, update, {
    .maxReportedFailures = 32,
});
if (!result) return ll::forwardError(result.error());

logger.info(
    "协议扇出: requested={}, sent={}, failed={}",
    result->requested,
    result->sent,
    result->failed
);
for (auto const& failure : result->failures) {
    logger.warn("接收者 {}: {}", failure.recipientIndex, failure.error.message());
}
```

`broadcast` 会对所有当前活跃的服务器会话进行快照，并使用快照顺序作为索引。成功的 `Expected<FanoutResult>` 并不代表每个接收者都发送成功；需检查 `failed`。反之，顶层的非预期（Unexpected）错误意味着扇出作为一项操作无法建立或完成，例如调用使用了错误的线程，或者该 C++ Payload 类型不是已注册的服务器到客户端声明。

## 事件

| 事件 | 数据内容 |
| --- | --- |
| `ProtocolEstablishedEvent` | 活跃的 `Session` |
| `ProtocolClosedEvent` | 最终的 `SessionView`, `ProtocolCloseReason` |
| `ProtocolErrorEvent` | 可选的 `SessionView`, `ProtocolErrc` |

关闭原因包括 `ConnectionClosed`、`ProtocolError`、`Timeout`、`RegistryChanged` 和 `RuntimeStopping`。

## 错误族

每一个可能失败的公开操作都返回 `Expected`。当程序逻辑需要具体错误码时，检查类型化的 `ErrorInfoBase` 子类型；诊断日志使用 `message()`。

| 错误信息类 | 枚举 | 领域 |
| --- | --- | --- |
| `IdentityErrorInfo` | `IdentityErrc` | 名称语法与长度。 |
| `RegistrationErrorInfo` | `RegistrationErrc` | 所有权、重复项、模式、大小限制、令牌生命周期。 |
| `CodecErrorInfo` | `CodecErrc` | 无效/截断/非规范的编码值与逃逸的编解码器异常。 |
| `SessionErrorInfo` | `SessionErrc` | 状态、世代、线程、协商、方向、速率、传输层可用性。 |
| `ProtocolErrorInfo` | `ProtocolErrc` | 控制状态机、声明、记录（Transcript）、畸形通信、速率违规。 |
| `LifecycleErrorInfo` | `LifecycleErrc` | 排空、进行中任务、死锁防护、运行时停止。 |
| `TransportErrorInfo` | `TransportErrc` | 端点、RuntimePacket、重组大小与同步发送失败。 |

工厂辅助函数 `makeIdentityError`、`makeRegistrationError`、`makeCodecError`、`makeSessionError`、`makeProtocolError`、`makeLifecycleError` 与 `makeTransportError` 用于创建类型化的意外（Unexpected）结果。

## 限制

常用的 `ll::protocol::Limits` 常量包括：

| 常量 | 数值 |
| --- | ---: |
| `MaxProtocolNamespaceBytes` | 64 字节 |
| `MaxModuleNameBytes` | 64 字节 |
| `MaxPayloadNameBytes` | 128 字节 |
| `DefaultPayloadBody` | 256 KiB |
| `MaxPayloadBody` | 8 MiB |
| `MaxSchemasPerPayload` | 8 |
| `MaxReportedFanoutFailures` | 1024 |

配置设定与协商限制可能会低于这些编译期上限。

## 相关文档

- [协议简介](../developer_guides/protocol/introduction.zh.md) — 架构、设计目标与首次接入
- [创建 Payload](../developer_guides/protocol/creating_payload.zh.md) — 传输网络模型与编解码器设计
- [注册 Payload](../developer_guides/protocol/registering_payload.zh.md) — 注册与所有权生命周期
- [发送 Payload](../developer_guides/protocol/sending_payload.zh.md) — 会话获取与发送契约
- [接收 Payload](../developer_guides/protocol/receiving_payload.zh.md) — 处理器验证与安全鉴权
- [生命周期](../developer_guides/protocol/lifecycle.zh.md) — 登录、活跃会话、关闭与重新连接
- [兼容性](../developer_guides/protocol/compatibility.zh.md) — 可选与强制的 LL/原版组合
- [版本控制](../developer_guides/protocol/versioning.zh.md) — 模块、特性与模式演进
- [限制与约束](../developer_guides/protocol/limitations.zh.md) — 当前边界与不受支持的拓扑结构
