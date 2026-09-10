#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class cgltf_type : int {
    Invalid = 0,
    Scalar  = 1,
    Vec2    = 2,
    Vec3    = 3,
    Vec4    = 4,
    Mat2    = 5,
    Mat3    = 6,
    Mat4    = 7,
    MaxEnum = 8,
};
