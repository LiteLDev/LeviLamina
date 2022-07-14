#include "MessageSystem.h"
#include <API/APIHelp.h>
#include <Tools/Utils.h>
#include <LLAPI.h>
#include <EventAPI.h>
#include "LocalShareData.h"
#include "GlobalShareData.h"
#include <processthreadsapi.h>
#include <process.h>
#include <exception>
using namespace std;
using namespace script;

#define GET_MESSAGE_TYPE(ENGINE) (ModuleMessage::MessageType) ENGINE.data0
#define GET_MESSAGE_HEADER(ENGINE) (ModuleMessage::MessageHeader*)ENGINE.ptr0
#define GET_MESSAGE_DATA_PTR(ENGINE) (std::string*)ENGINE.ptr1
#define MESSAGE_TYPE data0
#define MESSAGE_HEADER ptr0
#define MESSAGE_DATA_PTR ptr1


//////////////////// 消息处理注册 ////////////////////

#include "LoaderHelper.h"
#include "RemoteCall.h"
#include "TimeTaskSystem.h"

void ModuleMessage::handle(utils::Message& engineMsg) // Warning: Execute in another thread
{
    ModuleMessage msg;
    msg.type = GET_MESSAGE_TYPE(engineMsg);
    msg.header = GET_MESSAGE_HEADER(engineMsg);
    msg.data = GET_MESSAGE_DATA_PTR(engineMsg);

    switch (msg.getType()) {
        case ModuleMessage::MessageType::RemoteSyncCallRequest:
            RemoteSyncCallRequest(msg);
            break;
        case ModuleMessage::MessageType::RemoteSyncCallReturn:
            RemoteSyncCallReturn(msg);
            break;
        case ModuleMessage::MessageType::RemoteLoadRequest:
            RemoteLoadRequest(msg);
            break;
        case ModuleMessage::MessageType::RemoteLoadReturn:
            RemoteLoadReturn(msg);
            break;
        default:
            break;
    }
}

void ModuleMessage::cleanup(utils::Message& engineMsg) {
    delete GET_MESSAGE_HEADER(engineMsg);
    delete GET_MESSAGE_DATA_PTR(engineMsg);
}


/////////////////////////// Helper ///////////////////////////

utils::Message PackEngineMessage(string toModuleType, ModuleMessage::MessageType type, string data,
                                 int* messageId = nullptr) {
    auto& callbacks = globalShareData->messageSystemHandlers[toModuleType];

    utils::Message engineMsg(callbacks.handler, callbacks.cleaner);
    engineMsg.MESSAGE_TYPE = (int64_t)type;
    engineMsg.MESSAGE_HEADER = new ModuleMessage::MessageHeader();
    engineMsg.MESSAGE_DATA_PTR = new string(data);
    if (messageId)
        *messageId = (GET_MESSAGE_HEADER(engineMsg))->id;
    return engineMsg;
}

utils::Message PackEngineMessage(string toModuleType, int messageId, ModuleMessage::MessageType type, string data) {
    auto& callbacks = globalShareData->messageSystemHandlers[toModuleType];

    utils::Message engineMsg(callbacks.handler, callbacks.cleaner);
    engineMsg.MESSAGE_TYPE = (int64_t)type;
    engineMsg.MESSAGE_HEADER = new ModuleMessage::MessageHeader();
    (GET_MESSAGE_HEADER(engineMsg))->id = messageId;
    engineMsg.MESSAGE_DATA_PTR = new string(data);
    return engineMsg;
}


/////////////////////////// Module Message ///////////////////////////

int ModuleMessage::getNextMessageId() {
    return InterlockedIncrement((LONG*)&(globalShareData->messageSystemNextId));
}

ModuleMessageResult ModuleMessage::broadcastLocal(MessageType type, string data, int64_t delay) {
    std::vector<ScriptEngine*> engineList;
    int msgId = -1;

    auto engines = EngineManager::getLocalEngines();
    for (auto& engine : engines) {
        try {
            engine->messageQueue()->postMessage(PackEngineMessage(LLSE_MODULE_TYPE, type, data, &msgId),
                                                std::chrono::milliseconds(delay));
            engineList.push_back(engine);
        } catch (const Exception& e) {
            EngineScope scope(engine);
            logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
            PrintException(e);
        } catch (...) {
            EngineScope scope(engine);
            logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
        }
    }
    return ModuleMessageResult(msgId, engineList);
}

