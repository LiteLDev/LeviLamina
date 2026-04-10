#include "gtest/gtest.h"

#include "nlohmann/json.hpp"

#include "ll/api/Config.h"
#include "ll/api/base/Containers.h"
#include "ll/api/data/IndirectValue.h"
#include "ll/api/data/Version.h"

#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/platform/UUID.h"
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

#include <array>
#include <map>
#include <optional>
#include <set>
#include <string>
#include <string_view>
#include <tuple>
#include <vector>

template <class T>
class TestClass {
public:
    struct {
        int   hello = 233;
        float trs   = 0.2f;
    } structure;

    class MyPair {
    public:
        std::string typo          = "hellotype";
        llong       I_am_a_number = 12415276547;
    };

    int version = 2;

    ll::data::Version ver;

    bool        someFlag = false;
    bool        eeeeFlag = true;
    bool        ssbbFlag = false;
    std::string str      = R"(\1hellow)";
    int         plain    = 1111;

    std::map<std::string, MyPair> amap = {
        {"key1",                  {}},
        {"key2", {"a new thing", 42}},
        {"key3",                  {}},
    };
    std::map<mce::UUID, int> bmap = {
        {                 {},   4454556},
        {             {2, 3},      4366},
        {             {4, 5}, -63556654},
        {mce::UUID::random(),  -5674236},
    };

    Vec2        vec2{};
    Vec3        vec3{};
    BlockPos    pos{};
    BoundingBox box{};

    std::tuple<int, bool, float>        tuple;
    std::pair<std::string_view, MyPair> pair;
    std::array<int, 5>                  array{};
    std::vector<short>                  emptyVec{};
    struct Empty {
    } emptyObj;
    std::map<std::string, int>                         emptyObj2;
    std::optional<std::vector<float>>                  vector     = std::vector<float>{{}, {}, {}};
    std::optional<std::vector<float>>                  nullvector = std::nullopt;
    std::multiset<std::pair<std::string_view, double>> mulset     = {{}, {}};
    enum class H {
        Aenum,
        Benum,
    } hi;
};

struct Test {
    template <class... Args>
    explicit Test(Args&&...) {}
    virtual ~Test() = default;
};

struct TestD : public Test {
    template <class... Args>
    explicit TestD(Args&&...) {}
    ~TestD() override = default;
};

TEST(ConfigTest, DataItemStoresTypedValues) {
    int         integer = 1;
    float       decimal = 1.0f;
    std::string text    = "hello world";

    auto integerItem = DataItem::create(1, integer);
    auto decimalItem = DataItem::create(1, decimal);
    auto textItem    = DataItem::create(1, text);

    ASSERT_TRUE(integerItem->getData<int>().has_value());
    ASSERT_TRUE(decimalItem->getData<float>().has_value());
    ASSERT_TRUE(textItem->getData<std::string>().has_value());

    EXPECT_EQ(integerItem->getData<int>().value(), integer);
    EXPECT_FLOAT_EQ(decimalItem->getData<float>().value(), decimal);
    EXPECT_EQ(textItem->getData<std::string>().value(), text);
}

TEST(ConfigTest, ReflectionSerializesToNbtAndJson) {
    auto value = TestClass<int>{};

    auto nbt = ll::reflection::serialize<CompoundTagVariant>(value);
    ASSERT_TRUE(nbt.has_value());
    auto snbt = nbt->toSnbt(SnbtFormat::PrettyConsolePrint | SnbtFormat::ArrayLineFeed);
    EXPECT_NE(snbt.find("structure"), std::string::npos);
    EXPECT_NE(snbt.find("plain"), std::string::npos);

    auto json = ll::reflection::serialize<nlohmann::json>(value);
    ASSERT_TRUE(json.has_value());
    EXPECT_EQ(json->at("structure").at("hello"), 233);
    EXPECT_EQ(json->at("plain"), 1111);
    EXPECT_EQ(json->at("str"), R"(\1hellow)");
}

TEST(ConfigTest, ReflectionDeserializeReportsTypeMismatch) {
    auto value  = TestClass<int>{};
    auto parsed = CompoundTagVariant::parse(R"({"structure":{"hello":""}})");
    ASSERT_TRUE(parsed.has_value());

    auto result = ll::reflection::deserialize(value, *parsed);
    EXPECT_FALSE(result.has_value());
}

TEST(ConfigTest, IndirectValueSupportsPolymorphicCopies) {
    auto indirect = ll::makePolymorphic<TestD>(13, 23);

    auto indirect2 = indirect;
    auto indirect3 = indirect;

    EXPECT_NE(dynamic_cast<TestD*>(&*indirect), nullptr);
    EXPECT_NE(dynamic_cast<TestD*>(&*indirect2), nullptr);
    EXPECT_NE(dynamic_cast<TestD*>(&*indirect3), nullptr);
}

TEST(ConfigTest, MultidimensionalArrayReportsDimensionsAndSize) {
    auto arr = Util::MultidimensionalArray<int, 2, 3, 4>{};

    EXPECT_EQ(arr.dim(), 3);
    EXPECT_EQ(arr.size(), 2 * 3 * 4);
}
