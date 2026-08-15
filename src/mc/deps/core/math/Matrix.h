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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Matrix();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool operator==(::Matrix const& rhs) const;

    MCAPI void rotate(float a, float x, float y, float z);

    MCAPI void rotateXYZ(::Vec3 const& rotation);

    MCAPI void scale(float x);

    MCAPI void scale(float x, float y, float z);

    MCAPI void translate(::glm::vec3 const& t);

    MCAPI void translate(float x, float y, float z);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Matrix const& IDENTITY();
    // NOLINTEND
};
