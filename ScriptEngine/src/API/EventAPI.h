#pragma once
#include "APIHelp.h"

#include <EconomicSystem.h>

//////////////////// Funcs ////////////////////

void InitBasicEventListeners();
void EnableEventListener(int eventId);

bool LLSEAddEventListener(ScriptEngine* engine, const std::string& eventName, const Local<Function>& func);
bool LLSERemoveAllEventListeners(ScriptEngine* engine);
bool LLSECallEventsOnHotLoad(ScriptEngine* engine);
bool LLSECallEventsOnHotUnload(ScriptEngine* engine);

//////////////////// Callback ////////////////////

bool MoneyBeforeEventCallback(LLMoneyEvent type, xuid_t from, xuid_t to, money_t value);
bool MoneyEventCallback(LLMoneyEvent type, xuid_t from, xuid_t to, money_t value);