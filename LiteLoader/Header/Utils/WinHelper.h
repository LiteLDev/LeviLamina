#pragma once
#include <string>
#include <Windows.h>
#include <functional>

#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif

// GetLastError() -> string
LIAPI std::string GetLastErrorMessage();

// Create a new process and get its output when exited
LIAPI bool NewProcess(const std::string& process, std::function<void(int, std::string)> callback, int timeLimit);

// Get Current DLL's module handle
// (Must be header-only!)
HMODULE inline GetCurrentModule()
{
    HMODULE hModule = NULL;
    if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        (LPCWSTR)GetCurrentModule, &hModule)) {
        return hModule;
    }
    return NULL;
}