ModuleMessageResult ModuleMessage::broadcastGlobal(MessageType type, string data, int64_t delay) {
    std::vector<ScriptEngine*> engineList;
    int msgId = -1;

    auto engines = EngineManager::getGlobalEngines();
    for (auto& engine : engines) {
        try {
            engine->messageQueue()->postMessage(
                PackEngineMessage(EngineManager::getEngineType(engine), type, data, &msgId),
                std::chrono::milliseconds(delay));
            engineList.push_back(engine);
        } catch (const Exception& e) {
            EngineScope scope(engine);
            logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
            PrintException(e);
        } catch (...) {
            EngineScope scope(engine);
            logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
        }
    }
    return ModuleMessageResult(msgId, engineList);
}

ModuleMessageResult ModuleMessage::broadcastTo(std::string toModuleType, MessageType type, string data, int64_t delay) {
    std::vector<ScriptEngine*> engineList;
    int msgId = -1;

    auto engines = EngineManager::getGlobalEngines();
    for (auto& engine : engines) {
        if (EngineManager::getEngineType(engine) == toModuleType) {
            try {
                engine->messageQueue()->postMessage(PackEngineMessage(toModuleType, type, data, &msgId),
                                                    std::chrono::milliseconds(delay));
                engineList.push_back(engine);
            } catch (const Exception& e) {
                EngineScope scope(engine);
                logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
                PrintException(e);
            } catch (...) {
                EngineScope scope(engine);
                logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
            }
        }
    }
    return ModuleMessageResult(msgId, engineList);
}

ModuleMessageResult ModuleMessage::sendTo(ScriptEngine* engine, MessageType type, std::string data, int64_t delay) {
    int msgId = -1;
    string toModuleType = LLSE_MODULE_TYPE;

    try {
        engine->messageQueue()->postMessage(PackEngineMessage(EngineManager::getEngineType(engine), type, data, &msgId),
                                            std::chrono::milliseconds(delay));
        return ModuleMessageResult(msgId, {engine});
    } catch (const Exception& e) {
        EngineScope scope(engine);
        logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
        PrintException(e);
    } catch (...) {
        EngineScope scope(engine);
        logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
    }
    return ModuleMessageResult(msgId, {});
}

ModuleMessageResult ModuleMessage::sendToRandom(std::string toModuleType, MessageType type, std::string data,
                                                int64_t delay) {
    int msgId = -1;

    auto engines = EngineManager::getGlobalEngines();
    for (auto& engine : engines) {
        if (EngineManager::getEngineType(engine) == toModuleType) {
            try {
                engine->messageQueue()->postMessage(PackEngineMessage(toModuleType, type, data, &msgId),
                                                    std::chrono::milliseconds(delay));
                return ModuleMessageResult(msgId, {engine});
            } catch (const Exception& e) {
                EngineScope scope(engine);
                logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
                PrintException(e);
            } catch (...) {
                EngineScope scope(engine);
                logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
            }
        }
    }
    return ModuleMessageResult(msgId, {});
}

bool ModuleMessage::sendResult(MessageType type, std::string data, int64_t delay) {
    int msgId = header->id;
    ScriptEngine* engine = header->fromEngine;

    try {
        engine->messageQueue()->postMessage(PackEngineMessage(header->fromEngineModuleType, msgId, type, data),
                                            std::chrono::milliseconds(delay));
        return true;
    } catch (const Exception& e) {
        EngineScope scope(engine);
        logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName);
        PrintException(e);
    } catch (...) { logger.error("Fail to post message to plugin {}", ENGINE_GET_DATA(engine)->pluginName); }
    return false;
}


/////////////////////////// Module Message Result ///////////////////////////

ModuleMessageResult::ModuleMessageResult(int messageId, std::vector<ScriptEngine*> engineList)
    : msgId(messageId)
    , engineList(engineList)
    , resultCount(OperationCount::create(to_string(messageId))) {
}

ModuleMessageResult::operator bool() {
    return getSentCount() > 0;
}

ModuleMessageResult::~ModuleMessageResult() {
    resultCount.remove();
}

