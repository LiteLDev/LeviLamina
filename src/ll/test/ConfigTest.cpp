#include "nlohmann/json.hpp"

#include "ll/api/Config.h"
#include "ll/api/data/Version.h"
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

    std::tuple<int, bool, float>                       tuple;
    std::pair<std::string_view, MyPair>                pair;
    std::array<int, 5>                                 array{};
    std::optional<std::vector<float>>                  vector     = std::vector<float>{{}, {}, {}};
    std::optional<std::vector<float>>                  nullvector = std::nullopt;
    std::multiset<std::pair<std::string_view, double>> mulset     = {{}, {}};
    enum class H {
        Aenum,
        Benum,
    } hi;
};
// LL_AUTO_TYPE_INSTANCE_HOOK(Virtual, HookPriority::Normal, FillCommand, &FillCommand::execute, void, CommandOrigin
// const&, CommandOutput&) {
// }
#ifndef __clang__
struct myTypeList1 : ll::meta::DynamicTypeList<myTypeList1> {};
struct myTypeList2 : ll::meta::DynamicTypeList<myTypeList2> {};
struct myTypeList3 : ll::meta::TypeList<bool, int> {};
struct myTypeList4 : ll::meta::TypeList<> {};
#endif

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

    // ll::reflection::visit(std::span{list}, helloReflection, [](auto&& a) {
    //     if constexpr (std::floating_point<std::remove_cvref_t<decltype(a)>>) {
    //         ll::logger.debug("ll::reflection::visit {} {}", typeid(decltype(a)).name(), a);
    //     }
    // });

    ll::logger.debug(
        "reflection NBT: {}",
        ll::reflection::serialize<CompoundTagVariant>(helloReflection).toSnbt(SnbtFormat::PrettyConsolePrint)
    );

    ll::reflection::deserialize(helloReflection, ll::reflection::serialize<CompoundTagVariant>(helloReflection));

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
    ll::logger.debug("{}", ll::reflection::getRawName<&ServerLevel::_checkBlockPermutationCap>());

    try {
        ll::reflection::deserialize(
            helloReflection,
            nlohmann::ordered_json::parse(R"({"structure":{"hello":""}})", nullptr, false, true)
        );
    } catch (...) {
        ll::error_utils::printCurrentException(ll::logger);
    }

    ll::logger.debug("789\xDB\xFE");
    ll::logger.debug("789\xDB\xFE");
#ifndef __clang__
    myTypeList1::push_back<int>();
    myTypeList1::push_back<float>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(myTypeList1::value())>);

    myTypeList2::push_back<bool>();
    myTypeList2::push_back<long>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(myTypeList2::value())>);

    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(myTypeList2::value())>);
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(myTypeList1::value())>);

    myTypeList1::assign<ll::meta::TypeList<int, bool, long, myTypeList2>>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(myTypeList1::value())>);

    myTypeList1::wrap<std::optional>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(myTypeList1::value())>);

    myTypeList1::assign<ll::meta::TypeList<int, bool, long>>();
    myTypeList1::wrap<std::add_const_t>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(myTypeList1::value())>);
    myTypeList1::map<std::add_lvalue_reference>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(myTypeList1::value())>);

    ll::logger.debug("myTypeList3::index {} {}", myTypeList3::index<bool>, myTypeList3::index<int>);

    myTypeList3::forEach([]<typename T>() { ll::logger.debug(typeid(T).name()); });

    myTypeList3::forEachIndexed([]<typename T>(size_t index) { ll::logger.debug("{} : {}", typeid(T).name(), index); });

    myTypeList4::forEach([]<typename T>() { ll::logger.debug(typeid(T).name()); });

    myTypeList4::forEachIndexed([]<typename T>(size_t index) { ll::logger.debug("{} : {}", typeid(T).name(), index); });
#endif
}
