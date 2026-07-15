#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class Matrix {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat4x4> _m;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void rotateXYZ(::Vec3 const& rotation);

    MCAPI void scale(float x);

    MCAPI void translate(::glm::vec3 const& t);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Matrix const& IDENTITY();
    // NOLINTEND
};
