#pragma once
#include "ll/api/base/Global.h"
#include <libloaderapi.h>
#include <string>

// GetLastError() -> string
LLNDAPI std::string GetLastErrorMessage();
LLNDAPI std::string GetLastErrorMessage(DWORD errorMessageId);
/**
 * @brief Get the system locale name.
 *
 * @return  std::string  The system locale name.
 */
LLNDAPI std::string GetSystemLocaleName();

LLNDAPI bool IsWineEnvironment();

LLNDAPI uintptr_t FindSig(char const* szSignature);
