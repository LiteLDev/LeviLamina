#pragma once

#include <algorithm>
#include <array>
#include <concepts>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <limits>
#include <memory>
#include <optional>
#include <ranges>
#include <span>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>
#include <variant>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/protocol/Error.h"
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
    LLNDAPI Expected<> writeByteArray(std::span<std::byte const> value, std::size_t maxBytes);
    LLNDAPI Expected<> writeString(std::string_view value, std::size_t maxBytes);

    template <class E>
        requires std::is_enum_v<E>
    [[nodiscard]] Expected<> writeEnum(E value) {
        using U = std::underlying_type_t<E>;
        static_assert(
            std::same_as<U, std::int8_t> || std::same_as<U, std::uint8_t> || std::same_as<U, std::int16_t>
                || std::same_as<U, std::uint16_t> || std::same_as<U, std::int32_t> || std::same_as<U, std::uint32_t>
                || std::same_as<U, std::int64_t> || std::same_as<U, std::uint64_t>,
            "enum underlying type is not supported by the protocol codec"
        );
        if constexpr (std::is_signed_v<U>) {
            if constexpr (sizeof(U) == 1) {
                return writeI8(static_cast<std::int8_t>(value));
            } else if constexpr (sizeof(U) == 2) {
                return writeI16(static_cast<std::int16_t>(value));
            } else if constexpr (sizeof(U) == 4) {
                return writeI32(static_cast<std::int32_t>(value));
            } else {
                return writeI64(static_cast<std::int64_t>(value));
            }
        } else {
            if constexpr (sizeof(U) == 1) {
                return writeU8(static_cast<std::uint8_t>(value));
            } else if constexpr (sizeof(U) == 2) {
                return writeU16(static_cast<std::uint16_t>(value));
            } else if constexpr (sizeof(U) == 4) {
                return writeU32(static_cast<std::uint32_t>(value));
            } else {
                return writeU64(static_cast<std::uint64_t>(value));
            }
        }
    }

    template <class E>
        requires std::is_enum_v<E>
    [[nodiscard]] Expected<> writeEnumBE(E value) {
        using U = std::underlying_type_t<E>;
        static_assert(
            std::same_as<U, std::int8_t> || std::same_as<U, std::uint8_t> || std::same_as<U, std::int16_t>
                || std::same_as<U, std::uint16_t> || std::same_as<U, std::int32_t> || std::same_as<U, std::uint32_t>
                || std::same_as<U, std::int64_t> || std::same_as<U, std::uint64_t>,
            "enum underlying type is not supported by the protocol codec"
        );
        if constexpr (std::is_signed_v<U>) {
            if constexpr (sizeof(U) == 1) {
                return writeI8(static_cast<std::int8_t>(value));
            } else if constexpr (sizeof(U) == 2) {
                return writeI16BE(static_cast<std::int16_t>(value));
            } else if constexpr (sizeof(U) == 4) {
                return writeI32BE(static_cast<std::int32_t>(value));
            } else {
                return writeI64BE(static_cast<std::int64_t>(value));
            }
        } else {
            if constexpr (sizeof(U) == 1) {
                return writeU8(static_cast<std::uint8_t>(value));
            } else if constexpr (sizeof(U) == 2) {
                return writeU16BE(static_cast<std::uint16_t>(value));
            } else if constexpr (sizeof(U) == 4) {
                return writeU32BE(static_cast<std::uint32_t>(value));
            } else {
                return writeU64BE(static_cast<std::uint64_t>(value));
            }
        }
    }

    template <class T, class Writer>
    [[nodiscard]] Expected<> writeOptional(std::optional<T> const& value, Writer&& writer) {
        if (auto present = writeBool(value.has_value()); !present) return present;
        if (!value) return {};

        return std::invoke(std::forward<Writer>(writer), *this, *value);
    }

    template <class R, class Writer>
        requires std::ranges::sized_range<R const>
    [[nodiscard]] Expected<> writeList(R const& values, std::size_t maxCount, Writer&& writer) {
        auto const count = std::ranges::size(values);
        if (count > maxCount || count > std::numeric_limits<std::uint32_t>::max()) {
            return makeCodecError(CodecErrc::SizeLimitExceeded, "list count");
        }
        if (auto encodedCount = writeVarUint(static_cast<std::uint32_t>(count)); !encodedCount) {
            return encodedCount;
        }

        for (auto const& value : values) {
            if (auto encoded = std::invoke(writer, *this, value); !encoded) return encoded;
        }

        return {};
    }

    template <class M, class KeyWriter, class ValueWriter, class KeyCompare = std::less<>>
        requires std::ranges::sized_range<M const>
    [[nodiscard]] Expected<> writeMap(
        M const&      values,
        std::size_t   maxCount,
        KeyWriter&&   keyWriter,
        ValueWriter&& valueWriter,
        KeyCompare    keyCompare = {}
    ) {
        auto const count = std::ranges::size(values);
        if (count > maxCount || count > std::numeric_limits<std::uint32_t>::max()) {
            return makeCodecError(CodecErrc::SizeLimitExceeded, "map count");
        }

        using Entry = typename M::value_type;
        std::vector<std::reference_wrapper<Entry const>> entries;

        entries.reserve(count);
        for (auto const& entry : values) {
            entries.emplace_back(entry);
        }

        std::ranges::sort(entries, [&](auto const& left, auto const& right) {
            return std::invoke(keyCompare, left.get().first, right.get().first);
        });
        for (std::size_t index = 1; index < entries.size(); ++index) {
            if (!std::invoke(keyCompare, entries[index - 1].get().first, entries[index].get().first)) {
                return makeCodecError(CodecErrc::InvalidValue, "map key order");
            }
        }

        if (auto encodedCount = writeVarUint(static_cast<std::uint32_t>(count)); !encodedCount) {
            return encodedCount;
        }
        for (auto const& entryReference : entries) {
            auto const& entry = entryReference.get();

            if (auto encodedKey = std::invoke(keyWriter, *this, entry.first); !encodedKey) return encodedKey;
            if (auto encodedValue = std::invoke(valueWriter, *this, entry.second); !encodedValue) return encodedValue;
        }

        return {};
    }

    template <class T, std::size_t N, class Writer>
    [[nodiscard]] Expected<> writeArray(std::array<T, N> const& values, Writer&& writer) {
        for (auto const& value : values) {
            if (auto encoded = std::invoke(writer, *this, value); !encoded) return encoded;
        }

        return {};
    }

    // clang-format off
    template <class... T, class... Writer>
        requires(sizeof...(T) == sizeof...(Writer))
    [[nodiscard]] Expected<> writeVariant(std::variant<T...> const& value, Writer&&... writer) {
        static_assert(sizeof...(T) <= std::numeric_limits<std::uint32_t>::max());
        if (value.valueless_by_exception()) {
            return makeCodecError(CodecErrc::InvalidValue, "valueless variant");
        }

        if (auto encodedIndex = writeVarUint(static_cast<std::uint32_t>(value.index())); !encodedIndex) {
            return encodedIndex;
        }

        auto writers = std::forward_as_tuple(std::forward<Writer>(writer)...);

        std::optional<Expected<>> encoded;
        [&]<std::size_t... I>(std::index_sequence<I...>) {
            ((value.index() == I
                  ? (encoded.emplace(std::invoke(std::get<I>(writers), *this, std::get<I>(value))), true)
                  : false)
             || ...);
        }(std::index_sequence_for<T...>{});

        return std::move(*encoded);
    }
    // clang-format on
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
    LLNDAPI Expected<std::vector<std::byte>> readByteArray(std::size_t maxBytes);
    LLNDAPI Expected<std::string> readString(std::size_t maxBytes);

    LLNDAPI Expected<> requireFullyConsumed() const;

    template <class E, class Validator>
        requires std::is_enum_v<E> && std::predicate<Validator&, E>
    [[nodiscard]] Expected<E> readEnum(Validator&& validator) {
        using U = std::underlying_type_t<E>;
        static_assert(
            std::same_as<U, std::int8_t> || std::same_as<U, std::uint8_t> || std::same_as<U, std::int16_t>
                || std::same_as<U, std::uint16_t> || std::same_as<U, std::int32_t> || std::same_as<U, std::uint32_t>
                || std::same_as<U, std::int64_t> || std::same_as<U, std::uint64_t>,
            "enum underlying type is not supported by the protocol codec"
        );

        Expected<U> underlying = [&]() -> Expected<U> {
            if constexpr (std::is_signed_v<U>) {
                if constexpr (sizeof(U) == 1) {
                    return readI8();
                } else if constexpr (sizeof(U) == 2) {
                    return readI16();
                } else if constexpr (sizeof(U) == 4) {
                    return readI32();
                } else {
                    return readI64();
                }
            } else {
                if constexpr (sizeof(U) == 1) {
                    return readU8();
                } else if constexpr (sizeof(U) == 2) {
                    return readU16();
                } else if constexpr (sizeof(U) == 4) {
                    return readU32();
                } else {
                    return readU64();
                }
            }
        }();
        if (!underlying) return forwardError(underlying.error());

        auto value = static_cast<E>(*underlying);
        if (!std::invoke(validator, value)) return makeCodecError(CodecErrc::InvalidValue, "enum value");

        return value;
    }

    template <class E, class Validator>
        requires std::is_enum_v<E> && std::predicate<Validator&, E>
    [[nodiscard]] Expected<E> readEnumBE(Validator&& validator) {
        using U = std::underlying_type_t<E>;
        static_assert(
            std::same_as<U, std::int8_t> || std::same_as<U, std::uint8_t> || std::same_as<U, std::int16_t>
                || std::same_as<U, std::uint16_t> || std::same_as<U, std::int32_t> || std::same_as<U, std::uint32_t>
                || std::same_as<U, std::int64_t> || std::same_as<U, std::uint64_t>,
            "enum underlying type is not supported by the protocol codec"
        );

        Expected<U> underlying = [&]() -> Expected<U> {
            if constexpr (std::is_signed_v<U>) {
                if constexpr (sizeof(U) == 1) {
                    return readI8();
                } else if constexpr (sizeof(U) == 2) {
                    return readI16BE();
                } else if constexpr (sizeof(U) == 4) {
                    return readI32BE();
                } else {
                    return readI64BE();
                }
            } else {
                if constexpr (sizeof(U) == 1) {
                    return readU8();
                } else if constexpr (sizeof(U) == 2) {
                    return readU16BE();
                } else if constexpr (sizeof(U) == 4) {
                    return readU32BE();
                } else {
                    return readU64BE();
                }
            }
        }();
        if (!underlying) return forwardError(underlying.error());

        auto value = static_cast<E>(*underlying);
        if (!std::invoke(validator, value)) return makeCodecError(CodecErrc::InvalidValue, "enum value");

        return value;
    }

    template <class T, class Reader>
    [[nodiscard]] Expected<std::optional<T>> readOptional(Reader&& reader) {
        auto present = readBool();
        if (!present) return forwardError(present.error());

        if (!*present) return std::optional<T>{};

        auto value = std::invoke(std::forward<Reader>(reader), *this);
        if (!value) return forwardError(value.error());

        return std::optional<T>{std::move(*value)};
    }

    template <class T, class Reader>
    [[nodiscard]] Expected<std::vector<T>>
    readList(std::size_t maxCount, std::size_t minEncodedEntrySize, Reader&& reader) {
        if (minEncodedEntrySize == 0) return makeCodecError(CodecErrc::InvalidValue, "list entry size");

        auto count = readVarUint();
        if (!count) return forwardError(count.error());
        if (*count > maxCount) return makeCodecError(CodecErrc::SizeLimitExceeded, "list count");
        if (*count > remaining() / minEncodedEntrySize) return makeCodecError(CodecErrc::Truncated, "list entries");

        std::vector<T> values;
        values.reserve(*count);
        for (std::uint32_t index = 0; index < *count; ++index) {
            auto value = std::invoke(reader, *this);
            if (!value) return forwardError(value.error());

            values.emplace_back(std::move(*value));
        }

        return values;
    }

    template <class M, class KeyReader, class ValueReader, class KeyCompare = std::less<>>
        requires std::default_initializable<M>
    [[nodiscard]] Expected<M> readMap(
        std::size_t   maxCount,
        std::size_t   minEncodedEntrySize,
        KeyReader&&   keyReader,
        ValueReader&& valueReader,
        KeyCompare    keyCompare = {}
    ) {
        if (minEncodedEntrySize == 0) return makeCodecError(CodecErrc::InvalidValue, "map entry size");

        auto count = readVarUint();
        if (!count) return forwardError(count.error());
        if (*count > maxCount) return makeCodecError(CodecErrc::SizeLimitExceeded, "map count");
        if (*count > remaining() / minEncodedEntrySize) return makeCodecError(CodecErrc::Truncated, "map entries");

        M values;
        if constexpr (requires(M& map, std::size_t size) { map.reserve(size); }) {
            values.reserve(*count);
        }

        typename M::key_type const* previousKey{};
        for (std::uint32_t index = 0; index < *count; ++index) {
            auto key = std::invoke(keyReader, *this);
            if (!key) return forwardError(key.error());
            if (previousKey && !std::invoke(keyCompare, *previousKey, *key)) {
                return makeCodecError(CodecErrc::InvalidValue, "map key order");
            }

            auto value = std::invoke(valueReader, *this);
            if (!value) return forwardError(value.error());

            auto [position, inserted] = values.emplace(std::move(*key), std::move(*value));
            if (!inserted) return makeCodecError(CodecErrc::InvalidValue, "duplicate map key");
            previousKey = std::addressof(position->first);
        }

        return values;
    }

    template <class T, std::size_t N, class Reader>
    [[nodiscard]] Expected<std::array<T, N>> readArray(Reader&& reader) {
        std::array<std::optional<T>, N> values;
        for (std::size_t index = 0; index < N; ++index) {
            auto decoded = std::invoke(reader, *this);
            if (!decoded) return forwardError(decoded.error());

            values[index].emplace(std::move(*decoded));
        }

        return [&]<std::size_t... I>(std::index_sequence<I...>) {
            return std::array<T, N>{std::move(*values[I])...};
        }(std::make_index_sequence<N>{});
    }

    // clang-format off
    template <class... T, class... Reader>
        requires(sizeof...(T) == sizeof...(Reader))
    [[nodiscard]] Expected<std::variant<T...>> readVariant(Reader&&... reader) {
        using Variant = std::variant<T...>;

        auto index = readVarUint();
        if (!index) return forwardError(index.error());
        if (*index >= sizeof...(T)) return makeCodecError(CodecErrc::InvalidValue, "variant index");

        auto readers = std::forward_as_tuple(std::forward<Reader>(reader)...);

        std::optional<Expected<Variant>> decoded;
        auto decode = [&]<std::size_t I>() -> Expected<Variant> {
            auto value = std::invoke(std::get<I>(readers), *this);
            if (!value) return forwardError(value.error());

            return Variant{std::in_place_index<I>, std::move(*value)};
        };

        [&]<std::size_t... I>(std::index_sequence<I...>) {
            ((*index == I ? (decoded.emplace(decode.template operator()<I>()), true) : false) || ...);
        }(std::index_sequence_for<T...>{});

        return std::move(*decoded);
    }
    // clang-format on
};

template <class C, class T>
concept PayloadCodec = std::is_nothrow_move_constructible_v<C>
                    && requires(C const& codec, Encoder& out, Decoder& in, T const& value, SchemaVersion schema) {
                           { codec.encode(out, value, schema) } -> std::same_as<Expected<>>;
                           { codec.decode(in, schema) } -> std::same_as<Expected<T>>;
                       };

} // namespace ll::protocol
