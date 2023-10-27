
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "mc/server/ServerInstance.h"

#include "ll/api/reflection/Reflection.h"

// #include "ll/api/schedule/Scheduler.h"
// #include "ll/api/service/GlobalService.h"
// #include "mc/world/level/BlockPos.h"
// #include "mc/world/level/Level.h"
// #include "mc/world/level/LevelChunkTag.h"
// #include "mc/world/level/storage/LevelStorage.h"
// using namespace ll::schedule;
// GameTickScheduler s;

class TestClass {
public:
    bool someFlag = false;
    bool eeeeFlag = true;
    struct {
        int   hello = 233;
        float trs   = 0.2f;
    } structure;
    bool        ssbbFlag = false;
    std::string str      = R"(\1hellow)";
    int         plain    = 1111;
    class MyPair {
    public:
        std::string typo          = "hellotype";
        long long   I_am_a_number = 12415276547;
    };

    std::map<std::string, MyPair> amap = {
        {"key1", {}                 },
        {"key2", {"a new thing", 42}},
        {"key3", {}                 },
    };
    std::tuple<int, bool, float>                       tuple;
    std::pair<std::string_view, MyPair>                pair;
    std::array<int, 5>                                 array;
    std::optional<std::vector<float>>                  vector     = std::vector<float>{{}, {}, {}};
    std::optional<std::vector<float>>                  nullvector = std::nullopt;
    std::multiset<std::pair<std::string_view, double>> mulset     = {{}, {}};
    enum class H {
        Aenum,
        Benum,
    } hi;
};

LL_AUTO_TYPED_INSTANCE_HOOK(
    ConfigTest,
    HookPriority::Normal,
    ServerInstance,
    &ServerInstance::startServerThread,
    void
) {
    origin();

    auto helloReflection = TestClass{};

    ll::logger.debug("\n{}", ll::reflection::toJson<TestClass>(helloReflection).dump(4));


    // s.add<DelayTask>(1_tick, [&] {
    //     std::unordered_set<BlockPos> sbset;
    //     ll::logger.debug("hellowwwwwwww DelayTask");
    //     ll::Global<Level>->getLevelStorage().forEachKeyWithPrefix(
    //         "",
    //         DBHelpers::Category::Chunk,
    //         [&](std::string_view key, std::string_view) {
    //             auto sz = key.size();
    //             if (sz == 9 || sz == 10 || sz == 13 || sz == 14) {
    //                 int x   = *reinterpret_cast<const int*>(key.data());
    //                 int z   = *reinterpret_cast<const int*>(key.data() + 4);
    //                 int dim = 0;
    //                 int idx = 8;
    //                 if (sz > 12) {
    //                     dim = *reinterpret_cast<const int*>(key.data() + 8);
    //                     idx = 12;
    //                 }
    //                 if (!magic_enum::enum_contains<LevelChunkTag>(key[idx])) { return; }
    //                 auto p = BlockPos{x * 16, z * 16, dim};
    //                 if (sbset.contains(p)) { return; }
    //                 sbset.insert(p);
    //                 ll::logger.debug("key: {} {}", p.toString(), sz);
    //             }
    //         }
    //     );
    // });
}