#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient::detail {
// functions
// NOLINTBEGIN
MCNAPI long StdBadAllocToResult(::std::bad_alloc const& e, char const* file, uint line);

MCNAPI long StdExceptionToResult(::std::exception const& e, char const* file, uint line);

MCNAPI long UnknownExceptionToResult(char const* file, uint line);
// NOLINTEND

} // namespace xbox::httpclient::detail
