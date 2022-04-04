#include "RemoteCallAPI.h"
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <LLAPI.h>

extern Logger logger;

namespace RemoteCall
{
std::unordered_map<std::string, RemoteCall::ExportedFuncData> exportedFuncs;

bool exportFunc(std::string const& nameSpace, std::string const& funcName, CallbackFn&& callback, HMODULE handler)
{
    if (!LL::isDebugMode()) {
        logger.warn("please use LL RemoteCall in debug mode");
    }
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

CallbackFn* importFunc(std::string const& nameSpace, std::string const& funcName)
{
    if (!LL::isDebugMode())
    {
        logger.warn("please use LL RemoteCall in debug mode");
    }
    auto iter = exportedFuncs.find(nameSpace + "::" + funcName);
    if (iter == exportedFuncs.end())
        return nullptr;
    return &iter->second.callback;
}

bool removeFunc(std::string&& key)
{
    return exportedFuncs.erase(key);
}

bool removeFunc(std::string const& nameSpace, std::string const& funcName)
{
    return removeFunc(nameSpace + "::" + funcName);
}

int removeNameSpace(std::string const& nameSpace)
{
    int count = 0;
    for (auto& iter = exportedFuncs.begin(); iter != exportedFuncs.end();) {
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
    for (auto [ns, name] : funcs) {
        if (removeFunc(ns + "::" + name))
            count++;
    }
    return count;
}

} // namespace RemoteCall



#ifdef DEBUG
#include <ScheduleAPI.h>
int TestExport(std::string const& a0, int a1, int a2)
{
    return static_cast<int>(a0.size()) + a1;
}
auto TestRemoteCall = ([]() -> bool {
    std::thread([]() {
        Sleep(5000);
        Schedule::nextTick([]() {
            RemoteCall::exportAs(
                "Test", "test",
                [](std::string const& arg) -> int {
                    return 1;
                });

            RemoteCall::exportAs("Test", "test2", TestExport);
            auto func = RemoteCall::importAs<decltype(TestExport)>("Test", "test2");
            auto func2 = RemoteCall::importAs<std::function<decltype(TestExport)>>("Test", "test2");
            auto size = func("TestParam", 5, 10);
        });
    }).detach();
    return true;
})();

#endif // DEBUG
