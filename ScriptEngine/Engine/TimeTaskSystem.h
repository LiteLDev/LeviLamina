#pragma once
#include <API/APIHelp.h>
#include <vector>
#include "MessageSystem.h"

///////////////////////// API /////////////////////////

int NewTimeout(Local<Function> func, std::vector<Local<Value>> paras, int timeout);
int NewTimeout(Local<String> func, int timeout);
int NewInterval(Local<Function> func, std::vector<Local<Value>> paras, int timeout);
int NewInterval(Local<String> func, int timeout);
bool ClearTimeTask(int id);


///////////////////////// Func /////////////////////////

void LxlRemoveTimeTaskData(ScriptEngine* engine);