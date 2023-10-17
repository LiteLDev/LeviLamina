#pragma once

#include <string>
#include <string_view>

#include "ll/api/base/Macro.h"

namespace ll::crypto {

LLNDAPI std::string md5(std::string_view input);

LLNDAPI std::string sha1(std::string_view input);

LLNDAPI std::string sha224(std::string_view input);

LLNDAPI std::string sha256(std::string_view input);

LLNDAPI std::string sha384(std::string_view input);

LLNDAPI std::string sha512(std::string_view input);

} // namespace ll::crypto
