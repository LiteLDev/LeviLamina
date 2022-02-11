#include "SymbolHelper.h"

#include <windows.h>
#include <dbghelp.h>
#include <string>
#include <map>

using namespace std;

std::map<DWORD, std::wstring> moduleMap;


PSYMBOL_INFO GetSymbolInfo(HANDLE hProcess, void* address)
{
    PSYMBOL_INFO pSymbol = (SYMBOL_INFO*) new char[sizeof(SYMBOL_INFO) + MAX_SYM_NAME * sizeof(TCHAR)];
    pSymbol->SizeOfStruct = sizeof(SYMBOL_INFO);
    pSymbol->MaxNameLen = MAX_SYM_NAME;

    DWORD64 displacement = 0;
    if (SymFromAddr(hProcess, (DWORD64)address, &displacement, pSymbol))
        return pSymbol;
    else
        return NULL;
}

void CleanSymbolInfo(PSYMBOL_INFO pSymbol)
{
    delete[]((char*)pSymbol);
}

BOOL CALLBACK EnumerateModuleCallBack(PCTSTR ModuleName, DWORD64 ModuleBase, ULONG ModuleSize, PVOID UserContext)
{
    std::map<DWORD, std::wstring>* pModuleMap = (std::map<DWORD, std::wstring>*)UserContext;
    LPCWSTR name = wcsrchr(ModuleName, TEXT('\\')) + 1;
    (*pModuleMap)[(DWORD)ModuleBase] = name;

    return TRUE;
}

bool CreateModuleMap(HANDLE hProcess)
{
    if (!EnumerateLoadedModulesW64(hProcess, EnumerateModuleCallBack, &moduleMap))
    {
        printf("[CrashLogger][ERROR] Fail to Enumerate loaded modules! Error Code: %d\n", GetLastError());
        return false;
    }
    return true;
}

wstring MapModuleFromAddr(HANDLE hProcess, void* address)
{
    return moduleMap[(DWORD)SymGetModuleBase64(hProcess, (DWORD64)address)];
}