#pragma once

#include <span>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::utils::win_utils {

LLNDAPI std::string getSystemLocaleName();

LLNDAPI bool isWine();

LLNDAPI std::span<uchar> getImageRange(std::string const& name = "");

} // namespace ll::utils::win_utils
