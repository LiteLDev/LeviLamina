#pragma once
#include <API/APIHelp.h>
#include <string>
#include <vector>


// Baselibs dependency 
extern std::unordered_map<std::string, std::string> depends;

// Pre-declared
extern void BindAPIs(ScriptEngine *engine);