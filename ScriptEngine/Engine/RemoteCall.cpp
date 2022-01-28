#include <API/APIHelp.h>
#include <API/LxlAPI.h>
#include <Engine/RemoteCall.h>
#include <Engine/GlobalShareData.h>
#include <Engine/MessageSystem.h>
#include <sstream>
#include <string>
#include <map>
#include <process.h>
#include <Configs.h>

using namespace std;

unordered_map<int, string> remoteResultMap;

//////////////////// 消息循环 ////////////////////

void RemoteCallCallback(ModuleMessage& msg)
{
    istringstream sin(msg.getData());

    int backId;
    string funcName, argsList;

    sin >> backId >> funcName;
    sin.get();
    getline(sin, argsList);

    ScriptEngine* engine = nullptr;
    try
    {
        //Real Call
        ExportedFuncData* funcData = &(globalShareData->exportedFuncs).at(funcName);
        engine = funcData->engine;
        EngineScope enter(engine);

        Local<Array> args = JsonToValue(argsList).asArray();
        vector<Local<Value>> argsVector;
        for (int i = 0; i < args.size(); ++i)
            argsVector.push_back(args.get(i));

        Local<Value> result = funcData->func.get().call({}, argsVector);
        string resStr = ValueToJson(result);
        
        //Feedback
        ModuleMessage msgBack(backId, ModuleMessage::MessageType::RemoteCallReturn, resStr);
        if (!msg.sendBack(msgBack))
        {
            logger.error(string("Fail to post remote call result return! Error Code: ") + to_string(GetLastError()));
        }
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
        ModuleMessage msgBack(backId, ModuleMessage::MessageType::RemoteCallReturn, "[null]");
        if (!msg.sendBack(msgBack))
        {
            logger.error(string("Fail to post remote call result return! Error Code: ") + to_string(GetLastError()));
        }
    }
    catch (...)
    {
        logger.warn("Error occurred in remote engine!");

        //Feedback
        ModuleMessage msgBack(backId, ModuleMessage::MessageType::RemoteCallReturn, "[null]");
        if (!msg.sendBack(msgBack))
        {
            logger.error(string("Fail to post remote call result return! Error Code: ") + to_string(GetLastError()));
        }
    }
}

void RemoteCallReturnCallback(ModuleMessage& msg)
{
    remoteResultMap[msg.getId()] = msg.getData();
}


//////////////////// Remote Call ////////////////////

Local<Value> MakeRemoteCall(ExportedFuncData* data, const string& funcName, const string& argsList)
{
    //Remote Call
    logger.debug("Remote Call begin");

    ostringstream sout;
    int backId = ModuleMessage::getNextMessageId();
    sout << backId << "\n" << funcName << "\n" << argsList;

    ModuleMessage msg(ModuleMessage::MessageType::RemoteCall, sout.str());

    if (!ModuleMessage::sendTo(msg, data->fromEngineType))
    {
        logger.error("Fail to send remote load request!");
        return Local<Value>();
    }

    if (!ModuleMessage::waitForMessage(backId, LXL_MAXWAIT_REMOTE_CALL))
    {
        logger.error(tr("remoteCall.timeout.fail"));
        return Local<Value>();
    }

    Local<Value> res = JsonToValue(remoteResultMap[backId]);
    remoteResultMap.erase(backId);
    return res;
}

bool LxlExportFunc(ScriptEngine *engine, const Local<Function> &func, const string &exportName)
{
    ExportedFuncData* funcData = &(globalShareData->exportedFuncs)[exportName];
    funcData->engine = engine;
    funcData->func = script::Global<Function>(func);
    funcData->fromEngineType = LXL_MODULE_TYPE;
    return true;
}

bool LxlRemoveAllExportedFuncs(ScriptEngine* engine)
{
    for (auto exp = globalShareData->exportedFuncs.begin(); exp != globalShareData->exportedFuncs.end(); ++exp)
    {
        if (exp->second.engine == engine)
            globalShareData->exportedFuncs.erase(exp);
    }
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
            Local<Array> argsList = Array::newArray();
            for (int i = 0; i < args.size(); ++i)
                argsList.add(args[i]);

            ExportedFuncData* funcData;
            try {
                funcData = &(globalShareData->exportedFuncs).at(funcName);
            }
            catch (const std::out_of_range& e)
            {
                logger.error(string("Fail to import! Function [") + funcName + "] has not been exported!");
                return Local<Value>();
            }

            Local<Value> res = MakeRemoteCall(funcData, funcName, ValueToJson(argsList));
            if (res.isArray())
                return res.asArray().get(0);
            else
                return res;
        });
    }
    CATCH("Fail in LxlImport!")
}