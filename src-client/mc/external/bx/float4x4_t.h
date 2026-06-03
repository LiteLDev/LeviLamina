#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct float4x4_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::__m128[4]> col;
    // NOLINTEND
};

} // namespace bx
