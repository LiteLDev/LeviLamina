#include "ll/api/protocol/Codec.h"

#include "ll/api/protocol/Error.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

#include <array>
#include <bit>
#include <cstring>
#include <limits>
#include <utility>

namespace ll::protocol {

namespace detail {

bool validUtf8(std::string_view value) noexcept {
    if (value.empty()) return true;

    constexpr std::array<std::uint32_t, 5> MinCodePoint{0, 0, 0x80, 0x800, 0x10000};

    auto const* current = reinterpret_cast<unsigned char const*>(value.data());
    auto const* end     = current + value.size();
    while (current != end) {
        auto const first = *current++;
        if (first <= 0x7F) {
            continue;
        }

        auto const sequenceLength = static_cast<std::size_t>(std::countl_one(first));
        if (sequenceLength < 2 || sequenceLength > 4) {
            return false;
        }

        auto const continuationCount = sequenceLength - 1;
        if (static_cast<std::size_t>(end - current) < continuationCount) {
            return false;
        }

        std::uint32_t codePoint = first & (0x7FU >> sequenceLength);
        for (std::size_t index = 0; index < continuationCount; ++index) {
            auto const next = *current++;
            if ((next & 0xC0) != 0x80) {
                return false;
            }
            codePoint = (codePoint << 6) | (next & 0x3F);
        }

        if (codePoint < MinCodePoint[sequenceLength] || codePoint > 0x10FFFF
            || (codePoint >= 0xD800 && codePoint <= 0xDFFF)) {
            return false;
        }
    }
    return true;
}

template <class T>
std::array<std::byte, sizeof(T)> littleEndianBytes(T value) noexcept {
    static_assert(std::is_unsigned_v<T>);
    static_assert(std::endian::native == std::endian::little || std::endian::native == std::endian::big);

    if constexpr (std::endian::native == std::endian::big && sizeof(T) > 1) {
        value = std::byteswap(value);
    }
    return std::bit_cast<std::array<std::byte, sizeof(T)>>(value);
}

template <class T>
T littleEndianValue(std::array<std::byte, sizeof(T)> bytes) noexcept {
    static_assert(std::is_unsigned_v<T>);
    static_assert(std::endian::native == std::endian::little || std::endian::native == std::endian::big);

    auto value = std::bit_cast<T>(bytes);
    if constexpr (std::endian::native == std::endian::big && sizeof(T) > 1) {
        value = std::byteswap(value);
    }
    return value;
}

} // namespace detail

class Encoder::Impl {
public:
    std::string  buffer;
    BinaryStream stream{buffer};
    std::size_t  limit;

    explicit Impl(std::size_t limit) : limit(limit) { buffer.reserve(std::min<std::size_t>(limit, 4096)); }

    Expected<> append(std::span<std::byte const> value) noexcept {
        if (value.size() > limit - buffer.size()) {
            return makeCodecError(CodecErrc::SizeLimitExceeded);
        }

        try {
            stream.write(reinterpret_cast<char const*>(value.data()), value.size());
            return {};
        } catch (...) {
            return makeCodecError(CodecErrc::ExceptionEscaped);
        }
    }
};

class Decoder::Impl {
public:
    std::span<std::byte const> input;
    ReadOnlyBinaryStream       stream;
    std::size_t                cursor{};
    bool                       sizeLimitExceeded{};

    explicit Impl(std::span<std::byte const> input, bool sizeLimitExceeded = false)
    : input(input),
      stream(std::string_view{reinterpret_cast<char const*>(input.data()), input.size()}, false),
      sizeLimitExceeded(sizeLimitExceeded) {}

