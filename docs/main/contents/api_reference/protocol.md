# Protocol

`ll/api/protocol/` · **Common / Server / Client**

## Overview

The `ll::protocol` API provides typed, negotiated payload exchange between the supported dedicated-server and client targets. It combines mod-owned wire identities, bounded codecs, login-time capability negotiation, revocable sessions, typed payload dispatch, and server fan-out.

Payload declarations and codecs are common API. Session acquisition and some send operations are target-specific. Include the common surface with:

```cpp
#include "ll/api/protocol/Protocol.h"
```

Target session lookup and server fan-out are separate:

```cpp
#include "ll/api/protocol/Client.h" // client target only
#include "ll/api/protocol/Server.h" // dedicated-server target only
```

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/protocol/Protocol.h` | Umbrella include for the common protocol API |
| `ll/api/protocol/Id.h` | Namespaces, names, module IDs, and payload IDs |
| `ll/api/protocol/Version.h` | Core/schema version aliases and `VersionRange` |
| `ll/api/protocol/Direction.h` | Endpoint roles, directions, and requirement enums |
| `ll/api/protocol/Codec.h` | Bounded `Encoder`, `Decoder`, and `PayloadCodec` concept |
| `ll/api/protocol/ModuleDescriptor.h` | Module and feature definitions plus immutable descriptor |
| `ll/api/protocol/PayloadDescriptor.h` | Payload definition and immutable descriptor |
| `ll/api/protocol/PayloadRegistry.h` | Module/payload registration, lookup, snapshots, and owner drain |
| `ll/api/protocol/ModuleRegistration.h` | Move-only module registration token |
| `ll/api/protocol/PayloadRegistration.h` | Move-only payload registration token |
| `ll/api/protocol/Session.h` | Revocable session handle and target send member |
| `ll/api/protocol/SessionView.h` | Immutable negotiated session snapshot |
| `ll/api/protocol/PayloadContext.h` | Context passed to inbound payload handlers |
| `ll/api/protocol/ProtocolEvents.h` | Established, closed, and protocol-error events |
| `ll/api/protocol/Error.h` | Typed protocol error families |
| `ll/api/protocol/Limits.h` | Protocol limits for identities, declarations, payload sizes, and traffic rates |
| `ll/api/protocol/Client.h` | Current-session lookup for client builds |
| `ll/api/protocol/Server.h` | Server-side session/player lookup and multi-recipient sending |

## Operating Model

The protocol API is available only when LeviLamina protocol support is enabled for the current target. Registration is process-local: registering a module describes what this endpoint can support, but does not by itself send anything to a peer. During login, LeviLamina exchanges declarations, selects compatible module, feature, payload, schema, and size values, and publishes an active `Session` only after both sides agree on the result.

The public API has four distinct layers:

1. Identity and definition types describe stable wire names and supported version ranges.
2. `PayloadRegistry` owns the local declarations and type-erased codec/handler callbacks.
3. Registration tokens keep declarations alive and revoke them during mod teardown.
4. `Session`, `SessionView`, and target helpers operate on one negotiated connection generation.

Payloads are not Minecraft packet classes. A registered C++ type is encoded into a bounded protocol body and carried through LeviLamina's [`ll::network::RuntimePacket`](network.md) transport envelope (`MinecraftPacketIds::LeviLaminaRuntimePacket`, packet ID `201`). Runtime payload IDs are transport-level identifiers used for dispatch. Do not persist or hard-code them; use `PayloadId` for stable identity and the registered C++ type for typed lookup and sending.

All normal failures use `Expected<T>`. Public operations do not use exceptions to report malformed input, an absent session, an unsupported schema, a wrong thread, or a closed connection.

## Key Types

### Identity and Versions

| Type | Purpose |
| --- | --- |
| `ProtocolNamespace` | Validated mod-owned namespace. |
| `ModuleName`, `PayloadName`, `FeatureName` | Validated local declaration names. |
| `ModuleId` | Complete `<namespace>:<module>` identity. |
| `PayloadId` | Complete `<namespace>:<module>/<payload>` identity. |
| `CoreVersion` | LeviLamina control protocol version. |
| `SchemaVersion` | Payload encoding schema version. |
| `VersionRange` | Inclusive nonzero 16-bit range with `contains` and `highestCommon`. |

The protocol namespace comes from the owning mod's `protocolNamespace` manifest field. It is not an arbitrary string passed to `registerModule`: registry ownership prevents another mod instance from registering declarations in that namespace. A module named `gameplay` in namespace `example` becomes `example:gameplay`; its payload named `set_label` becomes `example:gameplay/set_label`.

```cpp
auto moduleName = ll::protocol::ModuleName::parse("gameplay");
auto payloadId  = ll::protocol::PayloadId::parse("example:gameplay/set_label");
if (!moduleName || !payloadId) {
    // Forward or report the typed identity error.
}
```

Parsed identity values own their text and support comparison and `std::hash`. `ModuleId` exposes `protocolNamespace()` and `name()`; `PayloadId` exposes `protocolNamespace()`, `module()`, and `name()`. The component accessors return views into the owning ID, so do not retain those views after the ID is destroyed.

### Directions and Requirements

| Type | Values |
| --- | --- |
| `EndpointRole` | `Client`, `Server` |
| `PayloadDirection` | `ClientToServer`, `ServerToClient` |
| `PayloadRequirement` | `Optional`, `Required` |
| `ModuleRequirement` | `Optional`, `RequiredOnClient`, `RequiredOnServer`, `RequiredOnBoth` |

`canSend(role, direction)` and `canReceive(role, direction)` provide constexpr direction checks.

Requirements affect negotiation, not local registration. A required module or payload makes incompatibility a login failure for the side expressed by its requirement. An optional declaration may be omitted from the negotiated result; attempting to send it through that session then produces `SessionErrc::NotNegotiated`. Direction is always interpreted from client to server or server to client, independent of which endpoint registered the definition.

### Codecs

`Encoder` and `Decoder` provide bounded binary serialization for payload codecs. Methods without the `BE` suffix use little-endian byte order. A one-byte value has no byte-order distinction, so there are no separate `writeU8BE`, `writeI8BE`, `readU8BE`, or `readI8BE` methods.

| Encoder method | Decoder method | Wire representation |
| --- | --- | --- |
| `writeU8(value)` | `readU8()` | Unsigned 8-bit integer in one byte. |
| `writeU16(value)` | `readU16()` | Unsigned 16-bit integer in little-endian order. |
| `writeU32(value)` | `readU32()` | Unsigned 32-bit integer in little-endian order. |
| `writeU64(value)` | `readU64()` | Unsigned 64-bit integer in little-endian order. |
| `writeI8(value)` | `readI8()` | Signed 8-bit integer represented by its two's-complement bit pattern. |
| `writeI16(value)` | `readI16()` | Signed 16-bit integer in little-endian order. |
| `writeI32(value)` | `readI32()` | Signed 32-bit integer in little-endian order. |
| `writeI64(value)` | `readI64()` | Signed 64-bit integer in little-endian order. |
| `writeU16BE(value)` | `readU16BE()` | Unsigned 16-bit integer in big-endian order. |
| `writeU32BE(value)` | `readU32BE()` | Unsigned 32-bit integer in big-endian order. |
| `writeU64BE(value)` | `readU64BE()` | Unsigned 64-bit integer in big-endian order. |
| `writeI16BE(value)` | `readI16BE()` | Signed 16-bit integer in big-endian order. |
| `writeI32BE(value)` | `readI32BE()` | Signed 32-bit integer in big-endian order. |
| `writeI64BE(value)` | `readI64BE()` | Signed 64-bit integer in big-endian order. |
| `writeVarUint(value)` | `readVarUint()` | Unsigned 32-bit canonical LEB128 value using one to five bytes. |
| `writeVarInt(value)` | `readVarInt()` | Java-compatible signed `VarInt`: the two's-complement 32-bit pattern encoded as LEB128, without ZigZag transformation. Negative values always occupy five bytes. |
| `writeVarLong(value)` | `readVarLong()` | Java-compatible signed `VarLong`: the two's-complement 64-bit pattern encoded as LEB128, without ZigZag transformation. Negative values always occupy ten bytes. |
| `writeFloat(value)` | `readFloat()` | IEEE 754 binary32 bit pattern in little-endian order. |
| `writeDouble(value)` | `readDouble()` | IEEE 754 binary64 bit pattern in little-endian order. |
| `writeFloatBE(value)` | `readFloatBE()` | IEEE 754 binary32 bit pattern in big-endian order. |
| `writeDoubleBE(value)` | `readDoubleBE()` | IEEE 754 binary64 bit pattern in big-endian order. |
| `writeBool(value)` | `readBool()` | One byte: `0` for `false` or `1` for `true`. Other values are rejected when decoding. |
| `writeBytes(value)` | `readBytes(length)` | Bytes verbatim, without a length prefix. The decoder returns a non-owning span into its input. |
| `writeByteArray(value, maxBytes)` | `readByteArray(maxBytes)` | Canonical `varuint` byte count followed by the bytes. The decoder returns an owning `std::vector<std::byte>`. |
| `writeString(value, maxBytes)` | `readString(maxBytes)` | Canonical `varuint` UTF-8 byte count followed by valid UTF-8 bytes. The limit is measured in encoded bytes, not Unicode code points. |

The templated helpers build bounded composite values from caller-provided element codecs:

| Encoder method | Decoder method | Behavior |
| --- | --- | --- |
| `writeEnum(value)` | `readEnum<E>(validator)` | Uses the enum's fixed-width underlying integer in little-endian order and validates the decoded value with `validator`. All signed and unsigned 8-, 16-, 32-, and 64-bit underlying types are supported. |
| `writeEnumBE(value)` | `readEnumBE<E>(validator)` | The big-endian equivalent of `writeEnum` and `readEnum`; 8-bit enums are unchanged. |
| `writeOptional(value, writer)` | `readOptional<T>(reader)` | Writes a Boolean presence marker and, when present, the value. |
| `writeList(values, maxCount, writer)` | `readList<T>(maxCount, minEncodedEntrySize, reader)` | Writes a `varuint` element count followed by the elements and returns an owning `std::vector<T>` when decoding. `minEncodedEntrySize` must be nonzero and is used to reject impossible counts before allocation. |
| `writeMap(values, maxCount, keyWriter, valueWriter, keyCompare)` | `readMap<M>(maxCount, minEncodedEntrySize, keyReader, valueReader, keyCompare)` | Writes a `varuint` entry count followed by key/value pairs sorted by `keyCompare`. Decoding requires the same strict key order, rejects duplicates, and can return `std::map`, `std::unordered_map`, or another compatible map type. |
| `writeArray(values, writer)` | `readArray<T, N>(reader)` | Writes exactly `N` elements without a count prefix and returns `std::array<T, N>`. |
| `writeVariant(value, writers...)` | `readVariant<T...>(readers...)` | Writes the zero-based alternative index as a `varuint`, followed by the active alternative. One writer or reader must be supplied for every alternative in declaration order. |

Both codec objects are movable but not copyable. Construct `Encoder` with the maximum permitted output size. `Encoder::size()` reports the number of bytes currently written, `maxSize()` reports that constructor limit, `bytes()` exposes a non-owning view of the current buffer, and `takeBuffer()` transfers the buffer into an owning `std::string`. Do not continue using a view returned by `bytes()` after modifying the encoder or calling `takeBuffer()`.

Construct `Decoder` with an input span and the maximum accepted input size. Reads fail with `CodecErrc::SizeLimitExceeded` if the complete input exceeds that limit. `Decoder::size()` reports the complete input size and `remaining()` reports unread bytes. `requireFullyConsumed()` succeeds only when no input remains. Registry dispatch calls it automatically after a payload codec returns, but direct codec users should call it themselves.

`PayloadCodec<C, T>` requires a nothrow-move-constructible codec with:

```cpp
Expected<> encode(Encoder&, T const&, SchemaVersion) const;
Expected<T> decode(Decoder&, SchemaVersion) const;
```

`Encoder` owns its output buffer and every write checks the constructor limit. Methods accepting `maxBytes` or `maxCount` additionally enforce the field-specific limit supplied by the payload codec. `Decoder` never owns its input; the bytes passed to its constructor must remain alive for the complete decoding operation. Variable-length integers reject overflow, unterminated input, and non-canonical overlong representations. A truncated body, invalid UTF-8 string, oversized collection, invalid enum or variant index, duplicate or incorrectly ordered map key, or trailing field is a codec error rather than partial success.

A codec should branch explicitly on `schema`. Schema selection is per payload and per session, so two active peers may use different schemas at the same time.

#### Example 1: Scalars, byte sequences, and buffer ownership

This example uses every scalar encoding, both byte orders, raw bytes, a bounded byte array, a string, and the encoder/decoder buffer inspection methods. Error checks are intentionally explicit because a production payload codec must propagate the first failed field.

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
    auto preview     = encoder.bytes(); // Valid until the encoder is modified or its buffer is taken.
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

#### Example 2: Enums, optional values, lists, arrays, and custom types

Custom types are encoded by composing primitive methods inside the callback supplied to a collection helper. The callbacks remain responsible for their own field limits and error propagation.

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

#### Example 3: Ordered maps, unordered maps, and variants

`writeMap` sorts both ordered and unordered containers before encoding, so their wire representation is deterministic. `readMap` verifies that order before inserting entries into the requested map type. The comparator used by both peers is therefore part of the payload schema.

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

Registry wrappers catch exceptions escaping a codec or handler and translate them into an error. This is a containment boundary, not permission to throw for validation. Codecs should return a precise `CodecErrorInfo` and remain bounded in CPU time and allocation. Decode establishes wire validity only; authorization and game-state validation belong in the server handler.

### Definitions and Descriptors

`ModuleDefinition` contains a local name, semantic `data::Version`, supported core `VersionRange`, requirement, and feature declarations. `PayloadDefinition` contains a local name, one direction, requirement, supported schemas, and `maxEncodedSize`.

`ModuleDescriptor` and `PayloadDescriptor` are immutable published views. A payload descriptor also exposes its module ID, deterministic runtime ID, owner name, and registration generation.

`FeatureDefinition` consists of a validated name, supported version range, and `required` flag. Features allow a module to negotiate optional behavior without inventing another payload schema or module. A negotiated feature records the selected version in `NegotiatedFeature`; absence means the behavior must not be used for that session.

The semantic `ModuleDefinition::version` identifies the mod module release. `protocolVersions` instead describes the module's wire contract and is the range used for compatibility. `PayloadDefinition::schemas` lists supported payload layouts; negotiation chooses one common schema. `maxEncodedSize` is both a declaration and a local safety boundary and must not exceed the global payload limit.

Descriptors are held by `shared_ptr<const ...>` because registry publication is snapshot-based. A descriptor may remain readable after its registration is revoked, but its presence in an old pointer does not make it active. Use the token's `active()` state or a fresh registry/session lookup when current availability matters.

### Registry and Ownership Tokens

`PayloadRegistry::getInstance()` exposes:

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

It also provides descriptor lookup by text ID, runtime ID, or registered C++ type; snapshots of all descriptors; `revision()`; and owner drain for loader lifecycle integration.

`ModuleRegistration` and `PayloadRegistration` are move-only. Both expose identity, generation, active-state inspection, and `reset()`. A payload registration additionally exposes its runtime ID.

Registration order is module first, then payloads belonging to that module. The `ModuleRegistration` passed to `registerPayload` must still be active and must be owned by the same exact mod identity. The registry rejects duplicate module IDs, payload IDs, C++ payload types, runtime-ID collisions, invalid schema lists, invalid directions, and limits outside the supported range.

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

Keep every token for the complete enabled lifetime of the mod. In the normal LeviLamina lifecycle, disabling a mod does not necessarily destroy its DLL or long-lived state object. Therefore a mod whose `ProtocolState` survives `disable()` must call `reset()` during disable. Destroying a token also revokes its declaration, but the destructor cannot report a failure and may run too late.

Reset payload tokens before their module token. Explicit module reset fails with `RegistrationErrc::PayloadsStillRegistered` while live payload declarations still depend on it. `reset()` may also wait for bounded in-flight registry callbacks; lifecycle errors distinguish draining, active work, deadlock prevention, and runtime shutdown. Do not call teardown recursively from the payload handler currently being drained.

The registry `revision()` changes when its published declaration set changes. Active sessions are tied to the revision from which they were negotiated. Registration changes are not hot-added to an existing session; lifecycle code closes or invalidates stale sessions, and peers must negotiate a new snapshot before using the new declaration set.

#### Complete Registration Shape

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

Omit the handler overload on the endpoint that only sends a payload. A receiving endpoint needs a handler for its inbound declaration. The C++ type is process-local and does not need to have the same ABI in both build targets; wire compatibility is defined by the payload ID, selected schema, and codec behavior.

### Sessions and Negotiated Views

`Session` is a revocable handle. Common members are:

```cpp
explicit operator bool() const;
bool active() const;
SessionView view() const;
```

The client target adds `sendToServer<T>`. The server target adds `send<T>`.

`SessionView` exposes state, local role, `PeerIdentityView`, selected core version, registry revision, negotiated module and payload spans, and `findModule`/`findPayload`. `PeerIdentityView` owns its `NetworkIdentifier` copy; its connection text remains a view into the session snapshot. Returned spans and pointers are tied to the view snapshot and cannot be obtained from an rvalue view.

`PayloadContext` is passed to inbound handlers and exposes `session`, `view`, `role`, and `peer`.

#### Session States

| State | Meaning |
| --- | --- |
| `Handshaking` | Login discovery and control handshake are in progress. |
| `Negotiating` | Both declaration sets are being compared. |
| `ReadyLocal` | This endpoint has accepted the negotiated result. |
| `ProtocolReady` | Protocol readiness has been established but activation is not yet published. |
| `Active` | Public sending and receiving are allowed. |
| `Closing` | Revocation has begun; new operations must fail. |
| `Closed` | The generation is terminal and cannot become active again. |

Only an active session may send negotiated protocol payloads. `operator bool()` indicates that the handle still resolves to its captured session generation; `active()` additionally checks active state. Both are observations, not synchronization: the connection can close immediately afterward, so the `Expected` returned by send remains authoritative.

`Session` contains a weak reference and a connection generation. It does not keep the network session alive. A copied handle is inexpensive and remains pinned to the same generation; reconnecting the same network identity does not make an old handle point to the replacement session.

`SessionView` is an immutable owning snapshot suitable for diagnostics and close events. A default view is invalid; querying its state produces the closed/default representation, while `operator bool()` distinguishes it from a real snapshot. The negotiated spans and `findModule`/`findPayload` pointers are valid only while that `SessionView` remains alive. The rvalue overloads are deleted to prevent pointers or spans from being obtained from a temporary snapshot.

`PeerIdentityView` contains:

| Member | Contract |
| --- | --- |
| `endpointInstanceId` | Identifies one local protocol runtime instance. |
| `connectionGeneration` | Distinguishes reconnects that reuse connection identity. |
| `subClientId` | Preserves the Bedrock subclient instead of collapsing it to the primary client. |
| `connection` | Diagnostic connection text viewed from the owning session snapshot. |
| `networkIdentifier` | Owned Bedrock network identity copy used for target-side lookup. |

Do not use diagnostic connection text as an account identity or authorization decision. On the server, use `server::getPlayer` to resolve the current `ServerPlayer` and then apply the normal permission and game-state checks. The endpoint and generation fields are protocol identities, not stable IDs to persist across reconnects.

#### Negotiated Inspection

`coreProtocol()` reports the selected LeviLamina control protocol. `modules()` lists only negotiated modules, each with its selected module protocol version and negotiated features. `payloads()` lists only payloads usable by this session, including selected schema, negotiated direction, runtime ID, and maximum encoded size.

Use parsed IDs for repeated inspection:

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

This inspection is useful for optional UI or behavior. It is unnecessary before every send: the send path repeats the state, generation, direction, type, schema, size, registry revision, rate, and transport checks.

## Usage

### Target Helpers

Client namespace `ll::protocol::client`:

```cpp
Expected<Session> currentSession();
```

Server namespace `ll::protocol::server`:

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

`getPlayer` returns empty when the view is not an active server session, its connection generation is stale, or the corresponding `ServerPlayer` is no longer available.

`FanoutResult` reports requested, attempted, sent, and failed counts plus a bounded vector of indexed `FanoutFailure` records and `failuresTruncated`.

Target helpers must be called on the corresponding endpoint game thread. Lookup may report `NotFound`, `TransportUnavailable`, or another session error; sending may additionally fail if the session closes or the registry revision changes between lookup and dispatch.

On the client there is at most one active remote-server protocol session:

```cpp
auto session = ll::protocol::client::currentSession();
if (!session) return ll::forwardError(session.error());

