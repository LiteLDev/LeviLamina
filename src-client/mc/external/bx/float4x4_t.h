#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct float4x4_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, float[4][4]> col;
    // NOLINTEND
};

} // namespace bx
