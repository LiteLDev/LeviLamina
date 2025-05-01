#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {
// functions
// NOLINTBEGIN
MCNAPI int strtoint32(char const* str, char** endptr, int base);

MCNAPI void throw_system_error(::std::errc errc);
// NOLINTEND

} // namespace Bedrock
