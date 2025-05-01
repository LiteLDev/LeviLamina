#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {
// inner types
enum : int {
    UintToStringBufferSize = 25,
};

// functions
// NOLINTBEGIN
MCNAPI ::std::string valueToQuotedString(char const* value);

MCNAPI ::std::string valueToString(uint64 value);

MCNAPI ::std::string valueToString(int64 value);

MCNAPI ::std::string valueToString(double value);
// NOLINTEND

} // namespace Json
