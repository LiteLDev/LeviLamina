#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

union HexDouble {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double> d;
    ::ll::TypedStorage<8, 8, uint64> u;
    // NOLINTEND
};
} // namespace bx
