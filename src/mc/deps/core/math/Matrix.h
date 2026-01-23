#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Matrix {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat4x4> _m;
    // NOLINTEND

public:
    // prevent constructor by default
    Matrix(Matrix const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C Matrix();

    MCAPI explicit Matrix(::glm::qua<float> const& q);

    MCAPI_C void mult(::Matrix const& rhs);

    MCAPI_C void normalize();

    MCAPI_C bool operator!=(::Matrix const& rhs) const;

    MCAPI_C ::Matrix operator*(::Matrix const& matrix) const;

    MCAPI_C ::glm::vec3 operator*(::glm::vec3 const& vec) const;

    MCFOLD_C ::Matrix& operator=(::Matrix const&);

    MCAPI_C void rotate(float a, ::glm::vec3 const& axis);

    MCAPI_C void rotate(float a, float x, float y, float z);

    MCAPI_C void scale(float x);

    MCAPI_C void transform3(::glm::vec3& outVec) const;

    MCAPI void transform3(::glm::vec3& outVec, float& outW) const;

    MCAPI_C void translate(::glm::vec3 const& t);

    MCAPI void translate(float x, float y, float z);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::Matrix makeOrtho(float left, float right, float bottom, float top, float zNear, float zFar);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Matrix const& IDENTITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD_C void* $ctor();

    MCAPI void* $ctor(::glm::qua<float> const& q);
    // NOLINTEND
};
