#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {
// functions
// NOLINTBEGIN
MCAPI_S int strtoint32(char const* str, char** endptr, int base);

MCAPI_S uint strtouint32(char const* str, char** endptr, int base);

MCAPI void throw_system_error(::std::errc errc);
// NOLINTEND

} // namespace Bedrock
