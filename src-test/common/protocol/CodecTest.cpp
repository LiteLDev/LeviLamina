#include "gtest/gtest.h"

#include "ll/api/protocol/Codec.h"
#include "ll/api/protocol/Error.h"

#include <array>
#include <bit>
#include <cstdint>
#include <limits>
#include <map>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>
#include <variant>
#include <vector>

namespace ll::protocol::test {

static_assert(!noexcept(std::declval<Encoder&>().writeBytes(std::declval<std::span<std::byte const>>())));
static_assert(!noexcept(std::declval<Decoder&>().readBytes(0)));
static_assert(!noexcept(std::declval<Decoder&>().readString(0)));

TEST(ProtocolCodecTest, EncodesCanonicalPrimitiveSequence) {
    Encoder encoder{64};
    ASSERT_TRUE(encoder.writeU16(0x1234));
    ASSERT_TRUE(encoder.writeU32(0x78563412));
    ASSERT_TRUE(encoder.writeVarUint(300));
    ASSERT_TRUE(encoder.writeBool(true));
    ASSERT_TRUE(encoder.writeString("ok", 8));

    std::array expected{
        std::byte{0x34},
        std::byte{0x12},
        std::byte{0x12},
        std::byte{0x34},
        std::byte{0x56},
        std::byte{0x78},
        std::byte{0xAC},
        std::byte{0x02},
        std::byte{0x01},
        std::byte{0x02},
        std::byte{'o'},
        std::byte{'k'},
    };
    EXPECT_TRUE(std::ranges::equal(encoder.bytes(), expected));

    Decoder decoder{encoder.bytes(), 64};
    EXPECT_EQ(*decoder.readU16(), 0x1234);
    EXPECT_EQ(*decoder.readU32(), 0x78563412U);
    EXPECT_EQ(*decoder.readVarUint(), 300U);
    EXPECT_EQ(*decoder.readBool(), true);
    EXPECT_EQ(*decoder.readString(8), "ok");
    EXPECT_TRUE(decoder.requireFullyConsumed());
}

TEST(ProtocolCodecTest, RejectsOverlongVaruintAndInvalidBoolean) {
    std::array overlong{std::byte{0x80}, std::byte{0x00}};

    Decoder decoder{overlong, overlong.size()};
    auto    value = decoder.readVarUint();

    ASSERT_FALSE(value);
    ASSERT_TRUE(value.error().isA<CodecErrorInfo>());
    EXPECT_EQ(value.error().as<CodecErrorInfo>().code, CodecErrc::NonCanonicalVarint);

    std::array invalidBool{std::byte{0x02}};
    Decoder    booleanDecoder{invalidBool, invalidBool.size()};
    EXPECT_FALSE(booleanDecoder.readBool());
}

TEST(ProtocolCodecTest, RejectsTruncationTrailingBytesUtf8AndLimits) {
    std::array shortInput{std::byte{0x01}};
    Decoder    shortDecoder{shortInput, shortInput.size()};
    EXPECT_FALSE(shortDecoder.readU16());

    Decoder trailingDecoder{shortInput, shortInput.size()};
    EXPECT_FALSE(trailingDecoder.requireFullyConsumed());

    Encoder     utf8Encoder{16};
    std::string invalidUtf8{"\xC0\x80", 2};
    EXPECT_FALSE(utf8Encoder.writeString(invalidUtf8, 8));

    Encoder limited{1};
    EXPECT_FALSE(limited.writeU16(1));

    Encoder transactional{2};
    EXPECT_FALSE(transactional.writeString("ab", 2));
    EXPECT_EQ(transactional.size(), 0U);

    Decoder oversized{shortInput, 0};
    auto    oversizedRead = oversized.readU8();
    ASSERT_FALSE(oversizedRead);
    EXPECT_EQ(oversizedRead.error().as<CodecErrorInfo>().code, CodecErrc::SizeLimitExceeded);
}

TEST(ProtocolCodecTest, RejectsInvalidUtf8AndOverflowingVaruintOnDecode) {
    std::array invalidUtf8{std::byte{0x02}, std::byte{0xC0}, std::byte{0x80}};
    Decoder    utf8Decoder{invalidUtf8, invalidUtf8.size()};
    EXPECT_FALSE(utf8Decoder.readString(8));

    std::array overflow{
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0x10},
    };
    Decoder overflowDecoder{overflow, overflow.size()};
    EXPECT_FALSE(overflowDecoder.readVarUint());

