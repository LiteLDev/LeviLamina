#pragma once

#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::utils::win_utils {

// GetLastError() -> string
LLNDAPI std::string getLastErrorMessage();
LLNDAPI std::string getLastErrorMessage(ulong errorMessageId);

/**
 * @brief Get the system locale name.
 *
 * @return  std::string  The system locale name.
 */
LLNDAPI std::string getSystemLocaleName();

LLNDAPI bool isWine();

LLNDAPI uintptr_t findSig(char const* szSignature);

} // namespace ll::utils::win_utils
