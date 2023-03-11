#pragma once
#include "llapi/Global.h"
#include <string>
#include <libloaderapi.h>

// GetLastError() -> string
LLAPI std::string GetLastErrorMessage();
LLAPI std::string GetLastErrorMessage(DWORD error_message_id);

// Create a new process and get its output when exited
LLAPI bool NewProcess(const std::string& process, std::function<void(int, std::string)> callback = nullptr, int timeLimit = -1);
LLAPI std::pair<int, std::string> NewProcessSync(const std::string& process, int timeLimit = -1, bool noReadOutput = true);

/**
 * @brief Get Current DLL's module handle
 *
 * @return  HMODULE  DLL Module Handler
 */
HMODULE inline GetCurrentModule() {
    HMODULE hModule = nullptr;
    if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                          (LPCWSTR)GetCurrentModule, &hModule)) {
        return hModule;
    }
    return nullptr;
}

// Get the module path from a module handle
LLAPI std::string GetModulePath(HMODULE handle);
LLAPI std::string GetModuleName(HMODULE handle);

/**
 * @brief Get the system locale name.
 * 
 * @return  std::string  The system locale name.
 */
LLAPI std::string GetSystemLocaleName();

LLAPI bool IsWineEnvironment();

LLAPI uintptr_t FindSig(const char* szSignature);