    std::array overflowingVarLong{
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0xFF},
        std::byte{0x02},
    };
    Decoder varLongDecoder{overflowingVarLong, overflowingVarLong.size()};
    EXPECT_FALSE(varLongDecoder.readVarLong());
}

TEST(ProtocolCodecTest, RoundTripsEmptyString) {
    Encoder encoder{1};
    ASSERT_TRUE(encoder.writeString({}, 0));

    Decoder decoder{encoder.bytes(), encoder.size()};
    auto    value = decoder.readString(0);
    ASSERT_TRUE(value);
    EXPECT_TRUE(value->empty());
    EXPECT_TRUE(decoder.requireFullyConsumed());
}

TEST(ProtocolCodecTest, RoundTripsBoundedByteArrayAndRejectsInvalidLengths) {
    std::array data{std::byte{0xDE}, std::byte{0xAD}, std::byte{0xBE}, std::byte{0xEF}};

    Encoder encoder{8};
    ASSERT_TRUE(encoder.writeByteArray(data, data.size()));
    std::array expected{std::byte{0x04}, std::byte{0xDE}, std::byte{0xAD}, std::byte{0xBE}, std::byte{0xEF}};
    EXPECT_TRUE(std::ranges::equal(encoder.bytes(), expected));

    Decoder decoder{encoder.bytes(), encoder.size()};
    auto    decoded = decoder.readByteArray(data.size());
    ASSERT_TRUE(decoded);
    EXPECT_TRUE(std::ranges::equal(*decoded, data));
    EXPECT_TRUE(decoder.requireFullyConsumed());

    Encoder oversizedEncoder{8};
    EXPECT_FALSE(oversizedEncoder.writeByteArray(data, data.size() - 1));
    EXPECT_EQ(oversizedEncoder.size(), 0U);

    std::array truncated{std::byte{0x04}, std::byte{0xDE}};
    Decoder    truncatedDecoder{truncated, truncated.size()};
    EXPECT_FALSE(truncatedDecoder.readByteArray(data.size()));

    Decoder limitedDecoder{encoder.bytes(), encoder.size()};
    auto    limited = limitedDecoder.readByteArray(data.size() - 1);
    ASSERT_FALSE(limited);
    EXPECT_EQ(limited.error().as<CodecErrorInfo>().code, CodecErrc::SizeLimitExceeded);
}

