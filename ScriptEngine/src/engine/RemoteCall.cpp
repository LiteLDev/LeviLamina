#include "api/APIHelp.h"
#include "api/LlAPI.h"
#include "engine/RemoteCall.h"
#include "engine/GlobalShareData.h"
#include "engine/MessageSystem.h"
#include <llapi/utils/STLHelper.h>
#include <sstream>
#include <string>
#include <map>
#include <process.h>
#include "main/Configs.h"

using namespace std;

unordered_map<int, string> remoteResultMap;

//////////////////// 消息循环 ////////////////////

void inline StringTrim(string& str) {
    if (str.back() == '\n')
        str.pop_back();
}

void RemoteSyncCallRequest(ModuleMessage& msg) {
    // logger.debug("*** Remote call request received.");
    // logger.debug("*** Current Module:{}", LLSE_MODULE_TYPE);

    istringstream sin(msg.getData());

    string funcName, argsList;
    getline(sin, funcName);
    StringTrim(funcName);

    ScriptEngine* engine = nullptr;
    try {
        // Real Call
        ExportedFuncData* funcData = &(globalShareData->exportedFuncs).at(funcName);
        engine = funcData->engine;
        EngineScope enter(engine);

        string arg;
        vector<Local<Value>> argsVector;
        while (getline(sin, arg)) {
            StringTrim(arg);
            argsVector.push_back(JsonToValue(arg));
        }

        // logger.debug("*** Before remote call execute");
        Local<Value> result = funcData->func.get().call({}, argsVector);
        // logger.debug("*** After remote call execute");

        // Feedback
        // logger.debug("*** Before remote call result return");
        if (!msg.sendResult(ModuleMessage::MessageType::RemoteSyncCallReturn, ValueToJson(result))) {
            logger.error("Fail to post remote call result return!");
        }
        // logger.debug("*** After remote call result return");
    } catch (const Exception& e) {
        logger.error("Error occurred in remote engine!\n");
        if (engine) {
            EngineScope enter(engine);
            PrintException(e);
            logger.error("[Error] In Plugin: " + ENGINE_OWN_DATA()->pluginName);
        }

        // Feedback
        if (!msg.sendResult(ModuleMessage::MessageType::RemoteSyncCallReturn, "[null]")) {
            logger.error("Fail to post remote call result return!");
        }
    } catch (const std::out_of_range& e) {
        logger.error(string("Fail to import! Function [") + funcName + "] has not been exported!");

        // Feedback
        if (!msg.sendResult(ModuleMessage::MessageType::RemoteSyncCallReturn, "[null]")) {
            logger.error("Fail to post remote call result return!");
            ;
        }
    } catch (...) {
        logger.error("Error occurred in remote engine!");

        // Feedback
        if (!msg.sendResult(ModuleMessage::MessageType::RemoteSyncCallReturn, "[null]")) {
            logger.error("Fail to post remote call result return!");
            ;
        }
    }
}

void RemoteSyncCallReturn(ModuleMessage& msg) {
    // logger.debug("*** Remote call result message received.");
    // logger.debug("*** Result: {}", msg.getData());
    remoteResultMap[msg.getId()] = msg.getData();
    OperationCount(to_string(msg.getId())).done();
}


//////////////////// Remote Call ////////////////////
#if false
Local<Value> MakeRemoteCall(const string& funcName, const Arguments& args)
{
    auto data = globalShareData->exportedFuncs.find(funcName);
    if (data == globalShareData->exportedFuncs.end())
    {
        logger.error("Fail to import! Function [{}] has not been exported!", funcName);
        return Local<Value>();
    }

    std::vector<std::string> params;
    for (int i = 0; i < args.size(); ++i)
    {
        params.emplace_back(ValueToJson(args[i]));
    }
    return JsonToValue(data->second.callback(std::move(params)));
}

bool LLSEExportFunc(ScriptEngine *engine, const Local<Function> &func, const string &exportName)
{
    ExportedFuncData* funcData = &(globalShareData->exportedFuncs)[exportName];
    if (funcData->engine)
        return false;
    funcData->engine = engine;
    funcData->func = script::Global<Function>(func);
    funcData->fromEngineType = LLSE_MODULE_TYPE;
    funcData->callback = [exportName](std::vector<std::string> params) -> std::string {
        auto data = globalShareData->exportedFuncs.find(exportName);
        if (data == globalShareData->exportedFuncs.end())
        {
            logger.error("Exported function \"{}\" not found", exportName);
            return "";
        }
        auto engine = data->second.engine;
        if (ll::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
            return "";
        EngineScope enter(data->second.engine);
        std::vector<script::Local<Value>> scriptParams;
        for (auto& param : params)
        {
            scriptParams.emplace_back(JsonToValue(param));
        }
        return ValueToJson(data->second.func.get().call({}, scriptParams));
    };
    return true;
}
bool LLSERemoveAllExportedFuncs_Debug(ScriptEngine* engine);
bool LLSERemoveAllExportedFuncs(ScriptEngine* engine)
{
    return LLSERemoveAllExportedFuncs_Debug(engine);
#if 0
    erase_if(globalShareData->exportedFuncs, [&engine](auto& data) {
        return data.second.engine == engine;
    });
    return true;
#endif
}


//////////////////// APIs ////////////////////

Local<Value> LlClass::exportFunc(const Arguments& args)
{
    return exportFunc_Debug(args);
#if 0
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kFunction);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try
    {
        return Boolean::newBoolean(LLSEExportFunc(EngineScope::currentEngine(), args[0].asFunction(), args[1].toStr()));
    }
    CATCH("Fail in LLSEExport!");
#endif
}

Local<Value> LlClass::importFunc(const Arguments &args)
{
    return importFunc_Debug(args);
#if 0
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        string funcName = args[0].toStr();

        //远程调用
        return Function::newFunction([funcName{ funcName }]
        (const Arguments& args)->Local<Value> {
#ifdef DEBUG
            auto startTime = clock();
            auto res = MakeRemoteCall(funcName, args);
            logger.info("MakeRemoteCall time: {}s", (clock() - startTime) / 1000.0);
            return res;
#endif // DEBUG
            return MakeRemoteCall(funcName, args);
        });
    }
    CATCH("Fail in LLSEImport!")
#endif
}
#endif