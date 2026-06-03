#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct PrepNumber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    negative;
    ::ll::TypedStorage<4, 4, int>    exponent;
    ::ll::TypedStorage<8, 8, uint64> mantissa;
    // NOLINTEND
};

} // namespace bx
