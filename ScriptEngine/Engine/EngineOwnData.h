#pragma once
#include <API/APIHelp.h>
#include <fstream>
#include <string>
#include <fstream>
#include <map>
#include <unordered_map>
#include <memory>
#include <LoggerAPI.h>

struct FormCallbackData
{
    script::ScriptEngine* engine;
    script::Global<script::Function> func;
};

class Player;

struct EngineOwnData
{
    //基础信息
    std::string pluginName = "";
    std::string pluginFilePath = "";
    std::string engineType = LLSE_BACKEND_TYPE;

    //表单回调
    std::map<unsigned, FormCallbackData> formCallbacks;

    //LoggerAPI
    bool toConsole = true;
    ::Logger logger = ::Logger("");
    int maxLogLevel = 4;

    //玩家绑定数据
    std::unordered_map<std::string,script::Global<Value>> playerDataDB;
};

// 引擎附加数据
#define ENGINE_GET_DATA(e) (std::static_pointer_cast<EngineOwnData>((e)->getData()))
#define ENGINE_OWN_DATA() (std::static_pointer_cast<EngineOwnData>(EngineScope::currentEngine()->getData()))