#include "engine/LocalShareData.h"
#include "main/EconomicSystem.h"
#include "api/EventAPI.h"
#include <llapi/LLAPI.h>
#include <llapi/LoggerAPI.h>
#include <string>
Logger economicLogger("EconomicSystem");


////////////// Helper //////////////

typedef money_t(*LLMoneyGet_T)(xuid_t);
typedef string(*LLMoneyGetHist_T)(xuid_t, int);
typedef bool (*LLMoneyTrans_T)(xuid_t, xuid_t, money_t, string const&);
typedef bool (*LLMoneySet_T)(xuid_t, money_t);
typedef bool (*LLMoneyAdd_T)(xuid_t, money_t);
typedef bool (*LLMoneyReduce_T)(xuid_t, money_t);
typedef void (*LLMoneyClearHist_T)(int);

typedef void (*LLMoneyListenBeforeEvent_T)(LLMoneyCallback callback);
typedef void (*LLMoneyListenAfterEvent_T)(LLMoneyCallback callback);

struct dynamicSymbolsMap_type
{
    LLMoneyGet_T LLMoneyGet = nullptr;
    LLMoneySet_T LLMoneySet = nullptr;
    LLMoneyAdd_T LLMoneyAdd = nullptr;
    LLMoneyReduce_T LLMoneyReduce = nullptr;
    LLMoneyTrans_T LLMoneyTrans = nullptr;
    LLMoneyGetHist_T LLMoneyGetHist = nullptr;
    LLMoneyClearHist_T LLMoneyClearHist = nullptr;

    LLMoneyListenBeforeEvent_T LLMoneyListenBeforeEvent = nullptr;
    LLMoneyListenAfterEvent_T LLMoneyListenAfterEvent = nullptr;
} dynamicSymbolsMap;

////////////// Helper //////////////


bool EconomySystem::init()
{
    auto llmoney = ll::getPlugin("LLMoney");
    if (!llmoney)
    {
        if (localShareData->isFirstInstance) {
            economicLogger.warn(tr("llse.init.llMoney.notFound"));
        }
        return false;
    }

    HMODULE h = llmoney->handle;

    dynamicSymbolsMap.LLMoneyGet = (LLMoneyGet_T)GetProcAddress(h, "LLMoneyGet");
    if (!dynamicSymbolsMap.LLMoneyGet)
        economicLogger.warn("Fail to load API money.getMoney!");

    dynamicSymbolsMap.LLMoneySet = (LLMoneySet_T)GetProcAddress(h, "LLMoneySet");
    if (!dynamicSymbolsMap.LLMoneySet)
        economicLogger.warn("Fail to load API money.setMoney!");

    dynamicSymbolsMap.LLMoneyAdd = (LLMoneyAdd_T)GetProcAddress(h, "LLMoneyAdd");
    if (!dynamicSymbolsMap.LLMoneyAdd)
        economicLogger.warn("Fail to load API money.addMoney!");

    dynamicSymbolsMap.LLMoneyReduce = (LLMoneyReduce_T)GetProcAddress(h, "LLMoneyReduce");
    if (!dynamicSymbolsMap.LLMoneyReduce)
        economicLogger.warn("Fail to load API money.reduceMoney!");

    dynamicSymbolsMap.LLMoneyTrans = (LLMoneyTrans_T)GetProcAddress(h, "LLMoneyTrans");
    if (!dynamicSymbolsMap.LLMoneyTrans)
        economicLogger.warn("Fail to load API money.transMoney!");

    dynamicSymbolsMap.LLMoneyGetHist = (LLMoneyGetHist_T)GetProcAddress(h, "LLMoneyGetHist");
    if (!dynamicSymbolsMap.LLMoneyGetHist)
        economicLogger.warn("Fail to load API money.getTransHist!");

    dynamicSymbolsMap.LLMoneyClearHist = (LLMoneyClearHist_T)GetProcAddress(h, "LLMoneyClearHist");
    if (!dynamicSymbolsMap.LLMoneyClearHist)
        economicLogger.warn("Fail to load API money.clearHist!");

    dynamicSymbolsMap.LLMoneyListenBeforeEvent = (LLMoneyListenBeforeEvent_T)GetProcAddress(h, "LLMoneyListenBeforeEvent");
    dynamicSymbolsMap.LLMoneyListenAfterEvent = (LLMoneyListenAfterEvent_T)GetProcAddress(h, "LLMoneyListenAfterEvent");
    if (!dynamicSymbolsMap.LLMoneyListenBeforeEvent || !dynamicSymbolsMap.LLMoneyListenAfterEvent)
    {
        economicLogger.warn("Fail to load API to listen money event!");
    }
    else
    {
        dynamicSymbolsMap.LLMoneyListenBeforeEvent(MoneyBeforeEventCallback);
        dynamicSymbolsMap.LLMoneyListenAfterEvent(MoneyEventCallback);
    }

    return true;
}

money_t EconomySystem::getMoney(xuid_t player)
{
    if (dynamicSymbolsMap.LLMoneyGet)
        return dynamicSymbolsMap.LLMoneyGet(player);
    else
    {
        economicLogger.error("API money.getMoney have not been loaded!");
        return 0;
    }
}

bool EconomySystem::setMoney(xuid_t player, money_t money)
{
    if (dynamicSymbolsMap.LLMoneySet)
        return dynamicSymbolsMap.LLMoneySet(player, money);
    else
    {
        economicLogger.error("API money.setMoney have not been loaded!");
        return false;
    }
}

bool EconomySystem::addMoney(xuid_t player, money_t money)
{
    if (dynamicSymbolsMap.LLMoneyAdd)
        return dynamicSymbolsMap.LLMoneyAdd(player, money);
    else
    {
        economicLogger.error("API money.addMoney have not been loaded!");
        return false;
    }
}

bool EconomySystem::reduceMoney(xuid_t player, money_t money)
{
    if (dynamicSymbolsMap.LLMoneyReduce)
        return dynamicSymbolsMap.LLMoneyReduce(player, money);
    else
    {
        economicLogger.error("API money.reduceMoney have not been loaded!");
        return false;
    }
}

bool EconomySystem::transMoney(xuid_t player1, xuid_t player2, money_t money, string const& notes)
{
    if (dynamicSymbolsMap.LLMoneyTrans)
        return dynamicSymbolsMap.LLMoneyTrans(player1, player2, money, notes);
    else
    {
        economicLogger.error("API money.transMoney have not been loaded!");
        return false;
    }
}

std::string EconomySystem::getMoneyHist(xuid_t player, int time)
{
    if (dynamicSymbolsMap.LLMoneyGetHist)
        return dynamicSymbolsMap.LLMoneyGetHist(player, time);
    else
    {
        economicLogger.error("API money.getTransHist have not been loaded!");
        return "";
    }
}

bool EconomySystem::clearMoneyHist(int time)
{
    if (dynamicSymbolsMap.LLMoneyClearHist)
    {
        dynamicSymbolsMap.LLMoneyClearHist(time);
        return true;
    }
    else
    {
        economicLogger.error("API money.clearHist have not been loaded!");
        return false;
    }
}