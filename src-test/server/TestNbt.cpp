#include "gtest/gtest.h"

#include "ll/api/memory/Signature.h"
#include "ll/api/utils/StringUtils.h"

#include "mc/deps/core/math/Color.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/nbt/UniqueTagPtr.h"
#include "mc/util/ColorFormat.h"

#include "nlohmann/json.hpp"

TEST(TestNbt, CompoundTagSupportsRoundTripConversionsAndNestedAccess) {
    using namespace ll::literals;

    auto nbt = CompoundTag{
        {    "anull",                                     nullptr                     },
        {  "string?", R"(streee _ _o-ix 我超, utf8 "\asfa%"*)##q)$\\"\Q34\\""'':)"_tag},
        {     "1num",                                                                1},
        {     "nums",                                                         (int16)3},
        {     "byte",                                                        (int8)127},
        {     "list",                ListTag{5_b, ByteTag{true}, ByteTag{false}, -2_b}},
        { "compound",
         {
         {"float", 0.1f},
         {"long", 10000ull},
         {"double", 0.3},
         {"sdouble", 1.0},
         }                                                                            },
        {"bytearray",                          ByteArrayTag{1, 2, 3, 4, 5, 62, 63, 66}},
        { "intarray",                           IntArrayTag{1, 2, 3, 4, 5, -2, -3, -6}},
    };

    nbt["some"]["new"]["compound"]          = nbt;
    nbt["hello"]["789\xDB\xFE"]["\u123456"] = std::string{R"(\n\t\r\b\u1234\uffffffff)"} + "\xDB\xFE";

    nlohmann::json j{
        { "num",         1},
        {"nums",  (int16)3},
        {"byte", (int8)127}
    };
    j["some"]["new"]["json"] = 2;

    size_t iter = 0;

    std::string_view snbt2{R"(

{
    anull = null,
    byte = 127b,
    bytearray = [B;1b, 2b, 3b, 4b, 5b, 62b, 63b, 66b],
    compound = {
        sdouble = 1.0 /*d*/,
        double = 0.3D,
        float = 0.1f,
        long = 10000l
    },
    hello = {
        "Nzg52/4=" /*BASE64*/= {
            'ሴ56' = "XG5cdFxyXGJcdTEyMzRc\
                //hi
            dWZmZmZmZmZm2/4=" /*BASE64*/ // hellow
        }
    },
    intarray = [I;1, 2, 3, 4, 5, -2, -3, -6],
    list = [5b, 1b, 0b, -2b],
    1num = 1,
    nums = 3s,                # teabawwb 4atg @zg5y 
    some = {
        new = {              ; hi
            compound = {
                anull = null,
                "byte" = 127b
                "bytearray" = [B;1b, 2b, 3b, 4b, 5b, 62b, 63b, 66b],  // orld   /**/ /*     34t */
                "compound" = {
                    "sdouble" = 1.0 /*d*/
                    "double" = 0.3D
                    "float" = 0.1f
                    "long" = 10000l
                }
                "intarray": [ /*I;*/1,2,3,4,5,-2,-3,-6]
                list = [
                    5 /*b*/
                    1 /*b*/
                    0 /*b*/,
                    -2 /*b*/,
                ]
                "1num": 1
                'nums': 3s
                "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':",
            }
        }
    }
    "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':"
}

    )"};

    auto nbt2 = CompoundTag::fromSnbt(snbt2, iter);
    ASSERT_TRUE(nbt2.has_value()) << nbt2.error().message();
    EXPECT_GT(iter, 0);

    CompoundTag nbt3;

    nbt3["hello"]["world"] = ListTag{1.0, 2.0, 3.0};

    nbt3["hello"]["world"][1] = 7.0;

    nbt3["hello"][", "] = "world";

    EXPECT_EQ(nbt3["hello"][", "], "world");
    EXPECT_TRUE(nbt.equals(nbt2.value()));
    EXPECT_EQ(nbt.toSnbt(), nbt2.value().toSnbt());

    auto binaryRoundTrip1 = CompoundTag::fromBinaryNbt(nbt.toBinaryNbt());
    auto binaryRoundTrip2 = CompoundTag::fromBinaryNbt(nbt2.value().toBinaryNbt());
    ASSERT_TRUE(binaryRoundTrip1.has_value());
    ASSERT_TRUE(binaryRoundTrip2.has_value());
    EXPECT_EQ(binaryRoundTrip1.value(), binaryRoundTrip2.value());
    EXPECT_EQ(nbt.toBinaryNbt(), nbt2.value().toBinaryNbt());

    auto networkRoundTrip1 = CompoundTag::fromNetworkNbt(nbt.toNetworkNbt());
    auto networkRoundTrip2 = CompoundTag::fromNetworkNbt(nbt2.value().toNetworkNbt());
    ASSERT_TRUE(networkRoundTrip1.has_value());
    ASSERT_TRUE(networkRoundTrip2.has_value());
    EXPECT_EQ(networkRoundTrip1.value(), networkRoundTrip2.value());
    EXPECT_EQ(nbt.toNetworkNbt(), nbt2.value().toNetworkNbt());

    EXPECT_FALSE(
        ll::string_utils::replaceMcToAnsiCode(
            ll::string_utils::replaceAnsiToMcCode(nbt.toSnbt(SnbtFormat::Colored | SnbtFormat::Console))
        )
            .empty()
    );
    EXPECT_FALSE(ll::string_utils::replaceMcToAnsiCode(nbt2.value().toSnbt(SnbtFormat::Colored)).empty());

    EXPECT_FALSE(std::string{ColorFormat::AQUA}.empty());
    EXPECT_FALSE(std::string{ColorFormat::MINECOIN_GOLD}.empty());
    EXPECT_FALSE(std::string{ColorFormat::LIGHT_PURPLE}.empty());

    using namespace ll::string_utils;

    auto parsedMinimalChest = CompoundTag::fromSnbt(R"({
    Findable: 0b,
    Items: [],
    id: Chest,
    isMovable: 1b,
    x: -3,
    y: 88,
    z: -1
})");
    ASSERT_TRUE(parsedMinimalChest.has_value());
    EXPECT_TRUE(parsedMinimalChest->contains("id"));

    auto signatureString = "48 8D 05 ? ? ? ? E8"_sig.toString(false, false);
    EXPECT_FALSE(signatureString.empty());

    auto nbt11 = CompoundTag{
        {"a", {{"b", {{"c", 12345}}}}}
    };
    auto nbt12 = ListTag{{ListTag{{ListTag{{54321}}}}}};

    EXPECT_EQ(int{nbt11["a"]["b"]["c"]}, 12345);
    EXPECT_EQ(int{nbt12[0][0][0]}, 54321);

    UniqueTagPtr ptr;
    ptr.emplace<CompoundTag>();

    EXPECT_NE(ptr.get(), nullptr);
    EXPECT_FALSE(j.empty());
}
