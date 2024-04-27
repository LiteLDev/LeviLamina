#include "nlohmann/json.hpp"

#include "ll/api/data/Version.h"

#include "ll/api/Config.h"

#include "ll/api/memory/Hook.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/ServerInstance.h"

// #include "ll/api/schedule/Scheduler.h"
// #include "ll/api/service/Bedrock.h"
// #include "mc/world/level/BlockPos.h"
// #include "mc/world/level/Level.h"
// #include "mc/world/level/LevelChunkTag.h"
// #include "mc/world/level/storage/LevelStorage.h"

#include "ll/api/utils/WinUtils.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/standard/FillCommand.h"

#include "mc/deps/core/mce/Color.h"
#include "mc/deps/core/mce/UUID.h"

#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

#include "mc/world/actor/DataItem.h"

// [0, 8, 16, 96, 97, 98, 104, 136, 144, 160, 176, 184, 196, 208, 232, 248, 304, 328, 360, 392, 408]

// ["structure", "version", "ver", "someFlag", "eeeeFlag", "ssbbFlag", "str", "plain", "amap", "bmap", "vec2", "vec3",
// "pos", "box", "tuple", "pair", "array", "vector", "nullvector", "mulset", "hi"]

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
        long long   I_am_a_number = 12415276547;
    };

    int version = 2;

    ll::data::Version ver;

    bool        someFlag = false;
    bool        eeeeFlag = true;
    bool        ssbbFlag = false;
    std::string str      = R"(\1hellow)";
    int         plain    = 1111;

    std::map<std::string, MyPair> amap = {
        {"key1", {}                 },
        {"key2", {"a new thing", 42}},
        {"key3", {}                 },
    };
    std::map<mce::UUID, int> bmap = {
        {{},                  4454556  },
        {{2, 3},              4366     },
        {{4, 5},              -63556654},
        {mce::UUID::random(), -5674236 },
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

LL_AUTO_TYPE_INSTANCE_HOOK(ConfigTest, HookPriority::Normal, ServerInstance, &ServerInstance::startServerThread, void) {
    origin();

    auto lock = ll::Logger::lock();

    int         s        = 1;
    float       f        = 1.0f;
    std::string str      = "hello world";
    auto        sbbbbbb  = DataItem::create(1, s);
    auto        sbbbbbb1 = DataItem::create(1, f);
    auto        sbbbbbb2 = DataItem::create(1, str);

    ll::logger.debug("DataItem {} {}", typeid(*sbbbbbb).name(), sbbbbbb->getData<int>().value());
    ll::logger.debug("DataItem {} {}", typeid(*sbbbbbb1).name(), sbbbbbb1->getData<float>().value());
    ll::logger.debug("DataItem {} {}", typeid(*sbbbbbb2).name(), sbbbbbb2->getData<std::string>().value());


    auto helloReflection = TestClass<int>{};

    // ll::config::saveConfig(helloReflection, "plugins/Test/config/testconfig.json");

    auto list = ll::string_utils::splitByPattern("structure.trs", ".");

    ll::logger.debug(
        "reflection NBT: {}",
        ll::reflection::serialize<CompoundTagVariant>(helloReflection)
            .value()
            .toSnbt(SnbtFormat::PrettyConsolePrint | SnbtFormat::ArrayLineFeed)
    );

    ll::logger.debug("reflection json: {}", ll::reflection::serialize<nlohmann::json>(helloReflection).value().dump(4));

    // ll::reflection::deserialize(helloReflection, ll::reflection::serialize<CompoundTagVariant>(helloReflection));

    ll::logger.debug("0x{:X}", (uintptr_t)ll::memory::resolveIdentifier(&FillCommand::execute));
    ll::logger.debug("0x{:X}", (uintptr_t)ll::win_utils::getImageRange().data());

    ll::logger.debug("0x{:X}", (uintptr_t)ll::win_utils::getImageRange().size());
    ll::logger.debug(
        "0x{:X}",
        (uintptr_t)ll::memory::resolveIdentifier(&FillCommand::execute)
            - (uintptr_t)ll::win_utils::getImageRange("LeviLamina.dll").data()
    );

    ll::logger.debug("{}", ll::reflection::getRawName<&FillCommand::execute>());
    ll::logger.debug("{}", ll::reflection::getRawName<&ServerLevel::_subTick>());

    ll::reflection::deserialize(helloReflection, CompoundTagVariant::parse(R"({"structure":{"hello":""}})").value())
        .error()
        .log(ll::logger.error);

    ll::logger.debug("789\xDB\xFE");
    ll::logger.debug("789\xDB\xFE");
}
