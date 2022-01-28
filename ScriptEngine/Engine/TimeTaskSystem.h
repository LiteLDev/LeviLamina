#pragma once
#include <API/APIHelp.h>

#include <vector>

int NewTimeout(Local<Function> func, const std::vector<Local<Value>> paras, int timeout);
int NewTimeout(Local<String> func, int timeout);
int NewInterval(Local<Function> func, const std::vector<Local<Value>> paras, int timeout);
int NewInterval(Local<String> func, int timeout);
bool ClearTimeTask(int id);