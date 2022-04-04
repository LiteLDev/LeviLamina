#include "RemoteCallAPI.h"
#include <RemoteCallAPI.h>
#include <API/APIHelp.h>
#include <API/LlAPI.h>
#include <Engine/GlobalShareData.h>
#include <Engine/MessageSystem.h>
#include <Utils/STLHelper.h>
#include <sstream>
#include <string>
#include <map>
#include <process.h>
#include <Configs.h>

using namespace std;


//////////////////// Remote Call ////////////////////

Local<Value> MakeRemoteCall_Debug(const string& nameSpace, const string& funcName, const Arguments& args)
{
    auto func = RemoteCall::importFunc(nameSpace, funcName);
    if (!func)
    {
        logger.error("Fail to import! Function [{}::{}] has not been exported!", nameSpace, funcName);
        return Local<Value>();
    }

    std::vector<std::string> params;
    for (int i = 0; i < args.size(); ++i)
    {
        params.emplace_back(ValueToJson(args[i]));
    }
    return JsonToValue((*func)(std::move(params)));
}

bool LLSEExportFunc_Debug(ScriptEngine* engine, const Local<Function>& func, const string& nameSpace, const string& funcName)
{
    // Putting script::Global value into lambda capture list may cause crash
    //script::Global<Function> callback = script::Global<Function>(func);
    std::string identifier = nameSpace + "::" + funcName;
    RemoteCall::CallbackFn cb = [engine, identifier /*, scriptCallback = std::move(callback)*/](std::vector<std::string> params) -> std::string {
        if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
            return "";
        EngineScope enter(engine);
        try
        {
            auto iter = ENGINE_GET_DATA(engine)->exportFuncs.find(identifier);
            if (iter == ENGINE_GET_DATA(engine)->exportFuncs.end())
            {
                logger.debug("");
                return "";
            }
            auto scriptCallback = iter->second.callback.get();
            std::vector<script::Local<Value>> scriptParams;
            for (auto& param : params)
            {
                scriptParams.emplace_back(JsonToValue(param));
            }
            return ValueToJson(scriptCallback.call({}, scriptParams));
        }
        CATCH_WITHOUT_RETURN("Fail in Remote Call");
        return "";
    };
    if (RemoteCall::exportFunc(nameSpace, funcName, std::move(cb))) {
        ENGINE_GET_DATA(engine)->exportFuncs.emplace(identifier, RemoteCallData{nameSpace, funcName, script::Global<Function>(func)});
        return true;
    }
    return false;
}

bool LLSERemoveAllExportedFuncs_Debug(ScriptEngine* engine)
{
    // enter scope to prevent crash in script::Global::~Global()
    EngineScope enter(engine);
    std::vector<std::pair<std::string, std::string>> funcs;
    for (auto& [key, data] : ENGINE_GET_DATA(engine)->exportFuncs)
    {
        funcs.emplace_back(data.nameSpace, data.funcName);
    }
    int count = RemoteCall::removeFuncs(std::move(funcs));
    ENGINE_GET_DATA(engine)->exportFuncs.clear();
    return count;
}


//////////////////// APIs ////////////////////

Local<Value> LlClass::exportFunc_Debug(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kFunction);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try
    {
        std::string nameSpace;
        std::string funcName;
        if (args.size() > 2)
        {
            CHECK_ARG_TYPE(args[2], ValueKind::kString);
            nameSpace = args[1].toStr();
            funcName = args[2].toStr();
        }
        else
        {
            nameSpace = "LLSEGlobal";
            funcName = args[1].toStr();
        }
        return Boolean::newBoolean(LLSEExportFunc_Debug(EngineScope::currentEngine(), args[0].asFunction(), nameSpace, funcName));
    }
    CATCH("Fail in LLSEExport!");
}

Local<Value> LlClass::importFunc_Debug(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        std::string nameSpace;
        std::string funcName;
        if (args.size() > 1)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kString);
            nameSpace = args[0].toStr();
            funcName = args[1].toStr();
        }
        else
        {
            nameSpace = "LLSEGlobal";
            funcName = args[0].toStr();
        }

        //远程调用
        return Function::newFunction([nameSpace{nameSpace}, funcName{funcName}](const Arguments& args) -> Local<Value> {
            return MakeRemoteCall_Debug(nameSpace, funcName, args);
        });
    }
    CATCH("Fail in LLSEImport!")
}