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
#include <ScheduleAPI.h>
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

ClassDefine<HttpRequestClass> HttpRequestClassBuilder =
    defineClass<HttpRequestClass>("HttpRequest")
        .instanceFunction("getHeader", &HttpRequestClass::getHeader)

        .instanceProperty("headers", &HttpRequestClass::getHeaders)
        .instanceProperty("method", &HttpRequestClass::getMethod)
        .instanceProperty("body", &HttpRequestClass::getBody)
        .instanceProperty("path", &HttpRequestClass::getPath)
        .instanceProperty("params", &HttpRequestClass::getParams)
        .instanceProperty("query", &HttpRequestClass::getParams)
        .instanceProperty("remoteAddr", &HttpRequestClass::getRemoteAddr)
        .instanceProperty("remotePort", &HttpRequestClass::getRemotePort)
        .instanceProperty("version", &HttpRequestClass::getVersion)
        .instanceProperty("matches", &HttpRequestClass::getRegexMatches)
        .build();

ClassDefine<HttpResponseClass> HttpResponseClassBuilder =
    defineClass<HttpResponseClass>("HttpResponse")
        .instanceFunction("getHeader", &HttpResponseClass::getHeader)
        .instanceFunction("setHeader", &HttpResponseClass::setHeader)

        .instanceProperty("headers", &HttpResponseClass::getHeaders, &HttpResponseClass::setHeaders)
        .instanceProperty("status", &HttpResponseClass::getStatus, &HttpResponseClass::setStatus)
        .instanceProperty("body", &HttpResponseClass::getBody, &HttpResponseClass::setBody)
        .instanceProperty("version", &HttpResponseClass::getVersion, &HttpResponseClass::setVersion)
        .instanceProperty("reason", &HttpResponseClass::getReason, &HttpResponseClass::setReason)
        .instanceProperty("redirect", &HttpResponseClass::getRedirect, &HttpResponseClass::setRedirect)
        .build();

//生成函数
WSClientClass::WSClientClass(const Local<Object>& scriptObj)
    : ScriptClass(scriptObj)
    , ws(std::make_shared<WebSocketClient>())
{
    initListeners();
}

WSClientClass::WSClientClass()
    : ScriptClass(ScriptClass::ConstructFromCpp<WSClientClass>{})
    , ws(std::make_shared<WebSocketClient>())
{
    initListeners();
}

void WSClientClass::initListeners()
{
    ws->OnTextReceived([nowList{&listeners[int(WSClientEvents::onTextReceived)]}](WebSocketClient& client, string msg) {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                if (!EngineManager::isValid(listener.engine))
                    return;
                EngineScope enter(listener.engine);
                // dangerous
                NewTimeout(listener.func.get(), {String::newString(msg)}, 1);
            }
    });

    ws->OnBinaryReceived([nowList{&listeners[int(WSClientEvents::onBinaryReceived)]}](WebSocketClient& client, vector<uint8_t> data) {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                if (!EngineManager::isValid(listener.engine))
                    return;
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), {ByteBuffer::newByteBuffer(data.data(), data.size())}, 1);
            }
    });

    ws->OnError([nowList{&listeners[int(WSClientEvents::onError)]}](WebSocketClient& client, string msg) {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                if (!EngineManager::isValid(listener.engine))
                    return;
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), {String::newString(msg)}, 1);
            }
    });

    ws->OnLostConnection([nowList{&listeners[int(WSClientEvents::onLostConnection)]}](WebSocketClient& client, int code) {
        if (!nowList->empty())
            for (auto& listener : *nowList)
            {
                if (!EngineManager::isValid(listener.engine))
                    return;
                EngineScope enter(listener.engine);
                NewTimeout(listener.func.get(), {Number::newNumber(code)}, 1);
            }
    });
}

