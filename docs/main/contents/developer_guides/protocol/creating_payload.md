# Creating a Protocol Payload

A protocol payload is a typed message with an explicit wire contract. Design that contract before registering the C++ type: its stable name, direction, schema versions, and encoded-size limit determine whether independently updated clients and servers can communicate safely.

This guide uses a small client-to-server request. The same rules apply to server-to-client payloads.

## Define the payload type

Keep the C++ object independent from Minecraft packet classes and from compiler-specific object layout. A payload codec serializes fields explicitly, so the type does not need to be trivially copyable or packed.

```cpp
#include <cstdint>
#include <string>

struct SetLabelRequest {
    std::uint32_t entityId{};
    std::string   label;
};
```

The C++ type name is local implementation detail. It is not sent over the wire and may be refactored without changing compatibility, provided the registered payload ID and encoded schema remain unchanged.

## Choose stable identifiers

Each mod owns one protocol namespace. A module and payload then contribute local names:

```text
<protocol namespace>:<module name>/<payload name>
example:gameplay/set_label
```

For this example, `example` comes from the mod manifest, `gameplay` is the local module name, and `set_label` is the local payload name. Registration accepts the local names; do not duplicate the namespace in them.

Namespaces and module names must begin with a lowercase ASCII letter or digit. Their remaining characters may contain lowercase ASCII letters, digits, `_`, `.`, and `-`. Payload names follow the same rule and may additionally contain `/` after the first character. The limits are 64 bytes for a namespace, 64 bytes for a module name, and 128 bytes for a payload name. Use `ProtocolNamespace::parse`, `ModuleName::parse`, and `PayloadName::parse` instead of assuming a string is valid.

Treat every complete payload ID as permanent once released. Reusing an old ID for an unrelated message can make two otherwise compatible installations decode different meanings.

## Assign exactly one direction

Every payload has one direction:

- `PayloadDirection::ClientToServer` for a client request or report;
- `PayloadDirection::ServerToClient` for server state or a server notification.

Do not use the same payload ID in both directions. Define two payload types with two stable names when a feature needs a request and a response. Direction is validated before dispatch and is retained as part of the payload's registration history.

## Implement a bounded codec

A codec is a nothrow-move-constructible value with these two operations:

```cpp
Expected<> encode(Encoder&, T const&, SchemaVersion) const;
Expected<T> decode(Decoder&, SchemaVersion) const;
```

Use only the bounded `Encoder` and `Decoder` passed by the protocol. Check the schema first, place a semantic limit on every variable-length field, and forward errors rather than accepting partial data.

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

LeviLamina rejects trailing bytes after `decode` returns, so a decoder cannot silently accept an unknown suffix. Codec exceptions are converted to `CodecErrc::ExceptionEscaped`, but codecs should still be ordinary deterministic functions without blocking I/O, global state, or game-world access.

Decoding proves only that the message is structurally valid. The receiving handler must validate semantic values and authorize the requested operation against current game state.

## Encode common data shapes

The codec provides fixed-width signed and unsigned integers, `float`, `double`, Java-style `VarInt` and `VarLong`, booleans, bounded UTF-8 strings, and raw byte spans. Unsuffixed fixed-width methods use little-endian byte order; methods ending in `BE`, such as `writeI32BE`, `readU64BE`, `writeFloatBE`, and `readDoubleBE`, encode values in big-endian byte order. `U8` and `I8` need no endian-specific variant because they contain one byte. `writeVarInt` and `writeVarLong` preserve the signed two's-complement bit pattern, so a negative value occupies five or ten bytes respectively, matching the representation commonly used by Java Edition network codecs.

| Java value | Encode | Decode |
|---|---|---|
| `byte`, `short`, `int`, `long` | `writeI8`, `writeI16`, `writeI32`, `writeI64` | `readI8`, `readI16`, `readI32`, `readI64` |
| non-negative fixed-width integer | `writeU8`, `writeU16`, `writeU32`, `writeU64` | `readU8`, `readU16`, `readU32`, `readU64` |
| Minecraft-style `VarInt`, `VarLong` | `writeVarInt`, `writeVarLong` | `readVarInt`, `readVarLong` |
| `float`, `double` | `writeFloat`, `writeDouble` | `readFloat`, `readDouble` |
| `boolean` | `writeBool` | `readBool` |
| UTF-8 `String` | `writeString(value, maxBytes)` | `readString(maxBytes)` |

For a big-endian fixed-width field, use the corresponding `BE` method instead of the unsuffixed method. `VarInt` and `VarLong` define their own byte sequence and therefore have no endian variants. Do not select a method only from the C++ storage type. Select it from the payload's frozen wire schema: changing `writeI32` to `writeI32BE` or `writeVarInt`, for example, changes the bytes and requires a new schema.

Enums must declare an exact underlying type. `writeEnum` writes that fixed-width integer in little-endian order, while `writeEnumBE` uses big-endian order; `readEnum` and `readEnumBE` require a predicate so an untrusted peer cannot construct an undeclared enum value:

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

