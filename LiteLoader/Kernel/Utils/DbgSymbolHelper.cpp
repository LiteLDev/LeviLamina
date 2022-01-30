#include <Utils/DbgSymbolHelper.h>
#include <windows.h>
#include <dbghelp/dbghelp.h>
#include <string>
#include <map>
#include <LoggerAPI.h>
using namespace std;
extern Logger logger;

std::map<DWORD, std::wstring> moduleMap;
std::set<std::wstring> loadedSymbolDir;

void FindSymbols(wstring& collection, const string& nowPath, bool recursion = false)
{
	filesystem::directory_iterator list(nowPath);
	for (auto& it : list)
	{
		if (it.is_directory() && recursion)
		{
			FindSymbols(collection, it.path().string(), recursion);
		}
		else if (it.path().extension() == ".pdb")
		{
			filesystem::path dir = filesystem::canonical(it.path());
			wstring dirPath = dir.remove_filename().native();

			if (loadedSymbolDir.find(dirPath) == loadedSymbolDir.end())
			{
				collection = collection + L";" + dirPath.substr(0, dirPath.size() - 1);
				loadedSymbolDir.insert(dirPath);
			}
		}
	}
}

bool LoadSymbols()
{
	loadedSymbolDir.clear();
	wstring symbolPath{ L"srv*C:\\Windows\\symbols*http://msdl.microsoft.com/download/symbols" };
	FindSymbols(symbolPath, ".", false);
	FindSymbols(symbolPath, ".\\plugins", true);

	if (!SymInitializeW(GetCurrentProcess(), symbolPath.c_str(), TRUE))
	{
		logger.warn("Fail to load Symbol Files! Error Code: %d\n", GetLastError());
		return false;
	}
	return true;
}

bool CleanupSymbols()
{
	return SymCleanup(GetCurrentProcess());
}

PSYMBOL_INFOW GetSymbolInfo(HANDLE hProcess, void* address)
{
    PSYMBOL_INFOW pSymbol = (SYMBOL_INFOW*) new char[sizeof(SYMBOL_INFOW) + MAX_SYM_NAME * sizeof(TCHAR)];
    pSymbol->SizeOfStruct = sizeof(SYMBOL_INFOW);
    pSymbol->MaxNameLen = MAX_SYM_NAME;

    DWORD64 displacement = 0;
    if (SymFromAddr(hProcess, (DWORD64)address, &displacement, pSymbol))
        return pSymbol;
    else
        return NULL;
}

void CleanSymbolInfo(PSYMBOL_INFOW pSymbol)
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
        logger.error("Fail to Enumerate loaded modules! Error Code: %d\n", GetLastError());
        return false;
    }
    return true;
}

wstring MapModuleFromAddr(HANDLE hProcess, void* address)
{
    return moduleMap[(DWORD)SymGetModuleBase64(hProcess, (DWORD64)address)];
}