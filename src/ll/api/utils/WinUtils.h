#pragma once

#include <span>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::inline utils::win_utils {

LLNDAPI std::string getSystemLocaleName();

LLNDAPI bool isWine();

LLNDAPI std::span<uchar> getImageRange(std::string_view name = "");

LLNDAPI std::string getCallerModuleFileName(ulong framesToSkip = 0);

} // namespace ll::inline utils::win_utils
