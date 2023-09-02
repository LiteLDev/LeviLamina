#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient::detail {
// NOLINTBEGIN
// symbol: ?StdBadAllocToResult@detail@httpclient@xbox@@YAJAEBVbad_alloc@std@@PEBDI@Z
MCAPI long StdBadAllocToResult(std::bad_alloc const&, char const*, uint);

// symbol: ?StdExceptionToResult@detail@httpclient@xbox@@YAJAEBVexception@std@@PEBDI@Z
MCAPI long StdExceptionToResult(std::exception const&, char const*, uint);

// symbol: ?UnknownExceptionToResult@detail@httpclient@xbox@@YAJPEBDI@Z
MCAPI long UnknownExceptionToResult(char const*, uint);
// NOLINTEND

}; // namespace xbox::httpclient::detail
