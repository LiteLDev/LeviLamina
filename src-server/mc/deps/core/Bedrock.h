#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {
// functions
// NOLINTBEGIN
MCAPI int strtoint32(char const* str, char** endptr, int base);

MCAPI uint strtouint32(char const* str, char** endptr, int base);

MCAPI void throw_system_error(::std::errc errc);
// NOLINTEND

}