    Expected<std::span<std::byte const>> read(std::size_t length) noexcept {
        if (sizeLimitExceeded) {
            return makeCodecError(CodecErrc::SizeLimitExceeded);
        }
        if (length > input.size() - cursor) {
            return makeCodecError(CodecErrc::Truncated);
        }

        auto result  = input.subspan(cursor, length);
        cursor      += length;

        stream.mReadPointer = cursor;
        return result;
    }
};

Encoder::Encoder(std::size_t maxSize) : mImpl(std::make_unique<Impl>(maxSize)) {}

Encoder::~Encoder()                             = default;
Encoder::Encoder(Encoder&&) noexcept            = default;
Encoder& Encoder::operator=(Encoder&&) noexcept = default;

std::size_t Encoder::size() const noexcept { return mImpl->buffer.size(); }
std::size_t Encoder::maxSize() const noexcept { return mImpl->limit; }

std::span<std::byte const> Encoder::bytes() const noexcept {
    return {reinterpret_cast<std::byte const*>(mImpl->buffer.data()), mImpl->buffer.size()};
}

std::string Encoder::takeBuffer() noexcept { return std::move(mImpl->buffer); }

Expected<> Encoder::writeU8(std::uint8_t value) noexcept {
    auto bytes = detail::littleEndianBytes(value);
    return mImpl->append(bytes);
}
Expected<> Encoder::writeU16(std::uint16_t value) noexcept {
    auto bytes = detail::littleEndianBytes(value);
    return mImpl->append(bytes);
}
Expected<> Encoder::writeU32(std::uint32_t value) noexcept {
    auto bytes = detail::littleEndianBytes(value);
    return mImpl->append(bytes);
}
Expected<> Encoder::writeU64(std::uint64_t value) noexcept {
    auto bytes = detail::littleEndianBytes(value);
    return mImpl->append(bytes);
}
Expected<> Encoder::writeVarUint(std::uint32_t value) noexcept {
    std::array<std::byte, 5> bytes{};
    std::size_t              size{};
    do {
        auto current   = static_cast<std::uint8_t>(value & 0x7FU);
        value        >>= 7U;
        if (value != 0) {
            current |= 0x80U;
        }
        bytes[size++] = static_cast<std::byte>(current);
    } while (value != 0);

    return mImpl->append(std::span{bytes}.first(size));
}
Expected<> Encoder::writeBool(bool value) noexcept { return writeU8(value ? 1 : 0); }
Expected<> Encoder::writeBytes(std::span<std::byte const> value) noexcept { return mImpl->append(value); }
Expected<> Encoder::writeString(std::string_view value, std::size_t maxBytes) noexcept {
    if (value.size() > maxBytes || value.size() > std::numeric_limits<std::uint32_t>::max()) {
        return makeCodecError(CodecErrc::SizeLimitExceeded);
    }
    if (!detail::validUtf8(value)) {
        return makeCodecError(CodecErrc::InvalidUtf8);
    }

    std::size_t prefixSize = 1;
    for (auto remaining = static_cast<std::uint32_t>(value.size()); remaining >= 0x80U; remaining >>= 7U) {
        ++prefixSize;
    }
    if (prefixSize + value.size() > mImpl->limit - mImpl->buffer.size()) {
        return makeCodecError(CodecErrc::SizeLimitExceeded);
    }

    if (auto result = writeVarUint(static_cast<std::uint32_t>(value.size())); !result) {
        return result;
    }
    return writeBytes({reinterpret_cast<std::byte const*>(value.data()), value.size()});
}

Decoder::Decoder(std::span<std::byte const> input, std::size_t maxSize)
: mImpl(std::make_unique<Impl>(input, input.size() > maxSize)) {}

Decoder::~Decoder()                             = default;
Decoder::Decoder(Decoder&&) noexcept            = default;
Decoder& Decoder::operator=(Decoder&&) noexcept = default;

std::size_t Decoder::size() const noexcept { return mImpl->input.size(); }
std::size_t Decoder::remaining() const noexcept {
    if (mImpl->sizeLimitExceeded || mImpl->cursor > mImpl->input.size()) {
        return 0;
    }
    return mImpl->input.size() - mImpl->cursor;
}

Expected<std::span<std::byte const>> Decoder::readBytes(std::size_t length) noexcept { return mImpl->read(length); }
Expected<std::uint8_t>               Decoder::readU8() noexcept {
    auto bytes = readBytes(1);
    if (!bytes) {
        return forwardError(bytes.error());
    }
    return std::to_integer<std::uint8_t>((*bytes)[0]);
}

template <class T>
Expected<T> readLittleEndian(Decoder& decoder) noexcept {
    auto bytes = decoder.readBytes(sizeof(T));
    if (!bytes) {
        return forwardError(bytes.error());
    }

    std::array<std::byte, sizeof(T)> valueBytes{};
    std::memcpy(valueBytes.data(), bytes->data(), valueBytes.size());
    return detail::littleEndianValue<T>(valueBytes);
}

Expected<std::uint16_t> Decoder::readU16() noexcept { return readLittleEndian<std::uint16_t>(*this); }
Expected<std::uint32_t> Decoder::readU32() noexcept { return readLittleEndian<std::uint32_t>(*this); }
Expected<std::uint64_t> Decoder::readU64() noexcept { return readLittleEndian<std::uint64_t>(*this); }
Expected<std::uint32_t> Decoder::readVarUint() noexcept {
    constexpr std::size_t  MaxBytes         = 5;
    constexpr std::uint8_t PayloadMask      = 0x7F;
    constexpr std::uint8_t ContinuationMask = 0x80;

    std::uint32_t value{};
    for (std::size_t index = 0; index < MaxBytes; ++index) {
        auto byte = readU8();
        if (!byte) {
            return forwardError(byte.error());
        }

        auto const payload         = static_cast<std::uint8_t>(*byte & PayloadMask);
        auto const hasContinuation = (*byte & ContinuationMask) != 0;

        if (index == MaxBytes - 1 && (*byte & 0xF0U) != 0) {
            return makeCodecError(CodecErrc::InvalidValue, "varuint overflow");
        }

        value |= static_cast<std::uint32_t>(payload) << (index * 7U);
        if (hasContinuation) {
            continue;
        }

        if (index != 0 && payload == 0) {
            return makeCodecError(CodecErrc::NonCanonicalVarint);
        }
        return value;
    }
    return makeCodecError(CodecErrc::InvalidValue, "unterminated varuint");
}
Expected<bool> Decoder::readBool() noexcept {
    auto value = readU8();
    if (!value) {
        return forwardError(value.error());
    }
    if (*value > 1) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    return *value != 0;
}
Expected<std::string> Decoder::readString(std::size_t maxBytes) noexcept {
    auto length = readVarUint();
    if (!length) {
        return forwardError(length.error());
    }
    if (*length > maxBytes) {
        return makeCodecError(CodecErrc::SizeLimitExceeded);
    }

    auto bytes = readBytes(*length);
    if (!bytes) {
        return forwardError(bytes.error());
    }

    std::string_view const value{reinterpret_cast<char const*>(bytes->data()), bytes->size()};
    if (!detail::validUtf8(value)) {
        return makeCodecError(CodecErrc::InvalidUtf8);
    }

    std::string result;
    try {
        result.assign(value);
    } catch (...) {
        return makeCodecError(CodecErrc::ExceptionEscaped);
    }

    return result;
}

Expected<> Decoder::requireFullyConsumed() const noexcept {
    if (mImpl->sizeLimitExceeded || mImpl->cursor > mImpl->input.size()) {
        return makeCodecError(CodecErrc::SizeLimitExceeded);
    }
    if (remaining() != 0) {
        return makeCodecError(CodecErrc::TrailingBytes);
    }
    return {};
}

} // namespace ll::protocol
