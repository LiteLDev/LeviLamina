#pragma once
#include <string>
#include <Windows.h>

std::string GetLastErrorMessage();

// Must be header-only!
// Get Current DLL's module handle
HMODULE inline GetCurrentModule()
{
    HMODULE hModule = NULL;
    if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        (LPCWSTR)GetCurrentModule, &hModule)) {
        return hModule;
    }
    return NULL;
}