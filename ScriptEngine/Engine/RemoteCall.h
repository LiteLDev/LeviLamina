#pragma once
#include <API/APIHelp.h>
#include <string>

//////////////////// Funcs ////////////////////

bool LLSEExportFunc(ScriptEngine* engine, const Local<Function>& func, const string& exportName);
bool LLSERemoveAllExportedFuncs(ScriptEngine* engine);

class ModuleMessage;
void RemoteSyncCallRequest(ModuleMessage& msg);
void RemoteSyncCallReturn(ModuleMessage& msg);