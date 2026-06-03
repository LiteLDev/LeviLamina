#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

union simd128_ref_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, float[4]> fxyzw;
    ::ll::TypedStorage<4, 16, int[4]>   ixyzw;
    ::ll::TypedStorage<4, 16, uint[4]>  uxyzw;
    // NOLINTEND
};
} // namespace bx
