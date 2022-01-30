#pragma once
#include "APIHelp.h"

#include <EconomicSystem.h>

//////////////////// Funcs ////////////////////

void InitBasicEventListeners();
void EnableEventListener(int eventId);

bool LxlAddEventListener(ScriptEngine* engine, const std::string& eventName, const Local<Function>& func);
bool LxlRemoveAllEventListeners(ScriptEngine* engine);
bool LxlCallEventsOnHotLoad(ScriptEngine* engine);
bool LxlCallEventsOnHotUnload(ScriptEngine* engine);

//////////////////// Callback ////////////////////

bool MoneyBeforeEventCallback(LLMoneyEvent type, xuid_t from, xuid_t to, money_t value);
bool MoneyEventCallback(LLMoneyEvent type, xuid_t from, xuid_t to, money_t value);