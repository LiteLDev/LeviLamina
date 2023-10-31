#pragma once
#include "ll/api/base/Global.h"
#include <libloaderapi.h>
#include <string>

// GetLastError() -> string
LLNDAPI std::string GetLastErrorMessage();
LLNDAPI std::string GetLastErrorMessage(DWORD errorMessageId);

// Create a new process and get its output when exited

LLNDAPI std::pair<int, std::string>
      NewProcessSync(std::string const& process, int timeLimit = -1, bool noReadOutput = true);

/**
 * @brief Get Current DLL's module handle
 *
 * @return  HMODULE  DLL Module Handler
 */
[[nodiscard]] inline HMODULE GetCurrentModule() {
    HMODULE hModule = nullptr;
    if (GetModuleHandleEx(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            (LPCWSTR)GetCurrentModule,
            &hModule
        )) {
        return hModule;
    }
    return nullptr;
}

// Get the module path from a module handle
LLNDAPI std::string GetModulePath(HMODULE handle);
LLNDAPI std::string GetModuleName(HMODULE handle);

/**
 * @brief Get the system locale name.
 *
 * @return  std::string  The system locale name.
 */
LLNDAPI std::string GetSystemLocaleName();

LLNDAPI bool IsWineEnvironment();

LLNDAPI uintptr_t FindSig(char const* szSignature);
