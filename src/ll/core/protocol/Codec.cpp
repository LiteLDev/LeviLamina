#include "ll/api/protocol/Codec.h"

#include <array>
#include <bit>
#include <cstring>
#include <limits>
#include <utility>

#include "ll/api/protocol/Error.h"

namespace ll::protocol {

static_assert(sizeof(float) == sizeof(std::uint32_t) && std::numeric_limits<float>::is_iec559);
static_assert(sizeof(double) == sizeof(std::uint64_t) && std::numeric_limits<double>::is_iec559);

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

template <class T>
std::array<std::byte, sizeof(T)> bigEndianBytes(T value) noexcept {
    static_assert(std::is_unsigned_v<T>);
    static_assert(std::endian::native == std::endian::little || std::endian::native == std::endian::big);

    if constexpr (std::endian::native == std::endian::little && sizeof(T) > 1) {
        value = std::byteswap(value);
    }
    return std::bit_cast<std::array<std::byte, sizeof(T)>>(value);
}

template <class T>
T bigEndianValue(std::array<std::byte, sizeof(T)> bytes) noexcept {
    static_assert(std::is_unsigned_v<T>);
    static_assert(std::endian::native == std::endian::little || std::endian::native == std::endian::big);

    auto value = std::bit_cast<T>(bytes);
    if constexpr (std::endian::native == std::endian::little && sizeof(T) > 1) {
        value = std::byteswap(value);
    }
    return value;
}

template <class T>
Expected<> writeUnsignedVar(Encoder& encoder, T value) {
    static_assert(std::is_unsigned_v<T>);

    std::array<std::byte, (std::numeric_limits<T>::digits + 6) / 7> bytes{};
    std::size_t                                                     size{};
    do {
        auto current = static_cast<std::uint8_t>(value & static_cast<T>(0x7FU));

        value >>= 7U;
        if (value != 0) current |= 0x80U;

        bytes[size++] = static_cast<std::byte>(current);
    } while (value != 0);

    return encoder.writeBytes(std::span{bytes}.first(size));
}

template <class T>
Expected<T> readUnsignedVar(Decoder& decoder) {
    static_assert(std::is_unsigned_v<T>);

    constexpr std::size_t  MaxBytes         = (std::numeric_limits<T>::digits + 6) / 7;
    constexpr std::size_t  FinalPayloadBits = std::numeric_limits<T>::digits - (MaxBytes - 1) * 7;
    constexpr std::uint8_t FinalPayloadMask = static_cast<std::uint8_t>((1U << FinalPayloadBits) - 1U);

    T value{};
    for (std::size_t index = 0; index < MaxBytes; ++index) {
        auto byte = decoder.readU8();
        if (!byte) return forwardError(byte.error());

        auto const payload = static_cast<std::uint8_t>(*byte & 0x7FU);

        auto const hasContinuation = (*byte & 0x80U) != 0;
        if (index == MaxBytes - 1 && (hasContinuation || (payload & ~FinalPayloadMask) != 0)) {
            return makeCodecError(CodecErrc::InvalidValue, "varint overflow");
        }

        value |= static_cast<T>(payload) << (index * 7U);
        if (hasContinuation) continue;

        if (index != 0 && payload == 0) return makeCodecError(CodecErrc::NonCanonicalVarint);
        return value;
    }
    return makeCodecError(CodecErrc::InvalidValue, "unterminated varint");
}

} // namespace detail

class Encoder::Impl {
public:
    std::string buffer;
    std::size_t limit;

    explicit Impl(std::size_t limit) : limit(limit) { buffer.reserve(std::min<std::size_t>(limit, 4096)); }

    Expected<> append(std::span<std::byte const> value) {
        if (value.size() > limit - buffer.size()) {
            return makeCodecError(CodecErrc::SizeLimitExceeded);
        }

        buffer.append(reinterpret_cast<char const*>(value.data()), value.size());
        return {};
    }
};

class Decoder::Impl {
public:
    std::span<std::byte const> input;
    std::size_t                cursor{};
    bool                       sizeLimitExceeded{};

    explicit Impl(std::span<std::byte const> input, bool sizeLimitExceeded = false)
    : input(input),
      sizeLimitExceeded(sizeLimitExceeded) {}

    Expected<std::span<std::byte const>> read(std::size_t length) {
        if (sizeLimitExceeded) {
            return makeCodecError(CodecErrc::SizeLimitExceeded);
        }
        if (length > input.size() - cursor) {
            return makeCodecError(CodecErrc::Truncated);
        }

        auto result = input.subspan(cursor, length);

        cursor += length;
        return result;
    }
};

Encoder::Encoder(std::size_t maxSize) : mImpl(std::make_unique<Impl>(maxSize)) {}

Encoder::~Encoder()                             = default;
Encoder::Encoder(Encoder&&) noexcept            = default;
Encoder& Encoder::operator=(Encoder&&) noexcept = default;

std::size_t Encoder::size() const noexcept { return mImpl ? mImpl->buffer.size() : 0; }
std::size_t Encoder::maxSize() const noexcept { return mImpl ? mImpl->limit : 0; }