RenameRequest request{entityId, newName};
if (auto sent = session->sendToServer(request); !sent) {
    return ll::forwardError(sent.error());
}
```

On the server, prefer the `Player const&` overload when a current player object is already available; it preserves both `NetworkIdentifier` and `SubClientId`. Use `NetworkIdentifierWithSubId` when addressing a stored recipient value.

```cpp
auto session = ll::protocol::server::getSession(player);
if (!session) return ll::forwardError(session.error());

RenameApplied update{entityId, newName};
return session->send(update);
```

### Fan-out Accounting

`sendTo` preserves the input order in failure records. `requested` is the number of recipient entries supplied; `attempted` counts entries that resolved to sessions; `sent` counts successful payload sends; and `failed` includes both lookup failures and send failures. Duplicate recipients are separate attempts and may therefore receive duplicate payloads.

Each `FanoutFailure` contains its original `recipientIndex`, an optional session snapshot when resolution succeeded, and the typed `Error`. `FanoutOptions::maxReportedFailures` bounds diagnostic storage and is clamped to `Limits::MaxReportedFanoutFailures`. `failed` continues counting after the vector reaches that bound and `failuresTruncated` becomes true.

```cpp
auto result = ll::protocol::server::sendTo<RenameApplied>(recipients, update, {
    .maxReportedFailures = 32,
});
if (!result) return ll::forwardError(result.error());

