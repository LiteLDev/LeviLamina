#pragma once

#include <concepts>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <span>
#include <string>
#include <string_view>

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

    LLNDAPI Expected<> writeU8(std::uint8_t value) noexcept;
    LLNDAPI Expected<> writeU16(std::uint16_t value) noexcept;
    LLNDAPI Expected<> writeU32(std::uint32_t value) noexcept;
    LLNDAPI Expected<> writeU64(std::uint64_t value) noexcept;
    LLNDAPI Expected<> writeVarUint(std::uint32_t value) noexcept;
    LLNDAPI Expected<> writeBool(bool value) noexcept;
    LLNDAPI Expected<> writeBytes(std::span<std::byte const> value) noexcept;
    LLNDAPI Expected<> writeString(std::string_view value, std::size_t maxBytes) noexcept;
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

    LLNDAPI Expected<std::uint8_t> readU8() noexcept;
    LLNDAPI Expected<std::uint16_t> readU16() noexcept;
    LLNDAPI Expected<std::uint32_t> readU32() noexcept;
    LLNDAPI Expected<std::uint64_t> readU64() noexcept;
    LLNDAPI Expected<std::uint32_t> readVarUint() noexcept;
    LLNDAPI Expected<bool> readBool() noexcept;
    LLNDAPI Expected<std::span<std::byte const>> readBytes(std::size_t length) noexcept;
    LLNDAPI Expected<std::string> readString(std::size_t maxBytes) noexcept;

    LLNDAPI Expected<> requireFullyConsumed() const noexcept;
};

template <class C, class T>
concept PayloadCodec = requires(C const& codec, Encoder& out, Decoder& in, T const& value, SchemaVersion schema) {
    { codec.encode(out, value, schema) } -> std::same_as<Expected<>>;
    { codec.decode(in, schema) } -> std::same_as<Expected<T>>;
};

} // namespace ll::protocol
