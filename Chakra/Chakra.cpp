// Chakra.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "Chakra.h"

/*

extern "C" {
// The core api of the hook function
HOOKAPI int HookFunction(void *oldfunc, void **poutold, void *newfunc);
// Used to get a server-defined specific function by name
//HOOKAPI void *GetServerSymbol(char const *name);
}
*/
#pragma comment(linker, "/export:HookFunction=LiteLoader.JsAddRef")
#pragma comment(linker, "/export:GetServerSymbol=LiteLoader.dlsym_real")