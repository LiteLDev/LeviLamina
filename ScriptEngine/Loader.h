#pragma once
#include <API/APIHelp.h>
#include <string>
#include <vector>


//基础库 & 依赖库
extern std::vector<std::string> depends;

//前置声明
extern std::vector<ScriptEngine*> lxlModules;
extern void BindAPIs(ScriptEngine *engine);