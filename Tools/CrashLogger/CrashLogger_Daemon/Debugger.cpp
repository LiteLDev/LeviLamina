#include <windows.h>
#include <dbghelp.h>
#include <cstdio>
#include <filesystem>
#include <string>
#include <set>
#include "../include/LoggerShareData.h"

using namespace std;

HANDLE hProcess_Debug;
bool waitEvent = true;
DEBUG_EVENT debugEvent;

set<wstring> loadedSymbolDir;

void FindSymbols(wstring &collection, const string &nowPath, bool recursion = false)
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
			filesystem::path dir= filesystem::canonical(it.path());
			wstring dirPath = dir.remove_filename().native();

			if (loadedSymbolDir.find(dirPath) == loadedSymbolDir.end())
			{
				collection = collection + L";" + dirPath.substr(0, dirPath.size() - 1);
				loadedSymbolDir.insert(dirPath);
			}
		}
	}
}

bool LoadSymbolFiles()
{
	wstring symbolPath{ L"srv*C:\\Windows\\symbols*http://msdl.microsoft.com/download/symbols" };
	FindSymbols(symbolPath,".",false);
	FindSymbols(symbolPath,".\\plugins", true);

	if (!SymInitializeW(hProcess_Debug, symbolPath.c_str(), TRUE))
	{
		printf("[CrashLogger][ERROR] Fail to load Symbol Files! Error Code: %d\n", GetLastError());
		return false;
	}
	return true;
}

bool InitDebugger()
{
	if (!DebugActiveProcess(GetProcessId(hProcess_Debug)))
	{
		printf("[CrashLogger][ERROR] Fail to attach Debugger! Error Code: %d\n", GetLastError());
		return false;
	}
	DebugSetProcessKillOnExit(false);
	return true;
}

DWORD inline OnProcessCreated(const CREATE_PROCESS_DEBUG_INFO* e)
{
	CloseHandle(e->hFile);
	CloseHandle(e->hProcess);
	CloseHandle(e->hThread);
	return DBG_CONTINUE;
}
DWORD inline OnThreadCreated(const CREATE_THREAD_DEBUG_INFO* e)
{
	CloseHandle(e->hThread);
	return DBG_CONTINUE;
}
DWORD inline OnDllLoaded(const LOAD_DLL_DEBUG_INFO* e)
{
	SymLoadModule64(hProcess_Debug, e->hFile, NULL, NULL , (DWORD64)(e->lpBaseOfDll), 0);
	return DBG_CONTINUE;
}
DWORD inline OnDllUnloaded(const UNLOAD_DLL_DEBUG_INFO* e)
{
	SymUnloadModule64(hProcess_Debug, (DWORD64)(e->lpBaseOfDll));
	return DBG_CONTINUE;
}

extern void LogCrash(PEXCEPTION_POINTERS e, HANDLE hPro, HANDLE hThr, DWORD dProId, DWORD dThrId);
DWORD OnException(const EXCEPTION_DEBUG_INFO* e, DWORD processId, DWORD threadId)
{
	if (e->dwFirstChance)
		return DBG_EXCEPTION_NOT_HANDLED;

	EXCEPTION_POINTERS exception = { 0 };
	CONTEXT context;
	
	HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, TRUE, threadId);
	if (hThread == NULL)
	{
		printf("[CrashLogger][ERROR] Fail to Open Thread! Error Code: %d\n", GetLastError());
		return DBG_EXCEPTION_NOT_HANDLED;
	}
	context.ContextFlags = CONTEXT_FULL;
	if (!GetThreadContext(hThread, &context))
	{
		printf("[CrashLogger][ERROR] Fail to Get Context! Error Code: %d\n", GetLastError());
		return DBG_EXCEPTION_NOT_HANDLED;
	}

	exception.ContextRecord = &context;
	exception.ExceptionRecord = (PEXCEPTION_RECORD)&(e->ExceptionRecord);

	LogCrash(&exception, hProcess_Debug, hThread, processId, threadId);
	//Do other operations

	SymCleanup(hProcess_Debug);
	Sleep(SLEEP_BEFORE_ABORT * 1000);
	return DBG_EXCEPTION_NOT_HANDLED;
}

void DebuggerMain(HANDLE hPro)
{
	hProcess_Debug = hPro;
	if (!InitDebugger() || !LoadSymbolFiles())
		return;

	while (WaitForDebugEvent(&debugEvent, INFINITE))
	{
		DWORD continueStatus;
		switch (debugEvent.dwDebugEventCode)
		{
		case CREATE_PROCESS_DEBUG_EVENT:
			continueStatus = OnProcessCreated(&debugEvent.u.CreateProcessInfo);
			break;
		case CREATE_THREAD_DEBUG_EVENT:
			continueStatus = OnThreadCreated(&debugEvent.u.CreateThread);
			break;
		case EXCEPTION_DEBUG_EVENT:
			continueStatus = OnException(&debugEvent.u.Exception, debugEvent.dwProcessId, debugEvent.dwThreadId);
			break;
		case EXIT_PROCESS_DEBUG_EVENT:
			waitEvent = false;
			break;
		case EXIT_THREAD_DEBUG_EVENT:
			break;
		case LOAD_DLL_DEBUG_EVENT:
			continueStatus = OnDllLoaded(&debugEvent.u.LoadDll);
			break;
		case UNLOAD_DLL_DEBUG_EVENT:
			continueStatus = OnDllUnloaded(&debugEvent.u.UnloadDll);
			break;
		case OUTPUT_DEBUG_STRING_EVENT:
			break;
		case RIP_EVENT:
			break;
		default:
			break;
		}
		
		if (waitEvent == true)
			ContinueDebugEvent(debugEvent.dwProcessId, debugEvent.dwThreadId, continueStatus);
		else
			break;
	}
}