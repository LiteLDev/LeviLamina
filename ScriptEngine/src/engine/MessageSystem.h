#pragma once
#include <ScriptX/ScriptX.h>
#include <windows.h>
#include "api/APIHelp.h"
#include "engine/OperationCount.h"
#include <string>
#include <map>
#include <vector>
using std::string;

//////////////////// Class ////////////////////

class ModuleMessageResult {
private:
    int msgId;
    OperationCount resultCount;
    std::vector<ScriptEngine*> engineList;

    friend class ModuleMessage;
    ModuleMessageResult(int messageId, std::vector<ScriptEngine*> engineList);

public:
    ModuleMessageResult()
    : resultCount("") {
    }
    ~ModuleMessageResult();
    operator bool();

    int getSentCount() {
        return engineList.size();
    }
    int getMsgId() {
        return msgId;
    }

    bool waitForAllResults(int maxWaitTime = -1);
    bool waitForOneResult(int maxWaitTime = -1);
    bool waitForResultCount(int targetCount, int maxWaitTime = -1);
    bool cancel();
};

class ModuleMessage {
private:
    static int getNextMessageId();

public:
    enum class MessageType : UINT {
        MODULE_MESSAGE_REQUEST,
        RequireBroadcast,
        RemoteSyncCallRequest,
        //RemoteLoadRequest,
        MODULE_MESSAGE_RETURN,
        RemoteSyncCallReturn,
        //RemoteLoadReturn,
    };
    struct MessageHeader {
        MessageHeader() {
            id = getNextMessageId();
            fromEngine = EngineScope::currentEngine();
            fromEngineModuleType = LLSE_MODULE_TYPE;
        }
        int id;
        ScriptEngine* fromEngine;
        string fromEngineModuleType;
    };

    MessageType type;
    MessageHeader* header;
    std::string* data;

    unsigned getId() {
        return header->id;
    }
    MessageType getType() {
        return type;
    }
    std::string getData() {
        return *data;
    }

    static ModuleMessageResult broadcastLocal(MessageType type, std::string data, int64_t delay = 0);
    static ModuleMessageResult broadcastGlobal(MessageType type, std::string data, int64_t delay = 0);
    static ModuleMessageResult broadcastTo(std::string toModuleType, MessageType type, std::string data, int64_t delay = 0);
    static ModuleMessageResult sendTo(ScriptEngine* engine, MessageType type, std::string data, int64_t delay = 0);
    static ModuleMessageResult sendToRandom(std::string toModuleType, MessageType type, std::string data, int64_t delay = 0);

    bool sendResult(MessageType type, std::string data, int64_t delay = 0);

    static void handle(script::utils::Message& engineMsg);
    static void cleanup(script::utils::Message& engineMsg);
};

///////////////////////////// Funcs /////////////////////////////
void InitMessageSystem();
void MessageSystemLoopOnce();
bool EndMessageSystemLoop();