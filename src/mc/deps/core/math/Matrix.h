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
public:
    // prevent constructor by default
    Matrix();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Matrix(Matrix const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI Matrix();
#endif

    MCAPI explicit Matrix(::glm::qua<float> const& q);

#ifdef LL_PLAT_C
    MCAPI void mult(::Matrix const& rhs);

    MCAPI void normalize();

    MCAPI bool operator!=(::Matrix const& rhs) const;

    MCAPI ::Matrix operator*(::Matrix const& matrix) const;

    MCAPI ::glm::vec3 operator*(::glm::vec3 const& vec) const;

    MCFOLD ::Matrix& operator=(::Matrix const&);

    MCAPI void rotate(float a, ::glm::vec3 const& axis);

    MCAPI void rotate(float a, float x, float y, float z);

    MCAPI void rotateXYZ(::Vec3 const& rotation);

    MCAPI void scale(float x);

    MCAPI void transform3(::glm::vec3& outVec) const;

    MCAPI void transform3(::glm::vec3& outVec, float& outW) const;

    MCAPI void translate(::glm::vec3 const& t);

    MCAPI void translate(float x, float y, float z);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::Matrix makeOrtho(float left, float right, float bottom, float top, float zNear, float zFar);
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
    MCFOLD void* $ctor();
#endif

    MCAPI void* $ctor(::glm::qua<float> const& q);
    // NOLINTEND
};
