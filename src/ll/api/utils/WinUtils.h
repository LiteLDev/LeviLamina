#pragma once

#include <span>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::utils::win_utils {
/**
 * @brief Get the system locale name.
 *
 * @return  std::string  The system locale name.
 */
LLNDAPI std::string getSystemLocaleName();

LLNDAPI bool isWine();

LLNDAPI std::span<uchar> getImageRangeSpan();

} // namespace ll::utils::win_utils
