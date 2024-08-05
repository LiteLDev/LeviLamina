#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient::detail {
// NOLINTBEGIN
MCAPI long StdBadAllocToResult(std::bad_alloc const&, char const*, uint);

MCAPI long StdExceptionToResult(std::exception const&, char const*, uint);

MCAPI long UnknownExceptionToResult(char const*, uint);
// NOLINTEND

}; // namespace xbox::httpclient::detail
