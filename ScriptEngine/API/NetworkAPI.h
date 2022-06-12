#pragma once
#include "APIHelp.h"

#include <list>
#include <third-party/LightWebSocketClient/include/WebSocketClient.h>
#include <third-party/httplib/httplib.h>
using namespace cyanray;

//////////////////// Types ////////////////////

enum class WSClientEvents : char
{
    onTextReceived = 0, onBinaryReceived, onError, onLostConnection,
    EVENT_COUNT
};

struct ListenerListType
{
    ScriptEngine* engine;
    script::Global<Function> func;
};

enum class HttpRequestType : char
{
    Get = 0, Post, Put, Delete, Options, Patch, Head
};

struct HttpServerCallback
{
    ScriptEngine* engine;
    script::Global<Function> func;
    HttpRequestType type;
    std::string path;
};

//////////////////// Network Static ////////////////////

class NetworkClass
{
public:
    static Local<Value> httpGet(const Arguments& args);
    static Local<Value> httpPost(const Arguments& args);
    static Local<Value> httpGetSync(const Arguments& args);

    //For Compatibility
    static Local<Value> newWebSocket(const Arguments& args);
};
extern ClassDefine<void> NetworkClassBuilder;


//////////////////// Classes ////////////////////

class WSClientClass : public ScriptClass
{
private:
    std::shared_ptr<WebSocketClient> ws;
    std::list<ListenerListType> listeners[(int)WSClientEvents::EVENT_COUNT];
    void addListener(const string& event, Local<Function> func);

public:
    explicit WSClientClass(const Local<Object>& scriptObj);
    explicit WSClientClass();
    void initListeners();
    void initListeners_s();
    void clearListeners();
    ~WSClientClass()
    {
        ws->Shutdown();
    }
    static WSClientClass* constructor(const Arguments& args);

    Local<Value> getStatus();

    Local<Value> connect(const Arguments& args);
    Local<Value> connectAsync(const Arguments& args);
    Local<Value> send(const Arguments& args);
    Local<Value> listen(const Arguments& args);
    Local<Value> close(const Arguments& args);
    Local<Value> shutdown(const Arguments& args);
    Local<Value> errorCode(const Arguments& args);

    //For Compatibility
    static Local<Object> newWSClient();
};
extern ClassDefine<WSClientClass> WSClientClassBuilder;

class HttpServerClass : public ScriptClass
{

protected:
    std::shared_ptr<httplib::Server> svr = nullptr;
    std::multimap<std::string, HttpServerCallback> callbacks;
    HttpServerCallback errorCallback, exceptionCallback, preRoutingCallback, postRoutingCallback;

public:
    HttpServerClass(const Local<Object>& scriptObj);
    HttpServerClass();
    ~HttpServerClass();
    static HttpServerClass* constructor(const Arguments& args);

    Local<Value> onGet(const Arguments& args);
    Local<Value> onPut(const Arguments& args);
    Local<Value> onPost(const Arguments& args);
    Local<Value> onPatch(const Arguments& args);
    Local<Value> onDelete(const Arguments& args);
    Local<Value> onOptions(const Arguments& args);

    Local<Value> onPreRouting(const Arguments& args);
    Local<Value> onPostRouting(const Arguments& args);
    Local<Value> onError(const Arguments& args);
    Local<Value> onException(const Arguments& args);
    
    Local<Value> listen(const Arguments& args);
    Local<Value> stop(const Arguments& args);
    Local<Value> isRunning(const Arguments& args);
};
extern ClassDefine<HttpServerClass> HttpServerClassBuilder;

class HttpRequestClass : public ScriptClass
{
    std::shared_ptr<httplib::Request> req;

public:
    HttpRequestClass(const Local<Object>& scriptObj, const httplib::Request& req = {});
    HttpRequestClass(const httplib::Request& req = {});
    //static HttpRequestClass* constructor(const Arguments& args);
    std::shared_ptr<httplib::Request> get();

    Local<Value> getHeaders();
    Local<Value> getHeader(const Arguments& args);
    Local<Value> getBody();
    Local<Value> getMethod();
    Local<Value> getPath();
    Local<Value> getParams();
    Local<Value> getRemoteAddr();
    Local<Value> getRemotePort();
    Local<Value> getVersion();
    Local<Value> getRegexMatches();
    //Local<Value> getMultiFormData();
};
extern ClassDefine<HttpRequestClass> HttpRequestClassBuilder;

class HttpResponseClass : public ScriptClass
{
    std::shared_ptr<httplib::Response> resp;

public:
    HttpResponseClass(const Local<Object>& scriptObj, const httplib::Response& resp = {});
    HttpResponseClass(const httplib::Response& resp);
    //static HttpResponseClass* constructor(const Arguments& args);
    std::shared_ptr<httplib::Response> get();

    Local<Value> setHeader(const Arguments& args);
    Local<Value> getHeader(const Arguments& args);
    Local<Value> write(const Arguments& args);

    void setHeaders(const Local<Value>& headers);
    void setStatus(const Local<Value>& status);
    void setBody(const Local<Value>& body);
    void setReason(const Local<Value>& reason);
    void setVersion(const Local<Value>& version);

    Local<Value> getHeaders();
    Local<Value> getStatus();
    Local<Value> getBody();
    Local<Value> getReason();
    Local<Value> getVersion();
};
extern ClassDefine<HttpResponseClass> HttpResponseClassBuilder;