#pragma once
#include "APIHelp.h"

#include <list>
#include <third-party/LightWebSocketClient/include/WebSocketClient.h>
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
    ~WSClientClass() { ws->Shutdown(); }
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