TEST(ProtocolCodecTest, EncodesSignedFloatingAndJavaStyleVarintsCanonically) {
    Encoder encoder{64};
    ASSERT_TRUE(encoder.writeI16(-2));
    ASSERT_TRUE(encoder.writeI32(std::numeric_limits<std::int32_t>::min()));
    ASSERT_TRUE(encoder.writeFloat(1.0F));
    ASSERT_TRUE(encoder.writeDouble(1.0));
    ASSERT_TRUE(encoder.writeVarInt(-1));
    ASSERT_TRUE(encoder.writeVarLong(-1));

    std::array expected{
        std::byte{0xFE}, std::byte{0xFF}, std::byte{0x00}, std::byte{0x00}, std::byte{0x00}, std::byte{0x80},
        std::byte{0x00}, std::byte{0x00}, std::byte{0x80}, std::byte{0x3F}, std::byte{0x00}, std::byte{0x00},
        std::byte{0x00}, std::byte{0x00}, std::byte{0x00}, std::byte{0x00}, std::byte{0xF0}, std::byte{0x3F},
        std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF}, std::byte{0x0F}, std::byte{0xFF},
        std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF},
        std::byte{0xFF}, std::byte{0xFF}, std::byte{0x01},
    };
    EXPECT_TRUE(std::ranges::equal(encoder.bytes(), expected));

    Decoder decoder{encoder.bytes(), encoder.size()};
    EXPECT_EQ(*decoder.readI16(), -2);
    EXPECT_EQ(*decoder.readI32(), std::numeric_limits<std::int32_t>::min());
    EXPECT_EQ(std::bit_cast<std::uint32_t>(*decoder.readFloat()), std::bit_cast<std::uint32_t>(1.0F));
    EXPECT_EQ(std::bit_cast<std::uint64_t>(*decoder.readDouble()), std::bit_cast<std::uint64_t>(1.0));
    EXPECT_EQ(*decoder.readVarInt(), -1);
    EXPECT_EQ(*decoder.readVarLong(), -1);
    EXPECT_TRUE(decoder.requireFullyConsumed());
}

enum class TestWidePayloadKind : std::uint16_t {
    Marker = 0x1234,
};

TEST(ProtocolCodecTest, EncodesBigEndianPrimitivesAndEnumsCanonically) {
    Encoder encoder{64};
    ASSERT_TRUE(encoder.writeU16BE(0x1234));
    ASSERT_TRUE(encoder.writeU32BE(0x12345678));
    ASSERT_TRUE(encoder.writeU64BE(0x0102030405060708));
    ASSERT_TRUE(encoder.writeI16BE(-2));
    ASSERT_TRUE(encoder.writeI32BE(std::numeric_limits<std::int32_t>::min()));
    ASSERT_TRUE(encoder.writeI64BE(-2));
    ASSERT_TRUE(encoder.writeFloatBE(1.0F));
    ASSERT_TRUE(encoder.writeDoubleBE(1.0));
    ASSERT_TRUE(encoder.writeEnumBE(TestWidePayloadKind::Marker));

    std::array expected{
        std::byte{0x12}, std::byte{0x34}, std::byte{0x12}, std::byte{0x34}, std::byte{0x56}, std::byte{0x78},
        std::byte{0x01}, std::byte{0x02}, std::byte{0x03}, std::byte{0x04}, std::byte{0x05}, std::byte{0x06},
        std::byte{0x07}, std::byte{0x08}, std::byte{0xFF}, std::byte{0xFE}, std::byte{0x80}, std::byte{0x00},
        std::byte{0x00}, std::byte{0x00}, std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF},
        std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFE}, std::byte{0x3F}, std::byte{0x80},
        std::byte{0x00}, std::byte{0x00}, std::byte{0x3F}, std::byte{0xF0}, std::byte{0x00}, std::byte{0x00},
        std::byte{0x00}, std::byte{0x00}, std::byte{0x00}, std::byte{0x00}, std::byte{0x12}, std::byte{0x34},
    };
    EXPECT_TRUE(std::ranges::equal(encoder.bytes(), expected));

    Decoder decoder{encoder.bytes(), encoder.size()};
    EXPECT_EQ(*decoder.readU16BE(), 0x1234);
    EXPECT_EQ(*decoder.readU32BE(), 0x12345678U);
    EXPECT_EQ(*decoder.readU64BE(), 0x0102030405060708ULL);
    EXPECT_EQ(*decoder.readI16BE(), -2);
    EXPECT_EQ(*decoder.readI32BE(), std::numeric_limits<std::int32_t>::min());
    EXPECT_EQ(*decoder.readI64BE(), -2);
    EXPECT_EQ(std::bit_cast<std::uint32_t>(*decoder.readFloatBE()), std::bit_cast<std::uint32_t>(1.0F));
    EXPECT_EQ(std::bit_cast<std::uint64_t>(*decoder.readDoubleBE()), std::bit_cast<std::uint64_t>(1.0));
    auto kind = decoder.readEnumBE<TestWidePayloadKind>([](TestWidePayloadKind value) {
        return value == TestWidePayloadKind::Marker;
    });
    ASSERT_TRUE(kind);
    EXPECT_EQ(*kind, TestWidePayloadKind::Marker);
    EXPECT_TRUE(decoder.requireFullyConsumed());
}

