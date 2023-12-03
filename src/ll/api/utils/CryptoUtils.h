#pragma once

#include <string>
#include <string_view>

#include "ll/api/base/Macro.h"

namespace ll::inline utils::crypto_utils {

LLNDAPI std::string md5(std::string_view input);

LLNDAPI std::string sha1(std::string_view input);

LLNDAPI std::string sha256(std::string_view input);

LLNDAPI std::string sha384(std::string_view input);

LLNDAPI std::string sha512(std::string_view input);

} // namespace ll::inline utils::crypto_utils
