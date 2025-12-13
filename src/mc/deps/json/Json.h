#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {
// inner types
enum : int {
    UintToStringBufferSize = 25,
};

// functions
// NOLINTBEGIN
MCAPI ::std::string valueToQuotedString(char const* value);

MCAPI ::std::string valueToString(uint64 value);

MCAPI ::std::string valueToString(int64 value);

MCAPI ::std::string valueToString(double value);
// NOLINTEND

} // namespace Json