void WSClientClass::initListeners_s()
{
    ws->OnTextReceived([nowList{&listeners[int(WSClientEvents::onTextReceived)]}, engine = EngineScope::currentEngine()](WebSocketClient& client, string msg) {
        if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
            return;
        Schedule::nextTick([nowList, engine, msg = std::move(msg)]() {
            if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
                return;
            EngineScope enter(engine);
            if (!nowList->empty())
                for (auto& listener : *nowList)
                {
                    listener.func.get().call({}, {String::newString(msg)});
                }
        });
    });

    ws->OnBinaryReceived([nowList{&listeners[int(WSClientEvents::onBinaryReceived)]}, engine = EngineScope::currentEngine()](WebSocketClient& client, vector<uint8_t> data) {
        if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
            return;
        Schedule::nextTick([nowList, engine, data = std::move(data)]() mutable {
            if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
                return;
            EngineScope enter(engine);
            if (!nowList->empty())
                for (auto& listener : *nowList)
                {
                    listener.func.get().call({}, {ByteBuffer::newByteBuffer(data.data(), data.size())});
                }
        });
    });

    ws->OnError([nowList{&listeners[int(WSClientEvents::onError)]}, engine = EngineScope::currentEngine()](WebSocketClient& client, string msg) {
        if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
            return;
        Schedule::nextTick([nowList, engine, msg = std::move(msg)]() {
            if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
                return;
            EngineScope enter(engine);
            if (!nowList->empty())
                for (auto& listener : *nowList)
                {
                    listener.func.get().call({}, {String::newString(msg)});
                }
        });
    });

    ws->OnLostConnection([nowList{&listeners[int(WSClientEvents::onLostConnection)]}, engine = EngineScope::currentEngine()](WebSocketClient& client, int code) {
        if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
            return;
        Schedule::nextTick([nowList, engine, code]() {
            if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
                return;
            EngineScope enter(engine);
            if (!nowList->empty())
                for (auto& listener : *nowList)
                {
                    listener.func.get().call({}, {Number::newNumber(code)});
                }
        });
    });
}

