#include "APIHelp.h"
#include <Utils/NetworkHelper.h>
#include <Engine/TimeTaskSystem.h>
#include <Engine/EngineManager.h>
#include <httplib/httplib.h>
#include <LightWebSocketClient/include/WebSocketClient.h>
#include "NetworkAPI.h"
#include <SafeGuardRecord.h>
#include <string>
#include <vector>
using namespace std;

using namespace cyanray;

//////////////////// Classes ////////////////////

ClassDefine<void> NetworkClassBuilder =
    defineClass("network")
        .function("httpGet", &NetworkClass::httpGet)
        .function("httpPost", &NetworkClass::httpPost)
        .function("httpGetSync", &NetworkClass::httpGetSync)

        //For compatibility
        .function("newWebSocket", &NetworkClass::newWebSocket)
        .build();

ClassDefine<WSClientClass> WSClientClassBuilder =
    defineClass<WSClientClass>("WSClient")
        .constructor(&WSClientClass::constructor)
        .instanceProperty("status", &WSClientClass::getStatus)
        .instanceFunction("connect", &WSClientClass::connect)
        .instanceFunction("connectAsync", &WSClientClass::connectAsync)
        .instanceFunction("send", &WSClientClass::send)
        .instanceFunction("listen", &WSClientClass::listen)
        .instanceFunction("close", &WSClientClass::close)
        .instanceFunction("shutdown", &WSClientClass::shutdown)
        .instanceFunction("errorCode", &WSClientClass::errorCode)

        .property("Open", [] { return Number::newNumber((int)WebSocketClient::Status::Open); })
        .property("Closing", [] { return Number::newNumber((int)WebSocketClient::Status::Closing); })
        .property("Closed", [] { return Number::newNumber((int)WebSocketClient::Status::Closed); })
        .build();


//生成函数
WSClientClass::WSClientClass(const Local<Object>& scriptObj)
    : ScriptClass(scriptObj)
    , ws(std::make_shared<WebSocketClient>())
{
    ws->OnTextReceived([nowList{ &listeners[int(WSClientEvents::onTextReceived)] }]
    (WebSocketClient& client, string msg)
    {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), { String::newString(msg) }, 1);
            }
    });

    ws->OnBinaryReceived([nowList{ &listeners[int(WSClientEvents::onBinaryReceived)] }]
    (WebSocketClient& client, vector<uint8_t> data)
    {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), { ByteBuffer::newByteBuffer(data.data(),data.size()) }, 1);
            }
    });

    ws->OnError([nowList{ &listeners[int(WSClientEvents::onError)] }]
    (WebSocketClient& client, string msg)
    {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        try
        {
            if (!nowList->empty())
                for (auto& listener : *nowList)
                {
                    EngineScope enter(listener.engine);
                    NewTimeout(listener.func.get(), {String::newString(msg)}, 1);
                }
        }
        CATCH_C("WebSocket onError callback");
        return nullptr;
    });

    ws->OnLostConnection([nowList{ &listeners[int(WSClientEvents::onLostConnection)] }]
    (WebSocketClient& client, int code)
    {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), { Number::newNumber(code) }, 1);
            }
    });
}

WSClientClass::WSClientClass()
    : ScriptClass(ScriptClass::ConstructFromCpp<WSClientClass>{})
    , ws(std::make_shared<WebSocketClient>())
{
    ws->OnTextReceived([ nowList {&listeners[int(WSClientEvents::onTextReceived)]} ]
        (WebSocketClient& client, string msg)
    {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), { String::newString(msg) }, 1);
            }
    });

    ws->OnBinaryReceived([nowList{ &listeners[int(WSClientEvents::onBinaryReceived)] }]
        (WebSocketClient& client, vector<uint8_t> data)
    {
        if(!nowList->empty())
            for (auto& listener : *nowList)
            {
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), { ByteBuffer::newByteBuffer(data.data(),data.size()) }, 1);
            }
    });

    ws->OnError([nowList{ &listeners[int(WSClientEvents::onError)] }]
        (WebSocketClient& client, string msg) {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        try
        {
            if (!nowList->empty())
                for (auto& listener : *nowList)
                {
                    EngineScope enter(listener.engine);
                    NewTimeout(listener.func.get(), {String::newString(msg)}, 1);
                }
        }
        CATCH_C("WebSocket onError callback");
        return nullptr;
    });

    ws->OnLostConnection([nowList{ &listeners[int(WSClientEvents::onLostConnection)] }]
        (WebSocketClient& client, int code)
    {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), { Number::newNumber(code) }, 1);
            }
    });
}

