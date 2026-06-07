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
    Matrix(Matrix const&);
    Matrix();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI Matrix(::glm::vec4 const& row0, ::glm::vec4 const& row1, ::glm::vec4 const& row2, ::glm::vec4 const& row3);

    MCAPI ::glm::qua<float> getRotationAsQuaternion() const;

    MCAPI ::Matrix& operator=(::Matrix const&);

    MCAPI bool operator==(::Matrix const& rhs) const;

    MCAPI void rotate(float a, ::glm::vec3 const& axis);

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

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void*
    $ctor(::glm::vec4 const& row0, ::glm::vec4 const& row1, ::glm::vec4 const& row2, ::glm::vec4 const& row3);
#endif
    // NOLINTEND
};