enum class TestPayloadKind : std::uint8_t {
    First  = 1,
    Second = 2,
};

struct NestedValue {
    std::uint16_t id{};
    std::string   name;

    bool operator==(NestedValue const&) const = default;
};

TEST(ProtocolCodecTest, RoundTripsEnumsOptionalsListsArraysAndNestedTypes) {
    std::optional<std::uint32_t> optional{42};
    std::optional<std::uint32_t> emptyOptional;
    std::vector<NestedValue>     values{
        {1, "one"},
        {2, "two"}
    };
    std::array<std::uint16_t, 2> fixed{7, 9};

    Encoder encoder{128};
    ASSERT_TRUE(encoder.writeEnum(TestPayloadKind::Second));
    ASSERT_TRUE(encoder.writeOptional(optional, [](Encoder& out, std::uint32_t value) { return out.writeU32(value); }));
    ASSERT_TRUE(encoder.writeOptional(emptyOptional, [](Encoder& out, std::uint32_t value) {
        return out.writeU32(value);
    }));
    ASSERT_TRUE(encoder.writeList(values, 2, [](Encoder& out, NestedValue const& value) -> Expected<> {
        if (auto id = out.writeU16(value.id); !id) return id;
        return out.writeString(value.name, 8);
    }));
    ASSERT_TRUE(encoder.writeArray(fixed, [](Encoder& out, std::uint16_t value) { return out.writeU16(value); }));

    Decoder decoder{encoder.bytes(), encoder.size()};
    auto    kind = decoder.readEnum<TestPayloadKind>([](TestPayloadKind value) {
        return value == TestPayloadKind::First || value == TestPayloadKind::Second;
    });
    ASSERT_TRUE(kind);
    EXPECT_EQ(*kind, TestPayloadKind::Second);

    auto decodedOptional = decoder.readOptional<std::uint32_t>([](Decoder& in) { return in.readU32(); });
    ASSERT_TRUE(decodedOptional);
    EXPECT_EQ(*decodedOptional, optional);

    auto decodedEmptyOptional = decoder.readOptional<std::uint32_t>([](Decoder& in) { return in.readU32(); });
    ASSERT_TRUE(decodedEmptyOptional);
    EXPECT_EQ(*decodedEmptyOptional, emptyOptional);

    auto decodedValues = decoder.readList<NestedValue>(2, 3, [](Decoder& in) -> Expected<NestedValue> {
        auto id = in.readU16();
        if (!id) return forwardError(id.error());
        auto name = in.readString(8);
        if (!name) return forwardError(name.error());
        return NestedValue{*id, std::move(*name)};
    });
    ASSERT_TRUE(decodedValues);
    EXPECT_EQ(*decodedValues, values);

    auto decodedFixed = decoder.readArray<std::uint16_t, 2>([](Decoder& in) { return in.readU16(); });
    ASSERT_TRUE(decodedFixed);
    EXPECT_EQ(*decodedFixed, fixed);
    EXPECT_TRUE(decoder.requireFullyConsumed());
}

