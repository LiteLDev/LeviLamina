#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct float4x4 {
public:
    // float4x4 inner types declare
    // clang-format off
    struct Matrix2DDecomposition;
    struct Matrix3DDecomposition;
    // clang-format on

    // float4x4 inner types define
    enum class MatKeys : int {};

    struct Matrix2DDecomposition {};

    struct Matrix3DDecomposition {};
};

} // namespace renoir