bool ModuleMessageResult::waitForAllResults(int maxWaitTime) {
    return waitForResultCount(getSentCount(), maxWaitTime);
}

bool ModuleMessageResult::waitForOneResult(int maxWaitTime) {
    return waitForResultCount(1, maxWaitTime);
}

bool ModuleMessageResult::waitForResultCount(int targetCount, int maxWaitTime) {
    bool res = false;
    auto fromTime = GetCurrentTimeStampMS();

    while (maxWaitTime < 0 ? true : GetCurrentTimeStampMS() - fromTime <= maxWaitTime) {
        Sleep(LLSE_MESSAGE_SYSTEM_WAIT_CHECK_INTERVAL);
        if (resultCount.hasReachCount(targetCount)) {
            res = true;
            break;
        }
        MessageSystemLoopOnce();
    }
    return res;
}

bool ModuleMessageResult::cancel() {
    int id = msgId;
    for (auto& engine : engineList) {
        EngineScope scope(engine);
        engine->messageQueue()->removeMessageIf([id](utils::Message& message) {
            return (GET_MESSAGE_HEADER(message))->id == id
                       ? utils::MessageQueue::RemoveMessagePredReturnType::kRemoveAndContinue
                       : utils::MessageQueue::RemoveMessagePredReturnType::kDontRemove;
        });
    }
    return true;
}

///////////////////////////// Funcs /////////////////////////////
void MessageSystemLoopOnce() {
    // if (!messageLoopLock.try_lock())
    //     return;
    std::list<ScriptEngine*> tmpList;
    {
        SRWLockSharedHolder lock(globalShareData->engineListLock);
        // low efficiency
        tmpList = globalShareData->globalEngineList;
    }
    for (auto engine : tmpList) {
        if (EngineManager::isValid(engine) && EngineManager::getEngineType(engine) == LLSE_BACKEND_TYPE) {
            try {
                if (EngineScope::currentEngine() == engine)
                    engine->messageQueue()->loopQueue(script::utils::MessageQueue::LoopType::kLoopOnce);
                else {
                    EngineScope enter(engine);
                    engine->messageQueue()->loopQueue(script::utils::MessageQueue::LoopType::kLoopOnce);
                }
            } catch (const Exception& e) {
                EngineScope scope(engine);
                logger.error("Error occurred in Engine Message Loop!");
                logger.error("Uncaught Script Exception Detected!");
                PrintException(e);
                logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
            } catch (...) {
                logger.error("Error occurred in Engine Message Loop!");
                logger.error("Uncaught Exception Detected!");
            }
        }
    }
    // messageLoopLock.unlock();
    // logger.debug("Engine-{} Message Loop.", LLSE_MODULE_TYPE);
}

void InitMessageSystem() {
    globalShareData->messageSystemHandlers[LLSE_MODULE_TYPE] = {ModuleMessage::handle, ModuleMessage::cleanup};

    Event::ServerStoppedEvent::subscribe([](const auto& ev) {
        EndMessageSystemLoop();
        return true;
    });

    // dangerous?
    std::thread([]() {
#ifdef DEBUG
        SetThreadDescription(GetCurrentThread(), L"LLSE MessageSystem " _CRT_WIDE(LLSE_MODULE_TYPE));
#endif // DEBUG
       // Set global SEH-Exception handler
        _set_se_translator(seh_exception::TranslateSEHtoCE);

        globalShareData->messageThreads[LLSE_BACKEND_TYPE] = GetCurrentThread();
        while (true) {
            MessageSystemLoopOnce();
            if (LL::getServerStatus() >= LL::ServerStatus::Stopping)
                return;
            SleepEx(5, true);
            if (LL::getServerStatus() >= LL::ServerStatus::Stopping)
                return;
        }
    }).detach();
}

// Helper
void APCEmptyHelper(ULONG_PTR) {
    ;
}

bool EndMessageSystemLoop() {
    auto res = globalShareData->messageThreads.find(LLSE_BACKEND_TYPE);
    if (res == globalShareData->messageThreads.end())
        return false;

    QueueUserAPC(APCEmptyHelper, res->second, 0);
    globalShareData->messageThreads.erase(LLSE_BACKEND_TYPE);
    Sleep(1);
    return true;
}