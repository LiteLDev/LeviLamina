#pragma once
#include "api/APIHelp.h"
#include <string>

//////////////////// Funcs ////////////////////

bool LLSEExportFunc(ScriptEngine* engine, const Local<Function>& func, const string& exportName);
bool LLSERemoveAllExportedFuncs(ScriptEngine* engine);

class ModuleMessage;
void RemoteSyncCallRequest(ModuleMessage& msg);
void RemoteSyncCallReturn(ModuleMessage& msg);