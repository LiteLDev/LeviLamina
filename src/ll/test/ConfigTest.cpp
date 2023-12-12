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

LL_AUTO_TYPED_INSTANCE_HOOK(
    ConfigTest,
    HookPriority::Normal,
    ServerInstance,
    &ServerInstance::startServerThread,
    void
) {
    origin();

    auto helloReflection = TestClass<int>{};

    // ll::config::saveConfig(helloReflection, "plugins/Test/config/testconfig.json");

    ll::logger.debug(
        "reflection NBT: {}",
        ll::reflection::serialize<CompoundTagVariant>(helloReflection).toSnbt(SnbtFormat::PrettyConsolePrint)
    );

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

    // ll::logger.debug("{} for load config", ll::config::loadConfig(helloReflection, "plugins/Test/testconfig.json"));
    // ll::logger.debug("\n{}", ll::reflection::serialize<nlohmann::ordered_json>(helloReflection).dump(4));

    ll::logger.debug("789\xDB\xFE");
    ll::logger.debug("789\xDB\xFE");
}
