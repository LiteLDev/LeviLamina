#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/float4x4_t.h"

namespace bgfx {

struct Matrix4 {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::TypedStorage<4, 64, float[16]>        val;
        ::ll::TypedStorage<8, 64, ::bx::float4x4_t> f4x4;
    } un;
    // NOLINTEND
};

} // namespace bgfx