void WSClientClass::clearListeners()
{
    ws->OnTextReceived([](WebSocketClient&, std::string) {});
    ws->OnBinaryReceived([](WebSocketClient&, std::vector<uint8_t>) {});
    ws->OnError([](WebSocketClient&, std::string) {});
    ws->OnLostConnection([](WebSocketClient&, int) {});
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
        LOG_ERROR_WITH_SCRIPT_INFO("WSClient Event \"" + event + "\" No Found!\n");
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
            [ws{this->ws}, target, callback{std::move(callbackFunc)}, engine{EngineScope::currentEngine()}, pluginName{ENGINE_OWN_DATA()->pluginName}]() mutable {
#ifdef DEBUG
                SetThreadDescription(GetCurrentThread(), L"LLSE Connect WebSocket");
#endif // DEBUG
                _set_se_translator(seh_exception::TranslateSEHtoCE);
                try
                {
                    bool result = false;
                    try
                    {
                        ws->Connect(target);
                        result = true;
                    }
                    catch (const std::runtime_error& e)
                    {
                        result = false;
                    }
                    if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
                        return;
                    EngineScope enter(engine);
                    // fix get on empty Global
                    if (callback.isEmpty())
                        return;
                    NewTimeout(callback.get(), {Boolean::newBoolean(result)}, 0);
                }
                catch (const seh_exception& e)
                {
                    logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
                    logger.error("In WSClientClass::connectAsync");
                    logger.error("In Plugin: " + pluginName);
                }
                catch (...)
                {
                    logger.error("WSClientClass::connectAsync Failed!");
                    logger.error("Uncaught Exception Detected!");
                    logger.error("In Plugin: " + pluginName);
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
            LOG_WRONG_ARG_TYPE();
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

Local<Object> Headers2Object(const Headers& headers) 
{
    auto obj = Object::newObject();
    for (auto& header : headers)
    {
        obj.set(header.first, Array::newArray());
    }
    for (auto& header : headers)
    {
        auto arr = obj.get(header.first).asArray();
        arr.add(header.second);
        obj.set(header.first, arr);
    }
    return obj;
}

Local<Object> Params2Object(const Params& params) 
{
    auto obj = Object::newObject();
    for (auto& param : params)
    {
        if (paras.count(param.first) == 1)
            obj.set(param.first, param.second);
        else {
            if (!obj.has(param.first)) {
                obj.set(param.first, Array::newArray());
            }
            auto arr = obj.get(param.first).asArray();
            arr.add(param.second);
            obj.set(param.first, arr);
        }
    }
    return obj;
}

HttpRequestClass::HttpRequestClass(const Local<Object>& scriptObj, const HttpRequest& req)
    : ScriptClass(scriptObj)
    , req(new Request(req))
{
}
HttpRequestClass::HttpRequestClass(const HttpRequest& req)
    : ScriptClass(ScriptClass::ConstructFromCpp<HttpRequestClass>{})
    , req(new Request(req))
{
}

std::shared_ptr<HttpRequest> HttpRequestClass::get()
{
    return req;
}

Local<Value> HttpRequestClass::getHeaders()
{
    try {
        return Headers2Array(req->headers);
    }
    CATCH("Fail in getHeaders!");
}

Local<Value> HttpRequestClass::getHeader(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto key = args[0].toStr();
        if (req->headers.count(key) == 0)
            return Array::newArray();
        auto value = req->headers.equal_range(key);
        auto arr = Array::newArray();
        for (auto it = value.first; it != value.second; ++it)
        {
            arr.push(it->second);
        }
        return arr;
    }
    CATCH("Fail in getHeader!");
}

Local<Value> HttpRequestClass::getBody()
{
    try {
        return String::newString(req->body);
    }
    CATCH("Fail in getBody!");
}

Local<Value> HttpRequestClass::getMethod()
{
    try {
        return String::newString(req->method);
    }
    CATCH("Fail in getMethod!");
}

Local<Value> HttpRequestClass::getPath()
{
    try {
        return String::newString(req->path);
    }
    CATCH("Fail in getPath!");
}

Local<Value> HttpRequestClass::getParams()
{
    try {
        return Params2Object(req->params);
    }
    CATCH("Fail in getParams!");
}

Local<Value> HttpRequestClass::getRemoteAddr()
{
    try {
        return String::newString(req->remote_addr);
    }
    CATCH("Fail in getRemoteAddr!");
}

Local<Value> HttpRequestClass::getRemotePort()
{
    try {
        return Number::newNumber(req->remote_port);
    }
    CATCH("Fail in getRemotePort!");
}


Local<Value> HttpRequestClass::getVersion()
{
    try {
        return String::newString(req->version);
    }
    CATCH("Fail in getVersion!");
}

Local<Value> HttpRequestClass::getRegexMatches()
{
    try {
        auto smt = req->matches;
        auto arr = Array::newArray();
        for (auto& match : smt)
        {
            arr.push(String::newString(match));
        }
        return arr;
    }
    CATCH("Fail in getRegexMatches!");
}

HttpResponseClass::HttpResponseClass(const Local<Object>& scriptObj, const HttpResponse& resp)
    : ScriptClass(scriptObj)
    , resp(new Response(resp))
{
}
HttpResponseClass::HttpResponseClass(const HttpResponse& resp)
    : ScriptClass(ScriptClass::ConstructFromCpp<HttpResponseClass>{})
    , resp(new Response(resp))
{
}

std::shared_ptr<HttpResponse> HttpResponseClass::get()
{
    return resp;
}

Local<Value> HttpResponseClass::setHeader(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try {
        auto key = args[0].toStr();
        auto value = args[1].toStr();
        resp->headers.insert(make_pair(key, value));
        return this->getScriptObject(); // return self
    }
    CATCH("Fail in setHeader!");
}

Local<Value> HttpResponseClass::getHeader(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto key = args[0].toStr();
        if (resp->headers.count(key) == 0)
            return Array::newArray();
        auto value = resp->headers.equal_range(key);
        auto arr = Array::newArray();
        for (auto it = value.first; it != value.second; ++it)
        {
            arr.push(it->second);
        }
        return arr;
    }
    CATCH("Fail in getHeader!");
}

void HttpResponseClass::setHeaders(const Local<Value>& headers)
{
    CHECK_ARG_TYPE(headers, ValueKind::kObject);

    try {
        auto keys = headers.asObject().getKeys();
        for (auto& key : keys)
        {
            auto key_str = key.toString();
            auto value = headers.asObject().get(key);
            if (value.isArray()) {
                for (size_t i = 0ULL; i < value.asArray().size(); ++i)
                {
                    resp->headers.insert(make_pair(key_str, ValueToString(value.asArray().get(i))));
                }
                return;
            }
            auto val_str = ValueToString(value);
            resp->headers.insert(make_pair(key_str, val_str));
        }
    }
    CATCH("Fail in setHeaders!");
}

void HttpResponseClass::setStatus(const Local<Value>& status) 
{
    CHECK_ARG_TYPE(status, ValueKind::kNumber);

    try {
        resp->status = status.toInt();
    }
    CATCH("Fail in setStatus!");
}

void HttpResponseClass::setBody(const Local<Value>& body)
{
    CHECK_ARG_TYPE(body, ValueKind::kString);

    try {
        resp->body = body.toStr();
    }
    CATCH("Fail in setBody!");
}

void HttpResponseClass::setReason(const Local<Value>& reason)
{
    CHECK_ARG_TYPE(reason, ValueKind::kString);

    try {
        resp->reason = reason.toStr();
    }
    CATCH("Fail in setReason!");
}

void HttpResponseClass::setVersion(const Local<Value>& version)
{
    CHECK_ARG_TYPE(version, ValueKind::kString);

    try {
        resp->version = version.toStr();
    }
    CATCH("Fail in setVersion!");
}

void HttpResponseClass::setRedirect(const Local<Value>& redirect)
{
    CHECK_ARG_TYPE(redirect, ValueKind::kString);

    try {
        resp->location = redirect.toStr();
    }
    CATCH("Fail in setRedirect!");
}

Local<Value> HttpResponseClass::getHeaders()
{
    try {
        return Headers2Array(resp->headers);
    }
    CATCH("Fail in getHeaders!");
}

Local<Value> HttpResponseClass::getStatus()
{
    try {
        return Number::newNumber(resp->status);
    }
    CATCH("Fail in getStatus!");
}

Local<Value> HttpResponseClass::getBody()
{
    try {
        return String::newString(resp->body);
    }
    CATCH("Fail in getBody!");
}

Local<Value> HttpResponseClass::getReason()
{
    try {
        return String::newString(resp->reason);
    }
    CATCH("Fail in getReason!");
}

Local<Value> HttpResponseClass::getVersion()
{
    try {
        return String::newString(resp->version);
    }
    CATCH("Fail in getVersion!");
}

Local<Value> HttpResponseClass::getRedirect()
{
    try {
        return String::newString(resp->location);
    }
    CATCH("Fail in getRedirect!");
}


//////////////////// APIs ////////////////////

Local<Value> NetworkClass::httpGet(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    if (args.size() > 2) {
        CHECK_ARG_TYPE(args[1], ValueKind::kObject);
        CHECK_ARG_TYPE(args[2], ValueKind::kFunction);
    }
    else
    {
        CHECK_ARG_TYPE(args[1], ValueKind::kFunction);
    }

    try
    {
        string target = args[0].toStr();
        RecordOperation(ENGINE_OWN_DATA()->pluginName, "HttpGet", target);
        script::Global<Function> callbackFunc{args[args.size()-1].asFunction()};

        auto lambda = [callback{std::move(callbackFunc)}, engine{EngineScope::currentEngine()}](int status, string body) {
            if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
                return;

            EngineScope scope(engine);
            try
            {
                NewTimeout(callback.get(), {Number::newNumber(status), String::newString(body)}, 1);
                // callback.get().call({}, {Number::newNumber(status), String::newString(body)});
            }
            CATCH_IN_CALLBACK("HttpGet")
        };
        if (args.size() > 2)
        {
            httplib::Headers maps;
            auto obj = args[1].asObject();
            auto keys = obj.getKeyNames();
            if (keys.size() > 0)
            {
                for (size_t i = 0; i < keys.size(); i++)
                {
                    maps.insert({keys[i], obj.get(keys[i]).toStr()});
                }
            }
            return Boolean::newBoolean(HttpGet(target, maps, lambda));
        }
        return Boolean::newBoolean(HttpGet(target, lambda));
    }
    CATCH("Fail in HttpGet");
}

Local<Value> NetworkClass::httpPost(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 4);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[2], ValueKind::kString);
    if (args.size() > 4)
    {
        CHECK_ARG_TYPE(args[1], ValueKind::kObject);
        CHECK_ARG_TYPE(args[3], ValueKind::kString);
        CHECK_ARG_TYPE(args[4], ValueKind::kFunction);
    }
    else
    {
        CHECK_ARG_TYPE(args[1], ValueKind::kString);
        CHECK_ARG_TYPE(args[3], ValueKind::kFunction);
    }
    
    
    try
    {
        string target = args[0].toStr();
        RecordOperation(ENGINE_OWN_DATA()->pluginName, "HttpPost", target);
        script::Global<Function> callbackFunc{args[args.size() - 1].asFunction()};

        auto lambda = [callback{std::move(callbackFunc)}, engine{EngineScope::currentEngine()}](int status, string body) {
            if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
                return;

            EngineScope scope(engine);
            try
            {
                NewTimeout(callback.get(), {Number::newNumber(status), String::newString(body)}, 1);
                // callback.get().call({}, {Number::newNumber(status), String::newString(body)});
            }
            CATCH_IN_CALLBACK("HttpPost")
        };
        if (args.size() > 4)
        {
            httplib::Headers maps;
            auto obj = args[1].asObject();
            auto keys = obj.getKeyNames();
            if (keys.size() > 0)
            {
                for (size_t i = 0; i < keys.size(); i++)
                {
                    maps.insert({keys[i], obj.get(keys[i]).toStr()});
                }
            }
            
            return Boolean::newBoolean(HttpPost(target, maps ,args[2].toStr(), args[3].toStr(), lambda));
        }
        return Boolean::newBoolean(HttpPost(target, args[1].toStr(), args[2].toStr(), lambda));
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