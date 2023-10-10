#pragma once

#include <string>
#include <string_view>

#include "ll/api/base/Macro.h"

namespace ll::crypto {
LLAPI std::string md5(std::string_view input);
LLAPI std::string sha1(std::string_view input);
} // namespace ll::crypto