TEST(ProtocolCodecTest, RejectsInvalidEnumsAndListBoundsBeforeAllocation) {
    std::array invalidEnumBytes{std::byte{0x03}};
    Decoder    enumDecoder{invalidEnumBytes, invalidEnumBytes.size()};
    auto       invalidEnum = enumDecoder.readEnum<TestPayloadKind>([](TestPayloadKind value) {
        return value == TestPayloadKind::First || value == TestPayloadKind::Second;
    });
    ASSERT_FALSE(invalidEnum);
    EXPECT_EQ(invalidEnum.error().as<CodecErrorInfo>().code, CodecErrc::InvalidValue);

    Encoder                     listEncoder{16};
    std::array<std::uint8_t, 2> tooMany{1, 2};
    EXPECT_FALSE(listEncoder.writeList(tooMany, 1, [](Encoder& out, std::uint8_t value) {
        return out.writeU8(value);
    }));
    EXPECT_EQ(listEncoder.size(), 0U);

    std::array  oversizedList{std::byte{0x02}, std::byte{0x01}, std::byte{0x02}};
    Decoder     oversizedListDecoder{oversizedList, oversizedList.size()};
    std::size_t oversizedReaderCalls{};
    auto        oversized = oversizedListDecoder.readList<std::uint8_t>(1, 1, [&](Decoder& in) {
        ++oversizedReaderCalls;
        return in.readU8();
    });
    ASSERT_FALSE(oversized);
    EXPECT_EQ(oversized.error().as<CodecErrorInfo>().code, CodecErrc::SizeLimitExceeded);
    EXPECT_EQ(oversizedReaderCalls, 0U);

    std::array  impossibleList{std::byte{0x03}, std::byte{0x01}, std::byte{0x02}};
    Decoder     listDecoder{impossibleList, impossibleList.size()};
    std::size_t readerCalls{};
    auto        list = listDecoder.readList<std::uint8_t>(3, 1, [&](Decoder& in) {
        ++readerCalls;
        return in.readU8();
    });
    ASSERT_FALSE(list);
    EXPECT_EQ(list.error().as<CodecErrorInfo>().code, CodecErrc::Truncated);
    EXPECT_EQ(readerCalls, 0U);
}

TEST(ProtocolCodecTest, MapsHaveCanonicalOrderIndependentOfContainerType) {
    std::map<std::uint16_t, std::string> ordered{
        {2, "two"},
        {1, "one"}
    };
    std::unordered_map<std::uint16_t, std::string> unordered{
        {1, "one"},
        {2, "two"}
    };

    auto writeKey   = [](Encoder& out, std::uint16_t key) { return out.writeU16(key); };
    auto writeValue = [](Encoder& out, std::string const& value) { return out.writeString(value, 8); };

    Encoder orderedEncoder{64};
    ASSERT_TRUE(orderedEncoder.writeMap(ordered, 4, writeKey, writeValue));
    Encoder unorderedEncoder{64};
    ASSERT_TRUE(unorderedEncoder.writeMap(unordered, 4, writeKey, writeValue));
    EXPECT_TRUE(std::ranges::equal(orderedEncoder.bytes(), unorderedEncoder.bytes()));

    auto readKey   = [](Decoder& in) { return in.readU16(); };
    auto readValue = [](Decoder& in) { return in.readString(8); };

    Decoder orderedDecoder{orderedEncoder.bytes(), orderedEncoder.size()};
    auto    decodedOrdered = orderedDecoder.readMap<std::map<std::uint16_t, std::string>>(4, 3, readKey, readValue);
    ASSERT_TRUE(decodedOrdered);
    EXPECT_EQ(*decodedOrdered, ordered);
    EXPECT_TRUE(orderedDecoder.requireFullyConsumed());

    Decoder unorderedDecoder{unorderedEncoder.bytes(), unorderedEncoder.size()};
    auto    decodedUnordered =
        unorderedDecoder.readMap<std::unordered_map<std::uint16_t, std::string>>(4, 3, readKey, readValue);
    ASSERT_TRUE(decodedUnordered);
    EXPECT_EQ(*decodedUnordered, unordered);
    EXPECT_TRUE(unorderedDecoder.requireFullyConsumed());
}