WSClientClass* WSClientClass::constructor(const Arguments& args)
{
    return new WSClientClass(args.thiz());
}

//成员函数
void WSClientClass::addListener(const string& event, Local<Function> func)
{
    if (event == "onTextReceived")
        listeners[(int)WSClientEvents::onTextReceived].push_back({ EngineScope::currentEngine(), script::Global<Function>(func) });
    else if (event == "onBinaryReceived")
        listeners[(int)WSClientEvents::onBinaryReceived].push_back({ EngineScope::currentEngine(), script::Global<Function>(func) });
    else if (event == "onError")
        listeners[(int)WSClientEvents::onError].push_back({ EngineScope::currentEngine(), script::Global<Function>(func) });
    else if (event == "onLostConnection")
        listeners[(int)WSClientEvents::onLostConnection].push_back({ EngineScope::currentEngine(), script::Global<Function>(func) });
    else
    {
        logger.error("WSClient Event \"" + event + "\" No Found!\n");
    }  
}

Local<Value> WSClientClass::getStatus()
{
    try {
        return Number::newNumber((int)ws->GetStatus());
    }
    catch (const std::runtime_error& e)
    {
        return Local<Value>();
    }
    CATCH("Fail in getStatus!");
}

Local<Value> WSClientClass::connect(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    //if (args.size() > 1 && args[1].isFunction())
    //    return connectAsync(args);
    try {

        string target = args[0].toStr();
        RecordOperation(ENGINE_OWN_DATA()->pluginName, "ConnectToWebsocketServer", target);
        ws->Connect(target);
        return Boolean::newBoolean(true);
    }
    catch (const std::runtime_error& e)
    {
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in connect!");
}

// 异步连接ws客户端
Local<Value> WSClientClass::connectAsync(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kFunction);

    try
    {
        string target = args[0].toStr();
        RecordOperation(ENGINE_OWN_DATA()->pluginName, "ConnectToWebsocketServer", target);

        script::Global<Function> callbackFunc{args[1].asFunction()};
        thread(
            [ws{this->ws}, target, callback{std::move(callbackFunc)}, engine{EngineScope::currentEngine()}]() {
                _set_se_translator(seh_exception::TranslateSEHtoCE);
                try
                {
                    ws->Connect(target);
                    if (!EngineManager::isValid(engine) || engine->isDestroying() || LL::isServerStopping())
                        return;
                    EngineScope enter(engine);
                    NewTimeout(callback.get(), {Boolean::newBoolean(true)}, 0);
                }
                catch (const std::runtime_error& e)
                {
                    if (!EngineManager::isValid(engine) || engine->isDestroying() || LL::isServerStopping())
                        return;
                    EngineScope enter(engine);
                    NewTimeout(callback.get(), {Boolean::newBoolean(false)}, 0);
                }
                catch (const seh_exception& e)
                {
                    logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
                    logger.error("In WSClientClass::connectAsync");
                }
                catch (...)
                {
                    logger.error("WSClientClass::connectAsync Failed!");
                    logger.error("Uncaught Exception Detected!");
                }
            })
            .detach();
        return Boolean::newBoolean(true);
    }
    catch (const std::runtime_error& e)
    {
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in connectAsync!");
}

Local<Value> WSClientClass::send(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        if (args[0].isString())
            ws->SendText(args[0].toStr());
        else if (args[0].isByteBuffer())
            ws->SendBinary((char*)args[0].asByteBuffer().getRawBytes(), args[0].asByteBuffer().byteLength());
        else
        {
            logger.error("Wrong type of argument in WSClientSend!");
            return Local<Value>();
        }
        return Boolean::newBoolean(true);
    }
    catch (const std::runtime_error& e)
    {
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in send!");
}

Local<Value> WSClientClass::listen(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kFunction);

    try {
        addListener(args[0].toStr(), args[1].asFunction());
        return Boolean::newBoolean(true);
    }
    catch (const std::runtime_error& e)
    {
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in listen!");
}

Local<Value> WSClientClass::close(const Arguments& args)
{
    try {
        ws->Close();
        return Boolean::newBoolean(true);
    }
    catch (const std::runtime_error& e)
    {
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in close!");
}

Local<Value> WSClientClass::shutdown(const Arguments& args)
{
    try {
        ws->Shutdown();
        return Boolean::newBoolean(true);
    }
    catch (const std::runtime_error& e)
    {
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in shutdown!");
}

Local<Value> WSClientClass::errorCode(const Arguments& args)
{
    try {
        return Number::newNumber(WSAGetLastError());
    }
    catch (const std::runtime_error& e)
    {
        return Local<Value>();
    }
    CATCH("Fail in errorCode!");
}


//////////////////// APIs ////////////////////

Local<Value> NetworkClass::httpGet(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kFunction);

    try
    {
        string target = args[0].toStr();
        RecordOperation(ENGINE_OWN_DATA()->pluginName, "HttpGet", target);

        script::Global<Function> callbackFunc{ args[1].asFunction() };

        return Boolean::newBoolean(HttpGet(target,
            [callback{ std::move(callbackFunc) }, engine{ EngineScope::currentEngine() }]
            (int status, string body)
        {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;

            EngineScope scope(engine);
            try
            {
                NewTimeout(callback.get(), { Number::newNumber(status), String::newString(body) }, 1);
            }
            catch (const Exception& e)
            {
                logger.error("HttpGet Callback Failed!");
                logger.error("[Error] In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                PrintException(e);
            }
        }));
    }
    CATCH("Fail in HttpGet");
}

Local<Value> NetworkClass::httpPost(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 4);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kString);
    CHECK_ARG_TYPE(args[3], ValueKind::kFunction);

    try
    {
        string target = args[0].toStr();
        RecordOperation(ENGINE_OWN_DATA()->pluginName, "HttpPost", target);

        script::Global<Function> callbackFunc{ args[3].asFunction() };

        return Boolean::newBoolean(HttpPost(target, args[1].toStr(), args[2].toStr(),
            [callback{ std::move(callbackFunc) }, engine{ EngineScope::currentEngine() }]
            (int status, string data)
        {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;

            EngineScope scope(engine);
            try
            {
                NewTimeout(callback.get(), { Number::newNumber(status), String::newString(data) }, 1);
            }
            catch (const Exception& e)
            {
                logger.error("HttpPost Callback Failed!");
                logger.error("[Error] In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                PrintException(e);
            }
        }));
    }
    CATCH("Fail in HttpPost");
}

Local<Value> NetworkClass::httpGetSync(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        string target = args[0].toStr();
        RecordOperation(ENGINE_OWN_DATA()->pluginName, "HttpGetSync", target);

        int status;
        string result;
        HttpGetSync(target, &status, &result);
        Local<Object> res = Object::newObject();
        res.set("status", status);
        res.set("data", result);
        return res;
    }
    CATCH("Fail in HttpGetSync");
}


//For compatibility
Local<Value> NetworkClass::newWebSocket(const Arguments& args)
{
    auto newp = new WSClientClass();
    return newp->getScriptObject();
}

Local<Object> WSClientClass::newWSClient()
{
    auto newp = new WSClientClass();
    return newp->getScriptObject();
}