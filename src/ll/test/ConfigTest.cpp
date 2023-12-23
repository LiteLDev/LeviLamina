#include "nlohmann/json.hpp"

#include "ll/api/Config.h"
#include "ll/api/base/ErrorInfo.h"
#include "ll/api/base/Version.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/ServerInstance.h"

// #include "ll/api/schedule/Scheduler.h"
// #include "ll/api/service/GlobalService.h"
// #include "mc/world/level/BlockPos.h"
// #include "mc/world/level/Level.h"
// #include "mc/world/level/LevelChunkTag.h"
// #include "mc/world/level/storage/LevelStorage.h"
// using namespace ll::schedule;
// GameTickScheduler s;

#include "ll/api/utils/WinUtils.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/standard/FillCommand.h"

#include "mc/deps/core/mce/UUID.h"

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

    ll::Version ver;

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
// LL_AUTO_TYPED_INSTANCE_HOOK(Virtual, HookPriority::Normal, FillCommand, &FillCommand::execute, void, CommandOrigin
// const&, CommandOutput&) {
// }

class myTypeList1;
class myTypeList2;

LL_AUTO_TYPED_INSTANCE_HOOK(
    ConfigTest,
    HookPriority::Normal,
    ServerInstance,
    &ServerInstance::startServerThread,
    void
) {
    origin();

    auto lock = ll::Logger::lock();

    int s = 1;

    auto sbbbbbb = DataItem::create(1, s);

    ll::logger.debug("DataItem {} {}", typeid(*sbbbbbb).name(), sbbbbbb->getData<int>().value());


    auto helloReflection = TestClass<int>{};

    // ll::config::saveConfig(helloReflection, "plugins/Test/config/testconfig.json");

    auto list = ll::string_utils::splitByPattern("structure.trs", ".");

    ll::reflection::visit(std::span{list}, helloReflection, [](auto&& a) {
        if constexpr (std::floating_point<std::remove_cvref_t<decltype(a)>>) {
            ll::logger.debug("ll::reflection::visit {} {}", typeid(decltype(a)).name(), a);
        }
    });

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
        ll::error_info::printCurrentException();
    }

    ll::logger.debug("789\xDB\xFE");
    ll::logger.debug("789\xDB\xFE");

    ll::meta::DynamicTypeList::push_back<myTypeList1, int>();
    ll::meta::DynamicTypeList::push_back<myTypeList1, float>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(ll::meta::DynamicTypeList::value<myTypeList1>())>);
    ll::meta::DynamicTypeList::push_back<myTypeList2, bool>();
    ll::meta::DynamicTypeList::push_back<myTypeList2, long>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(ll::meta::DynamicTypeList::value<myTypeList2>())>);

    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(ll::meta::DynamicTypeList::value<myTypeList2>())>);
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(ll::meta::DynamicTypeList::value<myTypeList1>())>);

    ll::meta::DynamicTypeList::assign<myTypeList1, ll::meta::TypeList<int, bool, long, myTypeList2>>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(ll::meta::DynamicTypeList::value<myTypeList1>())>);

    ll::meta::DynamicTypeList::wrap<myTypeList1, std::optional>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(ll::meta::DynamicTypeList::value<myTypeList1>())>);

    ll::meta::DynamicTypeList::assign<myTypeList1, ll::meta::TypeList<int, bool, long>>();
    ll::meta::DynamicTypeList::wrap<myTypeList1, std::add_const_t>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(ll::meta::DynamicTypeList::value<myTypeList1>())>);
    ll::meta::DynamicTypeList::map<myTypeList1, std::add_lvalue_reference>();
    ll::logger.debug("{}", ll::reflection::type_raw_name_v<decltype(ll::meta::DynamicTypeList::value<myTypeList1>())>);
}
