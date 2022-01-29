#include "MessageSystem.h"
#include <API/APIHelp.h>
#include <Tools/Utils.h>
#include "GlobalShareData.h"
#include <process.h>
#include <exception>
using namespace std;

//////////////////// 消息处理注册 ////////////////////

#include "PluginHotManage.h"
#include "LoaderHelper.h"
#include "RemoteCall.h"

void ProcessModuleMessage(ModuleMessage &msg)
{
    switch (msg.getType())
    {
    case ModuleMessage::MessageType::RemoteCall:
        RemoteCallCallback(msg);
        break;
    case ModuleMessage::MessageType::RemoteCallReturn:
        RemoteCallReturnCallback(msg);
        break;
    case ModuleMessage::MessageType::LxlCommand:
        HotManageMessageCallback(msg);
        break;
    case ModuleMessage::MessageType::RemoteRequire:
        RemoteLoadCallback(msg);
        break;
    case ModuleMessage::MessageType::RemoteRequireReturn:
        RemoteLoadReturnCallback(msg);
        break;
    default:
        break;
    }
}


//////////////////// Class ////////////////////

ModuleMessage::ModuleMessage(ModuleMessage::MessageType type, string data)
{
    packData = new MessagePackData;

    packData->id = getNextMessageId();
    packData->senderThread = globalShareData->moduleMessageSystemsList[LLSE_MODULE_TYPE].threadId;
    this->type = type;
    this->data = data;
}

ModuleMessage::ModuleMessage(int msgId, MessageType type, string data)
{
    packData = new MessagePackData;

    packData->id = msgId;
    packData->senderThread = globalShareData->moduleMessageSystemsList[LLSE_MODULE_TYPE].threadId;
    this->type = type;
    this->data = data;
}

ModuleMessage::ModuleMessage(UINT type, LPARAM lp, WPARAM wp)
{
    this->type = (ModuleMessage::MessageType)type;
    packData = (MessagePackData*)lp;
    data = *(string*)wp;
    delete (string*)wp;     //############ shit mountain! ############
}

ModuleMessage::ModuleMessage(const ModuleMessage& b)    //############ shit mountain! ############
{
    type = b.type;
    packData = new ModuleMessage::MessagePackData{ *(b.packData) };
    data = b.data;
}

LPARAM ModuleMessage::getLParam()
{
    return (LPARAM)packData;
}

WPARAM ModuleMessage::getWParam()
{
    return (WPARAM)new string(data);    //############ shit mountain! ############
}

int ModuleMessage::getNextMessageId()
{
    return InterlockedIncrement((LONG*)&(globalShareData->messageSystemNextId));
}

void ModuleMessage::destroy()
{
    delete packData;
}

int ModuleMessage::broadcast(ModuleMessage& msg)
{
    int sent = 0;

    for (auto& mod : globalShareData->moduleMessageSystemsList)
    {
        ModuleMessage msgSend(msg);
        if (mod.first != LLSE_MODULE_TYPE)
            if (PostThreadMessage(mod.second.threadId, (UINT)msgSend.getType(), msgSend.getWParam(), msgSend.getLParam()))
                ++sent;
    }
    msg.destroy();
    return sent;
}

int ModuleMessage::broadcastAll(ModuleMessage& msg)
{
    int sent = 0;

    for (auto& mod : globalShareData->moduleMessageSystemsList)
    {
        ModuleMessage msgSend(msg);

        if (PostThreadMessage(mod.second.threadId, (UINT)msgSend.getType(), msgSend.getWParam(), msgSend.getLParam()))
            ++sent;
    }
    msg.destroy();
    return sent;
}

bool ModuleMessage::sendTo(ModuleMessage& msg, string toModuleType)
{
    try
    {
        ModuleMessage msgSend(msg);

        unsigned int threadId = globalShareData->moduleMessageSystemsList.at(toModuleType).threadId;
        bool res = PostThreadMessage(threadId, (UINT)msgSend.getType(), msgSend.getWParam(), msgSend.getLParam());
        if (res)
        {
            //多线程锁
            globalShareData->syncWaitListLock.lock();
            globalShareData->syncWaitList[msgSend.getId()] = true;
            globalShareData->syncWaitListLock.unlock();
        }
        msg.destroy();
        return res;
    }
    catch (const std::out_of_range& e)
    {
        return false;
    }
}

bool ModuleMessage::sendBack(ModuleMessage& msg)
{
    ModuleMessage msgSend(msg);
    bool res = PostThreadMessage(packData->senderThread, (UINT)msgSend.getType(), msgSend.getWParam(), msgSend.getLParam());
    if (res)
    {
        //多线程锁
        globalShareData->syncWaitListLock.lock();
        globalShareData->syncWaitList[msgSend.getId()] = true;
        globalShareData->syncWaitListLock.unlock();
    }
    msg.destroy();
    return res;
}

bool ModuleMessage::waitForMessage(int messageId, int maxWaitTime)
{
    auto fromTime = GetCurrentTimeStampMS();
    
    try
    {
        while (maxWaitTime < 0 ? true : GetCurrentTimeStampMS() - fromTime <= maxWaitTime)
        {
            Sleep(LXL_MESSAGE_SYSTEM_WAIT_CHECK_INTERVAL);
            //多线程锁
            lock_guard<mutex> lock(globalShareData->syncWaitListLock);
            globalShareData->syncWaitList.at(messageId);
        }
    }
    catch (const std::out_of_range &)
    {
        return true;
    }

    return false;
}


//////////////////// APIs ////////////////////

unsigned __stdcall ModuleMessageLoop(void* pParam)
{
    BOOL bRet;
    MSG message;

    while ((bRet = GetMessage(&message, NULL, (UINT)ModuleMessage::MessageType::LXL_MODULE_MSG_BEGIN, (UINT)ModuleMessage::MessageType::LXL_MODULE_MSG_END)) != 0)
    {
        if (bRet == -1)
        {
            logger.fatal(string("ERROR Ocurred in MessageSystem! Error Code: ") + std::to_string(GetLastError()));
            return -1;
        }
        else
        {
            ModuleMessage msg(message.message, message.lParam, message.wParam);
            ProcessModuleMessage(msg);
            try
            {
                //多线程锁
                lock_guard<mutex> lock(globalShareData->syncWaitListLock);

                globalShareData->syncWaitList.erase(msg.getId());
            }
            catch (...) { ; }

            msg.destroy();
        }
    }
    return 0;
}

bool InitMessageSystem()
{
    unsigned threadId;

    HANDLE hThread = (HANDLE)_beginthreadex(NULL, 0, ModuleMessageLoop, NULL, 0, &threadId);
    if (hThread == NULL)
    {
        logger.error("模块消息循环系统初始化失败");
        return false;
    }
    CloseHandle(hThread);

    (globalShareData->moduleMessageSystemsList)[LLSE_MODULE_TYPE].threadId = threadId;
    return true;
}