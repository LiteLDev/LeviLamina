#pragma once

#include <concepts>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/protocol/Version.h"

namespace ll::protocol {

class Encoder {
    class Impl;
    std::unique_ptr<Impl> mImpl;

public:
    LLAPI explicit Encoder(std::size_t maxSize);
    LLAPI ~Encoder();

    Encoder(Encoder const&)            = delete;
    Encoder& operator=(Encoder const&) = delete;

    LLAPI          Encoder(Encoder&&) noexcept;
    LLAPI Encoder& operator=(Encoder&&) noexcept;

    LLNDAPI std::size_t size() const noexcept;
    LLNDAPI std::size_t maxSize() const noexcept;

    LLNDAPI std::span<std::byte const> bytes() const noexcept;

    LLNDAPI std::string takeBuffer() noexcept;

    LLNDAPI Expected<> writeU8(std::uint8_t value);
    LLNDAPI Expected<> writeU16(std::uint16_t value);
    LLNDAPI Expected<> writeU32(std::uint32_t value);
    LLNDAPI Expected<> writeU64(std::uint64_t value);
    LLNDAPI Expected<> writeI8(std::int8_t value);
    LLNDAPI Expected<> writeI16(std::int16_t value);
    LLNDAPI Expected<> writeI32(std::int32_t value);
    LLNDAPI Expected<> writeI64(std::int64_t value);
    LLNDAPI Expected<> writeU16BE(std::uint16_t value);
    LLNDAPI Expected<> writeU32BE(std::uint32_t value);
    LLNDAPI Expected<> writeU64BE(std::uint64_t value);
    LLNDAPI Expected<> writeI16BE(std::int16_t value);
    LLNDAPI Expected<> writeI32BE(std::int32_t value);
    LLNDAPI Expected<> writeI64BE(std::int64_t value);
    LLNDAPI Expected<> writeVarUint(std::uint32_t value);
    LLNDAPI Expected<> writeVarInt(std::int32_t value);
    LLNDAPI Expected<> writeVarLong(std::int64_t value);
    LLNDAPI Expected<> writeFloat(float value);
    LLNDAPI Expected<> writeDouble(double value);
    LLNDAPI Expected<> writeFloatBE(float value);
    LLNDAPI Expected<> writeDoubleBE(double value);
    LLNDAPI Expected<> writeBool(bool value);
    LLNDAPI Expected<> writeBytes(std::span<std::byte const> value);
    LLNDAPI Expected<> writeString(std::string_view value, std::size_t maxBytes);
};

class Decoder {
    class Impl;
    std::unique_ptr<Impl> mImpl;

public:
    LLAPI explicit Decoder(std::span<std::byte const> input, std::size_t maxSize);
    LLAPI ~Decoder();

    Decoder(Decoder const&)            = delete;
    Decoder& operator=(Decoder const&) = delete;

    LLAPI          Decoder(Decoder&&) noexcept;
    LLAPI Decoder& operator=(Decoder&&) noexcept;

    LLNDAPI std::size_t size() const noexcept;
    LLNDAPI std::size_t remaining() const noexcept;

    LLNDAPI Expected<std::uint8_t> readU8();
    LLNDAPI Expected<std::uint16_t> readU16();
    LLNDAPI Expected<std::uint32_t> readU32();
    LLNDAPI Expected<std::uint64_t> readU64();
    LLNDAPI Expected<std::int8_t> readI8();
    LLNDAPI Expected<std::int16_t> readI16();
    LLNDAPI Expected<std::int32_t> readI32();
    LLNDAPI Expected<std::int64_t> readI64();
    LLNDAPI Expected<std::uint16_t> readU16BE();
    LLNDAPI Expected<std::uint32_t> readU32BE();
    LLNDAPI Expected<std::uint64_t> readU64BE();
    LLNDAPI Expected<std::int16_t> readI16BE();
    LLNDAPI Expected<std::int32_t> readI32BE();
    LLNDAPI Expected<std::int64_t> readI64BE();
    LLNDAPI Expected<std::uint32_t> readVarUint();
    LLNDAPI Expected<std::int32_t> readVarInt();
    LLNDAPI Expected<std::int64_t> readVarLong();
    LLNDAPI Expected<float> readFloat();
    LLNDAPI Expected<double> readDouble();
    LLNDAPI Expected<float> readFloatBE();
    LLNDAPI Expected<double> readDoubleBE();
    LLNDAPI Expected<bool> readBool();
    LLNDAPI Expected<std::span<std::byte const>> readBytes(std::size_t length);
    LLNDAPI Expected<std::string> readString(std::size_t maxBytes);

    LLNDAPI Expected<> requireFullyConsumed() const;
};

template <class C, class T>
concept PayloadCodec = std::is_nothrow_move_constructible_v<C>
                    && requires(C const& codec, Encoder& out, Decoder& in, T const& value, SchemaVersion schema) {
                           { codec.encode(out, value, schema) } -> std::same_as<Expected<>>;
                           { codec.decode(in, schema) } -> std::same_as<Expected<T>>;
                       };

} // namespace ll::protocol