logger.info(
    "protocol fanout: requested={}, sent={}, failed={}",
    result->requested,
    result->sent,
    result->failed
);
for (auto const& failure : result->failures) {
    logger.warn("recipient {}: {}", failure.recipientIndex, failure.error.message());
}
```

`broadcast` snapshots all currently active server sessions and uses snapshot order for indices. A successful `Expected<FanoutResult>` does not mean every recipient succeeded; inspect `failed`. Conversely, a top-level unexpected result means fan-out could not be set up or completed as an operation, for example because the call used the wrong thread or the C++ payload type is not a registered server-to-client declaration.

## Events

| Event | Data |
| --- | --- |
| `ProtocolEstablishedEvent` | Active `Session` |
| `ProtocolClosedEvent` | Final `SessionView`, `ProtocolCloseReason` |
| `ProtocolErrorEvent` | Optional `SessionView`, `ProtocolErrc` |

Close reasons are `ConnectionClosed`, `ProtocolError`, `Timeout`, `RegistryChanged`, and `RuntimeStopping`.

## Error Families

Every fallible public operation returns `Expected`. Inspect the typed `ErrorInfoBase` subtype when program logic needs the code; use `message()` for diagnostics.

| Error information | Enum | Area |
| --- | --- | --- |
| `IdentityErrorInfo` | `IdentityErrc` | Name syntax and length. |
| `RegistrationErrorInfo` | `RegistrationErrc` | Ownership, duplicates, schemas, limits, token lifecycle. |
| `CodecErrorInfo` | `CodecErrc` | Invalid/truncated/noncanonical encoded values and escaped codec exceptions. |
| `SessionErrorInfo` | `SessionErrc` | State, generation, thread, negotiation, direction, rate, transport availability. |
| `ProtocolErrorInfo` | `ProtocolErrc` | Control state machine, declarations, transcript, malformed traffic, rate violations. |
| `LifecycleErrorInfo` | `LifecycleErrc` | Drain, in-flight work, deadlock prevention, runtime stop. |
| `TransportErrorInfo` | `TransportErrc` | Endpoint, RuntimePacket, reconstructed size, and synchronous send failures. |

Factory helpers `makeIdentityError`, `makeRegistrationError`, `makeCodecError`, `makeSessionError`, `makeProtocolError`, `makeLifecycleError`, and `makeTransportError` create typed unexpected results.

## Limits

Frequently relevant `ll::protocol::Limits` constants are:

| Constant | Value |
| --- | ---: |
| `MaxProtocolNamespaceBytes` | 64 bytes |
| `MaxModuleNameBytes` | 64 bytes |
| `MaxPayloadNameBytes` | 128 bytes |
| `DefaultPayloadBody` | 256 KiB |
| `MaxPayloadBody` | 8 MiB |
| `MaxSchemasPerPayload` | 8 |
| `MaxReportedFanoutFailures` | 1024 |

Configuration and negotiated limits may be lower than these compile-time ceilings.

## Related

- [Protocol Introduction](../developer_guides/protocol/introduction.md) — Architecture, goals, and first integration
- [Creating Payloads](../developer_guides/protocol/creating_payload.md) — Wire-model and codec design
- [Registering Payloads](../developer_guides/protocol/registering_payload.md) — Registration and ownership lifecycle
- [Sending Payloads](../developer_guides/protocol/sending_payload.md) — Session acquisition and send contracts
- [Receiving Payloads](../developer_guides/protocol/receiving_payload.md) — Handler validation and security
- [Lifecycle](../developer_guides/protocol/lifecycle.md) — Login, active sessions, shutdown, and reconnect
- [Compatibility](../developer_guides/protocol/compatibility.md) — Optional and required LL/vanilla combinations
- [Versioning](../developer_guides/protocol/versioning.md) — Module, feature, and schema evolution
- [Limitations](../developer_guides/protocol/limitations.md) — Current boundaries and unsupported topologies
