
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "mc/server/ServerInstance.h"

#include "ll/api/reflection/Reflection.h"

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
    std::optional<std::vector<float>>                  vector = std::vector<float>{{}, {}, {}};
    std::optional<std::vector<float>>                  nullvector = std::nullopt;
    std::multiset<std::pair<std::string_view, double>> mulset = {{}, {}};
    enum class H {
        Aenum,
        Benum,
    } hi;
    // std::variant<std::string_view, double> canttype;
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
    int a;
    ll::reflection::fromJson(a, nlohmann::json(1));
    ll::logger.debug("\n{}", a);
    ll::reflection::fromJson(helloReflection, ll::reflection::toJson<TestClass>(helloReflection));
    ll::logger.debug("\n{}", ll::reflection::toJson<TestClass>(helloReflection).dump(4));
}