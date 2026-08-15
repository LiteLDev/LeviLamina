#include "gtest/gtest.h"

#include "ll/api/protocol/Codec.h"
#include "ll/api/protocol/Error.h"

#include <array>
#include <string>

namespace ll::protocol::test {

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

struct TestPayload {};
struct TestCodec {
    Expected<>            encode(Encoder&, TestPayload const&, SchemaVersion) const { return {}; }
    Expected<TestPayload> decode(Decoder&, SchemaVersion) const { return TestPayload{}; }
};
static_assert(PayloadCodec<TestCodec, TestPayload>);

} // namespace ll::protocol::test
