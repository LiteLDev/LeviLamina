#include <API/APIHelp.h>
#include <API/LxlAPI.h>
#include <Engine/RemoteCall.h>
#include <Engine/GlobalShareData.h>
#include <Engine/MessageSystem.h>
#include <Utils/STLHelper.h>
#include <sstream>
#include <string>
#include <map>
#include <process.h>
#include <Configs.h>

using namespace std;

unordered_map<int, string> remoteResultMap;

//////////////////// 消息循环 ////////////////////

void inline StringTrim(string& str)
{
    if (str.back() == '\n')
        str.pop_back();
}

void RemoteSyncCallRequest(ModuleMessage& msg)
{
    logger.debug("*** Remote call request received.");
    logger.debug("*** Current Module:{}", LLSE_MODULE_TYPE);

    istringstream sin(msg.getData());

    string funcName, argsList;
    getline(sin, funcName);
    StringTrim(funcName);

    ScriptEngine* engine = nullptr;
    try
    {
        //Real Call
        ExportedFuncData* funcData = &(globalShareData->exportedFuncs).at(funcName);
        engine = funcData->engine;
        EngineScope enter(engine);

        string arg;
        vector<Local<Value>> argsVector;
        while (getline(sin, arg))
        {
            StringTrim(arg);
            argsVector.push_back(JsonToValue(arg));
        }

        logger.debug("*** Before remote call execute");
        Local<Value> result = funcData->func.get().call({}, argsVector);
        logger.debug("*** After remote call execute");
        
        //Feedback
        logger.debug("*** Before remote call result return");
        if (!msg.sendResult(ModuleMessage::MessageType::RemoteSyncCallReturn, ValueToJson(result)))
        {
            logger.error("Fail to post remote call result return!");
        }
        logger.debug("*** After remote call result return");
    }
    catch (const Exception& e)
    {
        logger.error("Error occurred in remote engine!\n");
        if (engine)
        {
            EngineScope enter(engine);
            PrintException(e);
            logger.error("[Error] In Plugin: " + ENGINE_OWN_DATA()->pluginName);
        }
        
        //Feedback
        if (!msg.sendResult(ModuleMessage::MessageType::RemoteSyncCallReturn, "[null]"))
        {
            logger.error("Fail to post remote call result return!");
        }
    }
    catch (...)
    {
        logger.error("Error occurred in remote engine!");

        //Feedback
        if (!msg.sendResult(ModuleMessage::MessageType::RemoteSyncCallReturn, "[null]"))
        {
            logger.error("Fail to post remote call result return!");;
        }
    }
}

void RemoteSyncCallReturn(ModuleMessage& msg)
{
    logger.debug("*** Remote call result message received.");
    logger.debug("*** Result: {}", msg.getData());
    remoteResultMap[msg.getId()] = msg.getData();
    OperationCount(to_string(msg.getId())).done();
}


//////////////////// Remote Call ////////////////////

Local<Value> MakeRemoteCall(const string& funcName, const Arguments& args)
{
    //Remote Call
    logger.debug("*** Remote Call begin");

    ExportedFuncData* data;
    try {
        data = &(globalShareData->exportedFuncs).at(funcName);
    }
    catch (const std::out_of_range& e)
    {
        logger.error(string("Fail to import! Function [") + funcName + "] has not been exported!");
        return Local<Value>();
    }

    ostringstream sout;
    sout << funcName;
    for (int i = 0; i < args.size(); ++i)
        sout << "\n" << ValueToJson(args[i]);

    logger.debug("*** Before remote call request send");
    auto sendResult = ModuleMessage::sendTo(data->engine, ModuleMessage::MessageType::RemoteSyncCallRequest, sout.str());
    if (!sendResult)
    {
        logger.error("Fail to send remote load request!");
        return Local<Value>();
    }
    logger.debug("*** After remote call request send");

    logger.debug("*** Before wait for remote call result");
    auto returnResult = sendResult.waitForOneResult(LLSE_MAXWAIT_REMOTE_CALL);
    if (!returnResult)
    {
        logger.error(tr("remoteCall.timeout.fail"));
        return Local<Value>();
    }
    logger.debug("*** After wait for remote call result");

    int msgId = sendResult.getMsgId();
    Local<Value> res = JsonToValue(remoteResultMap[msgId]);
    remoteResultMap.erase(msgId);
    return res;
}

bool LxlExportFunc(ScriptEngine *engine, const Local<Function> &func, const string &exportName)
{
    ExportedFuncData* funcData = &(globalShareData->exportedFuncs)[exportName];
    funcData->engine = engine;
    funcData->func = script::Global<Function>(func);
    funcData->fromEngineType = LLSE_MODULE_TYPE;
    return true;
}

bool LxlRemoveAllExportedFuncs(ScriptEngine* engine)
{
    erase_if(globalShareData->exportedFuncs, [&engine](auto& data) {
        return data.second.engine == engine;
    });
    return true;
}


//////////////////// APIs ////////////////////

Local<Value> LxlClass::exportFunc(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kFunction);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try {
        return Boolean::newBoolean(LxlExportFunc(EngineScope::currentEngine(), args[0].asFunction(), args[1].toStr()));
    }
    CATCH("Fail in LxlExport!");
}

Local<Value> LxlClass::importFunc(const Arguments &args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        string funcName = args[0].toStr();

        //远程调用
        return Function::newFunction([funcName{ funcName }]
        (const Arguments& args)->Local<Value>
        {
            return MakeRemoteCall(funcName, args);
        });
    }
    CATCH("Fail in LxlImport!")
}