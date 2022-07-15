#pragma once
#include "../Global.h"
#include <string>
#include <Windows.h>

// GetLastError() -> string
LIAPI std::string GetLastErrorMessage();
LIAPI std::string GetLastErrorMessage(DWORD error_message_id);

// Create a new process and get its output when exited
LIAPI bool NewProcess(const std::string& process, std::function<void(int, std::string)> callback = nullptr, int timeLimit = -1);
LIAPI std::pair<int, std::string> NewProcessSync(const std::string& process, int timeLimit = -1, bool noReadOutput = true);

// Get Current DLL's module handle
// (Must be header-only!)
HMODULE inline GetCurrentModule() {
    HMODULE hModule = nullptr;
    if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                          (LPCWSTR)GetCurrentModule, &hModule)) {
        return hModule;
    }
    return nullptr;
}

// Get the module path from a module handle
LIAPI std::string GetModulePath(HMODULE handle);
LIAPI std::string GetModuleName(HMODULE handle);

LIAPI bool IsWineEnvironment();
