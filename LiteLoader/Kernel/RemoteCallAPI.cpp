#include "RemoteCallAPI.h"
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <LLAPI.h>

extern Logger logger;

namespace RemoteCall
{
CallbackFn const EMPTY_FUNC{};
std::unordered_map<std::string, RemoteCall::ExportedFuncData> exportedFuncs;

bool exportFunc(std::string const& nameSpace, std::string const& funcName, CallbackFn&& callback, HMODULE handler)
{
    if (nameSpace.find("::") != nameSpace.npos)
    {
        logger.error("Namespace can't includes \"::\"");
        return false;
    }
    if (exportedFuncs.count(nameSpace + "::" + funcName) != 0)
        return false;
    exportedFuncs.emplace(nameSpace + "::" + funcName, ExportedFuncData{handler, std::move(callback)});
    return true;
}

CallbackFn const& importFunc(std::string const& nameSpace, std::string const& funcName)
{
    auto iter = exportedFuncs.find(nameSpace + "::" + funcName);
    if (iter == exportedFuncs.end())
        return EMPTY_FUNC;
    return iter->second.callback;
}

bool hasFunc(std::string const& nameSpace, std::string const& funcName)
{
    return exportedFuncs.find(nameSpace + "::" + funcName) != exportedFuncs.end();
}

bool removeFunc(std::string&& key)
{
    return exportedFuncs.erase(key);
}

bool removeFunc(std::string const& nameSpace, std::string const& funcName)
{
    return removeFunc(nameSpace + "::" + funcName);
}

void _onCallError(std::string const& msg, HMODULE handler)
{
    logger.error(msg);
    auto plugin = LL::getPlugin(handler);
    if (plugin)
        logger.error("In plugin <{}>", plugin->name);
}

int removeNameSpace(std::string const& nameSpace)
{
    int count = 0;
    for (auto& iter = exportedFuncs.begin(); iter != exportedFuncs.end();)
    {
        if (SplitStrWithPattern(iter->first, "::")[0] == nameSpace)
        {
            iter = exportedFuncs.erase(iter);
            ++count;
        }
        else
            ++iter;
    }
    return count;
}

int removeFuncs(std::vector<std::pair<std::string, std::string>> funcs)
{
    int count = 0;
    for (auto& [ns, name] : funcs)
    {
        if (removeFunc(ns + "::" + name))
            count++;
    }
    return count;
}

} // namespace RemoteCall


#ifdef DEBUG
#include <ScheduleAPI.h>
#include <MC/Player.hpp>
int TestExport(std::string a0, int a1, int a2)
{
    return static_cast<int>(a0.size()) + a1;
}
std::unique_ptr<CompoundTag> TestSimulatedPlayerLL(Player* player)
{
    return player->getNbt();
}

void exportTestSimulatedPlayerLL()
{
    RemoteCall::exportAs("TestRemoteCall", "TestSimulatedPlayerLL", TestSimulatedPlayerLL);
}
#include <EventAPI.h>
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
