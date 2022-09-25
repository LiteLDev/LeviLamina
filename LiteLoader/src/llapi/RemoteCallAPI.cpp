#include "llapi/RemoteCallAPI.h"

#include "llapi/utils/StringHelper.h"

#include "llapi/LLAPI.h"
#include "llapi/LoggerAPI.h"

#include "liteloader/LiteLoader.h"

using ll::logger;

namespace RemoteCall {
CallbackFn const EMPTY_FUNC{};
std::unordered_map<std::string, RemoteCall::ExportedFuncData> exportedFuncs;

bool exportFunc(std::string const& nameSpace, std::string const& funcName, CallbackFn&& callback, HMODULE handle) {
    if (nameSpace.find("::") != nameSpace.npos) {
        logger.error("Namespace can't includes \"::\"");
        return false;
    }
    if (exportedFuncs.count(nameSpace + "::" + funcName) != 0)
        return false;
    exportedFuncs.emplace(nameSpace + "::" + funcName, ExportedFuncData{handle, std::move(callback)});
    return true;
}

CallbackFn const& importFunc(std::string const& nameSpace, std::string const& funcName) {
    auto iter = exportedFuncs.find(nameSpace + "::" + funcName);
    if (iter == exportedFuncs.end())
        return EMPTY_FUNC;
    return iter->second.callback;
}

bool hasFunc(std::string const& nameSpace, std::string const& funcName) {
    return exportedFuncs.find(nameSpace + "::" + funcName) != exportedFuncs.end();
}

bool removeFunc(std::string&& key) {
    return exportedFuncs.erase(key);
}

bool removeFunc(std::string const& nameSpace, std::string const& funcName) {
    return removeFunc(nameSpace + "::" + funcName);
}

void _onCallError(std::string const& msg, HMODULE handle) {
    logger.error(msg);
    auto plugin = ll::getPlugin(handle);
    if (plugin)
        logger.error("In plugin <{}>", plugin->name);
}

int removeNameSpace(std::string const& nameSpace) {
    int count = 0;
    for (auto iter = exportedFuncs.begin(); iter != exportedFuncs.end();) {
        if (SplitStrWithPattern(iter->first, "::")[0] == nameSpace) {
            iter = exportedFuncs.erase(iter);
            ++count;
        } else
            ++iter;
    }
    return count;
}

int removeFuncs(std::vector<std::pair<std::string, std::string>> funcs) {
    int count = 0;
    for (auto& [ns, name] : funcs) {
        if (removeFunc(ns + "::" + name))
            count++;
    }
    return count;
}

} // namespace RemoteCall

static_assert(RemoteCall::is_supported_type_v<void>);
static_assert(RemoteCall::is_supported_type_v<int>);
static_assert(RemoteCall::is_supported_type_v<bool>);
static_assert(RemoteCall::is_supported_type_v<float>);
static_assert(RemoteCall::is_supported_type_v<size_t>);
static_assert(RemoteCall::is_supported_type_v<Player*>);
static_assert(RemoteCall::is_supported_type_v<Actor*>);
static_assert(RemoteCall::is_supported_type_v<Mob*>);
static_assert(RemoteCall::is_supported_type_v<BlockActor*>);
static_assert(RemoteCall::is_supported_type_v<Block*>);
static_assert(RemoteCall::is_supported_type_v<Vec3>);
static_assert(RemoteCall::is_supported_type_v<Vec3&>);
static_assert(RemoteCall::is_supported_type_v<Vec3 const&>);
// static_assert(RemoteCall::is_supported_type_v<Vec3 const*>);
static_assert(RemoteCall::is_supported_type_v<CompoundTag*>);


#ifdef DEBUG
#include "llapi/ScheduleAPI.h"
#include "llapi/mc/Player.hpp"
inline bool testExtra = ([]() {
    std::vector<std::string> input{"aa", "abcd", "test"};
    auto output = RemoteCall::extract<decltype(input)>(RemoteCall::pack(input));
    assert(output == input);
    std::unordered_map<std::string, std::string> input2{
        {"aa", "bb"},
        {"ab", "ba"},
        {"abc", "cba"},
    };
    auto output2 = RemoteCall::extract<decltype(input2)>(RemoteCall::pack(input2));
    assert(output2 == input2);
    std::vector<decltype(input2)> input3{input2, input2};
    auto output3 = RemoteCall::extract<decltype(input3)>(RemoteCall::pack(input3));
    assert(output3 == input3);
    std::unordered_map<std::string, decltype(input3)> input4{
        {"aa", input3},
        {"ab", input3},
        {"abc", input3},
    };
    auto output4 = RemoteCall::extract<decltype(input4)>(RemoteCall::pack(input4));
    assert(output4 == input4);

    std::vector<decltype(input4)> input5{input4, input4, input4};
    auto output5 = RemoteCall::extract<decltype(input5)>(RemoteCall::pack(input5));
    assert(output5 == input5);
#if false
    __debugbreak();
    output5.erase(output5.begin());
    assert(output5 == input5);
    __debugbreak();
#endif // false
    return true;
})();
int TestExport(std::string a0, int a1, int a2) {
    return static_cast<int>(a0.size()) + a1;
}
std::unique_ptr<CompoundTag> TestSimulatedPlayerLL(Player* player) {
    return player->getNbt();
}

void exportTestSimulatedPlayerLL() {
    RemoteCall::exportAs("TestRemoteCall", "TestSimulatedPlayerLL", TestSimulatedPlayerLL);
}
#include "llapi/EventAPI.h"
auto TestRemoteCall = ([]() -> bool {
    std::thread([]() {
        Sleep(5000);
        Schedule::nextTick([]() {
            RemoteCall::exportAs("TestNameSpace", "StrSize", [](std::string arg) -> size_t {
                return arg.size();
            });

            exportTestSimulatedPlayerLL();
            RemoteCall::exportAs("Test", "test2", TestExport);
            if (!RemoteCall::hasFunc("TestRemoteCall", "TestSimulatedPlayerJs"))
                return;
            auto func = RemoteCall::importAs<decltype(TestExport)>("Test", "test2");
            auto func2 = RemoteCall::importAs<std::function<decltype(TestExport)>>("Test", "test2");
            auto size = func("TestParam", 5, 10);
            static auto TestSimulatedPlayerJs = RemoteCall::importAs<bool(Player*)>("TestRemoteCall", "TestSimulatedPlayerJs");
            Event::PlayerJoinEvent::subscribe_ref([](Event::PlayerJoinEvent& ev) {
                logger.warn("TestSimulatedPlayer");
                auto res = TestSimulatedPlayerJs(ev.mPlayer);
                logger.warn("Result: {}", res);
                return true;
            });
        });
    }).detach();
    return true;
})();

#endif // DEBUG