TEST(ProtocolCodecTest, RejectsNonCanonicalMapOrder) {
    std::array input{
        std::byte{0x02},
        std::byte{0x02},
        std::byte{0x14},
        std::byte{0x01},
        std::byte{0x0A},
    };
    Decoder decoder{input, input.size()};
    auto    decoded = decoder.readMap<std::unordered_map<std::uint8_t, std::uint8_t>>(
        2,
        2,
        [](Decoder& in) { return in.readU8(); },
        [](Decoder& in) { return in.readU8(); }
    );
    ASSERT_FALSE(decoded);
    EXPECT_EQ(decoded.error().as<CodecErrorInfo>().code, CodecErrc::InvalidValue);
}

TEST(ProtocolCodecTest, RoundTripsVariantAndRejectsUnknownAlternative) {
    using Value = std::variant<std::uint16_t, std::string>;

    Value   value{std::in_place_index<1>, "value"};
    Encoder encoder{16};
    ASSERT_TRUE(encoder.writeVariant(
        value,
        [](Encoder& out, std::uint16_t number) { return out.writeU16(number); },
        [](Encoder& out, std::string const& text) { return out.writeString(text, 8); }
    ));

    std::array expected{
        std::byte{0x01},
        std::byte{0x05},
        std::byte{'v'},
        std::byte{'a'},
        std::byte{'l'},
        std::byte{'u'},
        std::byte{'e'},
    };
    EXPECT_TRUE(std::ranges::equal(encoder.bytes(), expected));

    Decoder decoder{encoder.bytes(), encoder.size()};
    auto    decoded = decoder.readVariant<std::uint16_t, std::string>(
        [](Decoder& in) { return in.readU16(); },
        [](Decoder& in) { return in.readString(8); }
    );
    ASSERT_TRUE(decoded);
    EXPECT_EQ(*decoded, value);
    EXPECT_TRUE(decoder.requireFullyConsumed());

    std::array  invalidIndex{std::byte{0x02}};
    Decoder     invalidDecoder{invalidIndex, invalidIndex.size()};
    std::size_t readerCalls{};
    auto        invalid = invalidDecoder.readVariant<std::uint16_t, std::string>(
        [&](Decoder& in) {
            ++readerCalls;
            return in.readU16();
        },
        [&](Decoder& in) {
            ++readerCalls;
            return in.readString(8);
        }
    );
    ASSERT_FALSE(invalid);
    EXPECT_EQ(invalid.error().as<CodecErrorInfo>().code, CodecErrc::InvalidValue);
    EXPECT_EQ(readerCalls, 0U);
}

TEST(ProtocolCodecTest, MovedFromCodecObjectsFailSafely) {
    Encoder sourceEncoder{8};
    Encoder targetEncoder{std::move(sourceEncoder)};
    EXPECT_EQ(sourceEncoder.size(), 0U);
    EXPECT_EQ(sourceEncoder.maxSize(), 0U);
    EXPECT_TRUE(sourceEncoder.bytes().empty());
    EXPECT_TRUE(sourceEncoder.takeBuffer().empty());
    EXPECT_FALSE(sourceEncoder.writeU8(1));
    EXPECT_TRUE(targetEncoder.writeU8(1));

    std::array input{std::byte{0x01}};
    Decoder    sourceDecoder{input, input.size()};
    Decoder    targetDecoder{std::move(sourceDecoder)};
    EXPECT_EQ(sourceDecoder.size(), 0U);
    EXPECT_EQ(sourceDecoder.remaining(), 0U);
    EXPECT_FALSE(sourceDecoder.readU8());
    EXPECT_FALSE(sourceDecoder.requireFullyConsumed());
    EXPECT_EQ(*targetDecoder.readU8(), 1U);
}

struct TestPayload {};
struct TestCodec {
    Expected<>            encode(Encoder&, TestPayload const&, SchemaVersion) const { return {}; }
    Expected<TestPayload> decode(Decoder&, SchemaVersion) const { return TestPayload{}; }
};
static_assert(PayloadCodec<TestCodec, TestPayload>);

} // namespace ll::protocol::test
