#pragma once
#include <string>
#include "..\\liteloader.h"
extern "C" {
// The core api of the hook function
//__declspec(dllimport) int HookFunction(void* oldfunc, void** poutold, void* newfunc);
// Used to get a server-defined specific function by name
LIAPI int HookFunction(void *oldfunc, void **poutold, void *newfunc);
LIAPI void *dlsym_real(char const *name);
}
LIAPI std::string ptr2name(void *ptr);
LIAPI std::string GetDataPath(const std::string &myname);