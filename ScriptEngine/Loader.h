#pragma once
#include <API/APIHelp.h>
#include <string>
#include <vector>


//基础库 & 依赖库
extern std::unordered_map<std::string, std::string> depends;

//前置声明
extern void BindAPIs(ScriptEngine *engine);