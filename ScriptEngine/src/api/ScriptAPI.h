#pragma once
#include "api/APIHelp.h"


//////////////////// APIs ////////////////////

Local<Value> Log(const Arguments& args);
Local<Value> ColorLog(const Arguments& args);
Local<Value> FastLog(const Arguments& args);

Local<Value> SetTimeout(const Arguments& args);
Local<Value> SetInterval(const Arguments& args);
Local<Value> ClearInterval(const Arguments& args);