Use `writeOptional` and `readOptional` for a nullable field. The wire representation is one boolean followed by the field only when it is present. Use `writeArray` and `readArray` for a `std::array`; its compile-time extent is part of the schema, so no count is written.

Lists use a `varuint` count followed by their entries. Encoding requires the maximum accepted count. Decoding additionally requires the minimum possible encoded size of one entry; this lets the decoder reject a fabricated count against the remaining bytes before allocating a vector. The same callbacks are the extension point for a mod-defined nested type:

```cpp
struct Effect {
    EffectKind kind;
    float      strength;
};

constexpr std::size_t MaxEffects           = 32;
constexpr std::size_t MinEncodedEffectSize = 5; // u8 enum + binary32

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

Keep these callbacks explicit. The protocol deliberately does not serialize native object memory or discover fields through reflection: padding, compiler ABI, pointer members, and platform-specific types must never become part of the wire contract accidentally.

Maps use the same bounded model through `writeMap` and `readMap`. Both `std::map` and `std::unordered_map` produce `varuint count` followed by key/value pairs in strictly increasing key order. Encoding sorts entries with `std::less<>` by default instead of trusting container iteration order, so an unordered container produces stable bytes. Decoding requires the same order and rejects duplicate or equivalent keys. Pass a custom comparator as the last argument when the schema uses another key order, and keep that comparator unchanged for the lifetime of the schema.

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
    2, // at least one byte for the key and one for the string length
    [](ll::protocol::Decoder& in) { return in.readVarUint(); },
    [](ll::protocol::Decoder& in) { return in.readString(64); }
);
```

The minimum encoded entry size passed to `readMap` covers one complete key/value pair. As with lists, it is a pre-allocation guard and does not replace the maximum entry count or the limits inside key and value readers.

Use `writeByteArray` and `readByteArray` for a dynamically sized binary blob. Its wire representation is `varuint byteLength` followed by the bytes, and both operations require a maximum byte length. Unlike `writeList`, the encoder copies the contiguous byte span in one operation; unlike `writeBytes`, the length is included in the wire representation. The decoder validates the declared length against both the caller's limit and the remaining input before returning a `std::vector<std::byte>`.

```cpp
std::vector<std::byte> compressedData;

auto encodedData = output.writeByteArray(compressedData, 64 * 1024);
auto decodedData = input.readByteArray(64 * 1024);
```

Use `writeVariant` and `readVariant` for a tagged union represented by `std::variant`. The wire representation is `varuint alternativeIndex` followed by the selected alternative. Supply one writer or reader for each alternative in exactly the same order as the `std::variant` declaration:

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

Alternative indices are zero-based. Their order is part of the frozen schema: inserting or reordering alternatives changes the meaning of existing bytes and requires a new schema version. The decoder rejects an index outside the declared variant before calling any reader.

## Evolve schemas explicitly

`PayloadDefinition::schemas` lists every schema that the current implementation can encode and decode. Negotiation selects one schema supported by both endpoints.

Use these rules when evolving a payload:

1. Never change the byte meaning of an existing schema number.
2. Add a new schema number for incompatible field additions, removals, reordering, or representation changes.
3. Keep old codec branches while old peers remain supported.
4. Remove an old schema only in a release that intentionally drops compatibility with it.
5. Give a substantially different operation a new payload ID instead of accumulating unrelated schema branches.

Because the decoder requires full consumption, appending a field to schema 1 is not backward-compatible. Introduce schema 2 and branch explicitly:

```cpp
switch (schema) {
case 1:
    // Decode the original fields only.
    break;
case 2:
    // Decode the original fields and the new field.
    break;
default:
    return ll::protocol::makeCodecError(ll::protocol::CodecErrc::UnsupportedSchema);
}
```

## Select a maximum encoded size

`PayloadDefinition::maxEncodedSize` bounds the body before the codec is allowed to produce or consume it. Select the smallest value that covers every valid schema and payload field.

- The default is 256 KiB.
- The protocol hard body cap is 8 MiB.
- Per-field limits, such as the 64-byte label above, are still required.
- Minecraft framing and envelope overhead are outside this body limit.

For the example, a 256-byte body is deliberately generous while remaining far below the default:

```cpp
ll::protocol::PayloadDefinition{
    .name           = ll::protocol::PayloadName::parse("set_label").value(),
    .direction      = ll::protocol::PayloadDirection::ClientToServer,
    .requirement    = ll::protocol::PayloadRequirement::Required,
    .schemas        = {1},
    .maxEncodedSize = 256,
};
```

Do not raise this value to transport files or large snapshots. Version 1 has no streaming, fragmentation, resumable transfer, or `BulkTransfer` API. See [Protocol Limitations](limitations.md) for the supported transfer model.

The next step is [registering the module, payload, codec, and receiving handler](registering_payload.md).