std::span<std::byte const> Encoder::bytes() const noexcept {
    if (!mImpl) {
        return {};
    }
    return {reinterpret_cast<std::byte const*>(mImpl->buffer.data()), mImpl->buffer.size()};
}

std::string Encoder::takeBuffer() noexcept { return mImpl ? std::move(mImpl->buffer) : std::string{}; }

Expected<> Encoder::writeU8(std::uint8_t value) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

    auto bytes = detail::littleEndianBytes(value);
    return mImpl->append(bytes);
}
Expected<> Encoder::writeU16(std::uint16_t value) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

    auto bytes = detail::littleEndianBytes(value);
    return mImpl->append(bytes);
}
Expected<> Encoder::writeU32(std::uint32_t value) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

    auto bytes = detail::littleEndianBytes(value);
    return mImpl->append(bytes);
}
Expected<> Encoder::writeU64(std::uint64_t value) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

    auto bytes = detail::littleEndianBytes(value);
    return mImpl->append(bytes);
}
Expected<> Encoder::writeI8(std::int8_t value) { return writeU8(std::bit_cast<std::uint8_t>(value)); }
Expected<> Encoder::writeI16(std::int16_t value) { return writeU16(std::bit_cast<std::uint16_t>(value)); }
Expected<> Encoder::writeI32(std::int32_t value) { return writeU32(std::bit_cast<std::uint32_t>(value)); }
Expected<> Encoder::writeI64(std::int64_t value) { return writeU64(std::bit_cast<std::uint64_t>(value)); }
Expected<> Encoder::writeU16BE(std::uint16_t value) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

    return mImpl->append(detail::bigEndianBytes(value));
}
Expected<> Encoder::writeU32BE(std::uint32_t value) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

    return mImpl->append(detail::bigEndianBytes(value));
}
Expected<> Encoder::writeU64BE(std::uint64_t value) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

    return mImpl->append(detail::bigEndianBytes(value));
}
Expected<> Encoder::writeI16BE(std::int16_t value) { return writeU16BE(std::bit_cast<std::uint16_t>(value)); }
Expected<> Encoder::writeI32BE(std::int32_t value) { return writeU32BE(std::bit_cast<std::uint32_t>(value)); }
Expected<> Encoder::writeI64BE(std::int64_t value) { return writeU64BE(std::bit_cast<std::uint64_t>(value)); }
Expected<> Encoder::writeVarUint(std::uint32_t value) { return detail::writeUnsignedVar(*this, value); }
Expected<> Encoder::writeVarInt(std::int32_t value) {
    return detail::writeUnsignedVar(*this, std::bit_cast<std::uint32_t>(value));
}
Expected<> Encoder::writeVarLong(std::int64_t value) {
    return detail::writeUnsignedVar(*this, std::bit_cast<std::uint64_t>(value));
}
Expected<> Encoder::writeFloat(float value) { return writeU32(std::bit_cast<std::uint32_t>(value)); }
Expected<> Encoder::writeDouble(double value) { return writeU64(std::bit_cast<std::uint64_t>(value)); }
Expected<> Encoder::writeFloatBE(float value) { return writeU32BE(std::bit_cast<std::uint32_t>(value)); }
Expected<> Encoder::writeDoubleBE(double value) { return writeU64BE(std::bit_cast<std::uint64_t>(value)); }
Expected<> Encoder::writeBool(bool value) { return writeU8(value ? 1 : 0); }
Expected<> Encoder::writeBytes(std::span<std::byte const> value) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

    return mImpl->append(value);
}
Expected<> Encoder::writeByteArray(std::span<std::byte const> value, std::size_t maxBytes) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");
    if (value.size() > maxBytes || value.size() > std::numeric_limits<std::uint32_t>::max()) {
        return makeCodecError(CodecErrc::SizeLimitExceeded, "byte array");
    }

    std::size_t prefixSize = 1;
    for (auto remaining = static_cast<std::uint32_t>(value.size()); remaining >= 0x80U; remaining >>= 7U) {
        ++prefixSize;
    }
    if (prefixSize + value.size() > mImpl->limit - mImpl->buffer.size()) {
        return makeCodecError(CodecErrc::SizeLimitExceeded, "byte array");
    }

    if (auto encodedSize = writeVarUint(static_cast<std::uint32_t>(value.size())); !encodedSize) {
        return encodedSize;
    }
    return writeBytes(value);
}
Expected<> Encoder::writeString(std::string_view value, std::size_t maxBytes) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "encoder was moved from");

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

std::size_t Decoder::size() const noexcept { return mImpl ? mImpl->input.size() : 0; }
std::size_t Decoder::remaining() const noexcept {
    if (!mImpl || mImpl->sizeLimitExceeded || mImpl->cursor > mImpl->input.size()) {
        return 0;
    }

    return mImpl->input.size() - mImpl->cursor;
}

