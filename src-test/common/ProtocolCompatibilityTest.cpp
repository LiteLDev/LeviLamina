#include "gtest/gtest.h"

#include <algorithm>
#include <charconv>
#include <random>
#include <string_view>

#include "ll/core/network/ProtocolCompatibility.h"

namespace ll::protocol_compatibility::test {
namespace {

std::string bytes(std::string_view hex) {
    std::string result;
    while (!hex.empty()) {
        if (hex.front() == ' ') {
            hex.remove_prefix(1);
            continue;
        }
        unsigned value{};
        auto     parsed = std::from_chars(hex.data(), hex.data() + std::min(std::size_t{2}, hex.size()), value, 16);
        if (hex.size() < 2 || parsed.ec != std::errc{} || parsed.ptr != hex.data() + 2) {
            ADD_FAILURE() << "Invalid hex fixture";
            return {};
        }
        result.push_back(static_cast<char>(value));
        hex.remove_prefix(2);
    }
    return result;
}

std::string header(unsigned value) {
    std::string result;
    do {
        auto byte   = value & 0x7f;
        value     >>= 7;
        result.push_back(static_cast<char>(byte | (value ? 0x80 : 0)));
    } while (value);
    return result;
}

void checkDirection(int source, int target) {
    for (unsigned subclients = 0; subclients < 16; ++subclients) {
        for (auto kind : {1u, 193u}) {
            auto prefix   = header(kind | (subclients << 10));
            auto original = prefix + bytes("00 00 08") + static_cast<char>(source & 0xff);
            if (kind == 1) original += bytes("0a 00 ff 7f 80 00") + "opaque-login-body";
            auto expected               = original;
            expected[prefix.size() + 3] = static_cast<char>(target & 0xff);
            auto data                   = original;
            ASSERT_TRUE(rewriteHandshake(data, target));
            EXPECT_EQ(data, expected);
            EXPECT_FALSE(rewriteHandshake(data, target));
            EXPECT_EQ(data, expected);
            ASSERT_TRUE(rewriteHandshake(data, source));
            EXPECT_EQ(data, original);
        }
    }
}

} // namespace

TEST(ProtocolCompatibilityTest, ServerNormalizesBothHandshakesAndSubclients) { checkDirection(2169, 2168); }

TEST(ProtocolCompatibilityTest, ClientUses2169WithoutDiscoveryOrLoginBodyInspection) { checkDirection(2168, 2169); }

TEST(ProtocolCompatibilityTest, LeavesUnsupportedOrUnchangedProtocolsAlone) {
    for (auto protocol :
         {bytes("00 00 03 e9"),
          bytes("00 00 08 77"),
          bytes("00 00 08 7a"),
          bytes("00 00 08 90"),
          bytes("ff ff ff ff")}) {
        for (auto kind : {1u, 193u}) {
            for (auto target : {2168, 2169}) {
                auto data     = header(kind) + protocol;
                auto original = data;
                EXPECT_FALSE(rewriteHandshake(data, target));
                EXPECT_EQ(data, original);
            }
        }
    }
    for (auto target : {-1, 1001, 2167, 2168, 2170, 2192}) {
        auto data     = bytes("c1 01 00 00 08 78");
        auto original = data;
        EXPECT_FALSE(rewriteHandshake(data, target));
        EXPECT_EQ(data, original);
    }
}

TEST(ProtocolCompatibilityTest, LeavesEveryOtherPacketIdUnchanged) {
    for (unsigned value = 0; value <= 0x3fff; ++value) {
        auto id = value & 0x3ff;
        if (id == 1 || id == 193) continue;
        auto data     = header(value) + bytes("00 00 08 78");
        auto original = data;
        EXPECT_FALSE(rewriteHandshake(data, 2169)) << value;
        EXPECT_EQ(data, original);
    }
}

TEST(ProtocolCompatibilityTest, RejectsMalformedHeadersAndIncompleteHandshakesAtomically) {
    for (auto hex :
         {"",
          "80",
          "c1",
          "01 00 00 08",
          "c1 01 00 00 08",
          "c1 01 00 00 08 78 00",
          "81 80 01 00 00 08 78",
          "81 80 80 80 10 00 00 08 78",
          "81 80 80 80 80 00 00 00 08 78",
          "ff ff ff ff ff ff ff ff"}) {
        auto data     = bytes(hex);
        auto original = data;
        EXPECT_FALSE(rewriteHandshake(data, 2169)) << hex;
        EXPECT_EQ(data, original);
    }
    auto valid = bytes("c1 01 00 00 08 78");
    for (std::size_t size = 0; size < valid.size(); ++size) {
        auto data     = valid.substr(0, size);
        auto original = data;
        EXPECT_FALSE(rewriteHandshake(data, 2169)) << size;
        EXPECT_EQ(data, original);
    }
}

TEST(ProtocolCompatibilityTest, DoesNotTranslateScoreboardOrOtherPacketBodies) {
    // 26.44 的 SetScore 报错发生在服务端原生分数写入逻辑中，不由此握手辅助函数处理。
    auto original = bytes(
        "6c 02 00 06 52 65 6d 6f 76 65 02 01 04 5f 6d 73 62"
        "00 06 52 65 6d 6f 76 65 06 01 04 5f 6d 73 62"
    );
    for (auto target : {2168, 2169}) {
        auto data = original;
        EXPECT_FALSE(rewriteHandshake(data, target));
        EXPECT_EQ(data, original);
    }
}

TEST(ProtocolCompatibilityTest, ArbitraryAndMutatedInputsChangeAtMostOneByte) {
    std::mt19937 random{2169};
    for (unsigned i = 0; i < 20000; ++i) {
        std::string original;
        if (i % 2 == 0) {
            original.resize(random() % 256);
            for (auto& value : original) value = static_cast<char>(random());
        } else {
            original                             = bytes("c1 01 00 00 08 78");
            original[random() % original.size()] = static_cast<char>(random());
        }
        auto data = original;
        if (!rewriteHandshake(data, 2169)) {
            EXPECT_EQ(data, original);
            continue;
        }
        ASSERT_EQ(data.size(), original.size());
        unsigned changes{};
        for (std::size_t offset = 0; offset < data.size(); ++offset) {
            if (data[offset] == original[offset]) continue;
            ++changes;
            EXPECT_EQ(original[offset], '\x78');
            EXPECT_EQ(data[offset], '\x79');
        }
        EXPECT_EQ(changes, 1u);
        EXPECT_FALSE(rewriteHandshake(data, 2169));
        ASSERT_TRUE(rewriteHandshake(data, 2168));
        EXPECT_EQ(data, original);
    }
}

} // namespace ll::protocol_compatibility::test
