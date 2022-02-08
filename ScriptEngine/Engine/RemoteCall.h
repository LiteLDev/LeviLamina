#pragma once
#include <API/APIHelp.h>
#include <string>

//////////////////// Funcs ////////////////////

bool LxlExportFunc(ScriptEngine* engine, const Local<Function>& func, const string& exportName);
bool LxlRemoveAllExportedFuncs(ScriptEngine* engine);

class ModuleMessage;
void RemoteSyncCallRequest(ModuleMessage& msg);
void RemoteSyncCallReturn(ModuleMessage& msg);