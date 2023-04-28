#pragma once

#include <fstream>
#include <string>
#include <fstream>
#include <map>
#include <unordered_map>
#include <memory>

#include <dyncall/dyncall.h>

#include <llapi/LoggerAPI.h>

#include "main/Configs.h"
#include "utils/UsingScriptX.inc"


struct FormCallbackData {
    script::ScriptEngine* engine;
    script::Global<script::Function> func;
};

struct RemoteCallData {
    std::string nameSpace;
    std::string funcName;
    script::Global<Function> callback;
};

/*
struct SimpleCallbackData
{
    ScriptEngine* engine;
    script::Global<script::Function> func;
    std::vector<script::Global<Value>> values;
};
*/

class Player;

struct EngineOwnData {
    // 基础信息
    std::string pluginName = "";
    std::string pluginFileOrDirPath = "";
    std::string engineType = LLSE_BACKEND_TYPE;

    // 表单回调
    std::map<unsigned, FormCallbackData> formCallbacks;

    // RemoteCall Exported Functions: unordered_map<nameSpace, funcName>
    std::unordered_map<std::string, RemoteCallData> exportFuncs;

    /*
    uint64_t simpleCallbackIndex = 0;
    std::unordered_map<uint64_t, SimpleCallbackData> simpleCallbacks;

    inline uint64_t addSimpleCallback(script::Local<Function> func, std::vector<script::Local<Value>> values)
    {
        auto index = ++simpleCallbackIndex;
        std::vector<script::Global<Value>> globalValues;
        for (auto& value : values)
            globalValues.emplace_back(value);
        SimpleCallbackData data{EngineScope::currentEngine(), script::Global<Function>(func), std::move(globalValues)};
        simpleCallbacks.emplace(index, std::move(data));
        return index;
    }
    inline bool removeSimpleCallback(uint64_t index)
    {
        return simpleCallbacks.erase(index);
    }
    */
    
    // I18nAPI
    I18nBase* i18n = nullptr;

    // LoggerAPI
    ::Logger logger = ::Logger("");
    int maxLogLevel = 4;

    // 玩家绑定数据
    std::unordered_map<std::string, script::Global<Value>> playerDataDB;

    // Dynamic Call vm for NativeFFI
    DCCallVM* dynamicCallVM;

    // Unload Callbacks, use for close database...
    int index = 0;
    std::unordered_map<int, std::function<void(ScriptEngine*)>> unloadCallbacks;
    inline int addUnloadCallback(std::function<void(ScriptEngine*)>&& cb) {
        unloadCallbacks[++index] = cb;
        return index;
    }
    inline bool removeUnloadCallback(int index) {
        return unloadCallbacks.erase(index);
    }

    // Init
    EngineOwnData() {
        dynamicCallVM = dcNewCallVM(4096);
        dcMode(dynamicCallVM, DC_CALL_C_DEFAULT);
    }
};

// 引擎附加数据
#define ENGINE_GET_DATA(e) (std::static_pointer_cast<EngineOwnData>((e)->getData()))
#define ENGINE_OWN_DATA() (std::static_pointer_cast<EngineOwnData>(EngineScope::currentEngine()->getData()))