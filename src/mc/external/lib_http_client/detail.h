#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient::detail {
// functions
// NOLINTBEGIN
MCNAPI long StdBadAllocToResult(::std::bad_alloc const&, char const*, uint);

MCNAPI long StdExceptionToResult(::std::exception const&, char const*, uint);

MCNAPI long UnknownExceptionToResult(char const*, uint);
// NOLINTEND

} // namespace xbox::httpclient::detail
