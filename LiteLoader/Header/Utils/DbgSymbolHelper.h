#pragma once

#define DBGHELP_TRANSLATE_TCHAR
#include <windows.h>
#include <dbghelp/dbghelp.h>
#include <string>

using namespace std;

bool LoadSymbols();
bool CleanupSymbols();

PSYMBOL_INFOW GetSymbolInfo(HANDLE hProcess, void* address);
void CleanSymbolInfo(PSYMBOL_INFOW pSymbol);

bool CreateModuleMap(HANDLE hProcess);
wstring MapModuleFromAddr(HANDLE hProcess, void* address);