Expected<std::span<std::byte const>> Decoder::readBytes(std::size_t length) {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "decoder was moved from");
    return mImpl->read(length);
}
Expected<std::vector<std::byte>> Decoder::readByteArray(std::size_t maxBytes) {
    auto length = readVarUint();
    if (!length) return forwardError(length.error());

    if (*length > maxBytes) return makeCodecError(CodecErrc::SizeLimitExceeded, "byte array");

    auto bytes = readBytes(*length);
    if (!bytes) return forwardError(bytes.error());

    return std::vector<std::byte>{bytes->begin(), bytes->end()};
}
Expected<std::uint8_t> Decoder::readU8() {
    auto bytes = readBytes(1);
    if (!bytes) {
        return forwardError(bytes.error());
    }
    return std::to_integer<std::uint8_t>((*bytes)[0]);
}

template <class T>
Expected<T> readLittleEndian(Decoder& decoder) {
    auto bytes = decoder.readBytes(sizeof(T));
    if (!bytes) {
        return forwardError(bytes.error());
    }

    std::array<std::byte, sizeof(T)> valueBytes{};
    std::memcpy(valueBytes.data(), bytes->data(), valueBytes.size());
    return detail::littleEndianValue<T>(valueBytes);
}

template <class T>
Expected<T> readBigEndian(Decoder& decoder) {
    auto bytes = decoder.readBytes(sizeof(T));
    if (!bytes) {
        return forwardError(bytes.error());
    }

    std::array<std::byte, sizeof(T)> valueBytes{};
    std::memcpy(valueBytes.data(), bytes->data(), valueBytes.size());
    return detail::bigEndianValue<T>(valueBytes);
}

Expected<std::uint16_t> Decoder::readU16() { return readLittleEndian<std::uint16_t>(*this); }
Expected<std::uint32_t> Decoder::readU32() { return readLittleEndian<std::uint32_t>(*this); }
Expected<std::uint64_t> Decoder::readU64() { return readLittleEndian<std::uint64_t>(*this); }
Expected<std::int8_t>   Decoder::readI8() {
    auto value = readU8();
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int8_t>(*value);
}
Expected<std::int16_t> Decoder::readI16() {
    auto value = readU16();
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int16_t>(*value);
}
Expected<std::int32_t> Decoder::readI32() {
    auto value = readU32();
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int32_t>(*value);
}
Expected<std::int64_t> Decoder::readI64() {
    auto value = readU64();
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int64_t>(*value);
}
Expected<std::uint16_t> Decoder::readU16BE() { return readBigEndian<std::uint16_t>(*this); }
Expected<std::uint32_t> Decoder::readU32BE() { return readBigEndian<std::uint32_t>(*this); }
Expected<std::uint64_t> Decoder::readU64BE() { return readBigEndian<std::uint64_t>(*this); }
Expected<std::int16_t>  Decoder::readI16BE() {
    auto value = readU16BE();
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int16_t>(*value);
}
Expected<std::int32_t> Decoder::readI32BE() {
    auto value = readU32BE();
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int32_t>(*value);
}
Expected<std::int64_t> Decoder::readI64BE() {
    auto value = readU64BE();
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int64_t>(*value);
}
Expected<std::uint32_t> Decoder::readVarUint() { return detail::readUnsignedVar<std::uint32_t>(*this); }
Expected<std::int32_t>  Decoder::readVarInt() {
    auto value = detail::readUnsignedVar<std::uint32_t>(*this);
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int32_t>(*value);
}
Expected<std::int64_t> Decoder::readVarLong() {
    auto value = detail::readUnsignedVar<std::uint64_t>(*this);
    if (!value) return forwardError(value.error());
    return std::bit_cast<std::int64_t>(*value);
}
Expected<float> Decoder::readFloat() {
    auto value = readU32();
    if (!value) return forwardError(value.error());
    return std::bit_cast<float>(*value);
}
Expected<double> Decoder::readDouble() {
    auto value = readU64();
    if (!value) return forwardError(value.error());
    return std::bit_cast<double>(*value);
}
Expected<float> Decoder::readFloatBE() {
    auto value = readU32BE();
    if (!value) return forwardError(value.error());
    return std::bit_cast<float>(*value);
}
Expected<double> Decoder::readDoubleBE() {
    auto value = readU64BE();
    if (!value) return forwardError(value.error());
    return std::bit_cast<double>(*value);
}
Expected<bool> Decoder::readBool() {
    auto value = readU8();
    if (!value) {
        return forwardError(value.error());
    }
    if (*value > 1) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    return *value != 0;
}
Expected<std::string> Decoder::readString(std::size_t maxBytes) {
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

    return std::string{value};
}

Expected<> Decoder::requireFullyConsumed() const {
    if (!mImpl) return makeCodecError(CodecErrc::InvalidValue, "decoder was moved from");

    if (mImpl->sizeLimitExceeded || mImpl->cursor > mImpl->input.size()) {
        return makeCodecError(CodecErrc::SizeLimitExceeded);
    }
    if (remaining() != 0) {
        return makeCodecError(CodecErrc::TrailingBytes);
    }
    return {};
}

} // namespace ll::protocol
