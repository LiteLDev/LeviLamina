#include "engine/EngineManager.h"
#include "engine/EngineOwnData.h"
#include "engine/GlobalShareData.h"
#include "main/NodeJsHelper.h"
#include <llapi/utils/STLHelper.h>
#include <map>
#ifdef LLSE_BACKEND_PYTHON
#include <main/PythonHelper.h>
#endif
using namespace std;
using namespace script;

///////////////////////////////// API /////////////////////////////////

bool EngineManager::unRegisterEngine(ScriptEngine* toDelete) {
    SRWLockHolder lock(globalShareData->engineListLock);
    for (auto engine = globalShareData->globalEngineList.begin(); engine != globalShareData->globalEngineList.end(); ++engine)
        if (*engine == toDelete) {
            globalShareData->globalEngineList.erase(engine);
            return true;
        }
    return false;
}

bool EngineManager::registerEngine(ScriptEngine* engine) {
    SRWLockHolder lock(globalShareData->engineListLock);
    globalShareData->globalEngineList.push_back(engine);
    return true;
}

ScriptEngine* EngineManager::newEngine(string pluginName, bool isHotLoad) {
    ScriptEngine* engine = nullptr;

#if defined(LLSE_BACKEND_NODEJS)
    engine = NodeJsHelper::newEngine();

#elif defined(LLSE_BACKEND_PYTHON)
    // This fix is used for Python3.10's bug: 
    // The thread will freeze when creating a new engine while another thread is blocking to read stdin
    // Side effects: sys.stdin cannot be used after this patch.
    // More info to see: https://github.com/python/cpython/issues/83526
    //
    // Attention! When CPython is upgraded, this fix must be re-adapted or removed!!
    // 
    if (isHotLoad)
    {
        PythonHelper::FixPython310Stdin::patchPython310CreateStdio();
    }
    engine = new ScriptEngineImpl();
    if (isHotLoad)
    {
        PythonHelper::FixPython310Stdin::unpatchPython310CreateStdio();
    }

#elif !defined(SCRIPTX_BACKEND_WEBASSEMBLY)
    engine = new ScriptEngineImpl();
#else
    engine = ScriptEngineImpl::instance();
#endif

    engine->setData(make_shared<EngineOwnData>());
    registerEngine(engine);
    if (!pluginName.empty()) {
        ENGINE_GET_DATA(engine)->pluginName = pluginName;
    }
    return engine;
}

bool EngineManager::isValid(ScriptEngine* engine, bool onlyCheckLocal) {
    SRWLockSharedHolder lock(globalShareData->engineListLock);
    for (auto i = globalShareData->globalEngineList.begin(); i != globalShareData->globalEngineList.end(); ++i)
        if (*i == engine) {
            if (engine->isDestroying())
                return false;
            if (onlyCheckLocal && getEngineType(engine) != LLSE_BACKEND_TYPE)
                return false;
            else
                return true;
        }
    return false;
}

std::vector<ScriptEngine*> EngineManager::getLocalEngines() {
    std::vector<ScriptEngine*> res;
    SRWLockSharedHolder lock(globalShareData->engineListLock);
    for (auto& engine : globalShareData->globalEngineList) {
        if (getEngineType(engine) == LLSE_BACKEND_TYPE)
            res.push_back(engine);
    }
    return res;
}

std::vector<ScriptEngine*> EngineManager::getGlobalEngines() {
    std::vector<ScriptEngine*> res;
    SRWLockSharedHolder lock(globalShareData->engineListLock);
    for (auto& engine : globalShareData->globalEngineList) {
        res.push_back(engine);
    }
    return res;
}

ScriptEngine* EngineManager::getEngine(std::string name, bool onlyLocalEngine) {
    SRWLockSharedHolder lock(globalShareData->engineListLock);
    for (auto& engine : globalShareData->globalEngineList) {
        if (onlyLocalEngine && getEngineType(engine) != LLSE_BACKEND_TYPE)
            continue;
        auto ownerData = ENGINE_GET_DATA(engine);
        auto filename = UTF82String( std::filesystem::path(str2wstr(ownerData->pluginFileOrDirPath)).filename().u8string());
        if (ownerData->pluginName == name || filename == name)
            return engine;
    }
    return nullptr;
}

std::string EngineManager::getEngineType(ScriptEngine* engine) {
    return ENGINE_GET_DATA(engine)->engineType;
}