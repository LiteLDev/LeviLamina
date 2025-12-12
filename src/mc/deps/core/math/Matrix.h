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
    ::ll::UntypedStorage<4, 64> mUnk4b6c4f;
    // NOLINTEND

public:
    // prevent constructor by default
    Matrix(Matrix const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C Matrix();

    MCNAPI explicit Matrix(::glm::qua<float> const& q);

    MCNAPI_C void mult(::Matrix const& rhs);

    MCNAPI_C void normalize();

    MCNAPI_C bool operator!=(::Matrix const& rhs) const;

    MCNAPI_C ::Matrix operator*(::Matrix const& matrix) const;

    MCNAPI_C ::glm::vec3 operator*(::glm::vec3 const& vec) const;

    MCNAPI_C ::Matrix& operator=(::Matrix const&);

    MCNAPI_C void rotate(float a, ::glm::vec3 const& axis);

    MCNAPI_C void rotate(float a, float x, float y, float z);

    MCNAPI_C void rotateXYZ(::Vec3 const& rotation);

    MCNAPI_C void scale(float x);

    MCNAPI_C void scale(float x, float y, float z);

    MCNAPI_C void setOrtho(float left, float right, float bottom, float top, float zNear, float zFar);

    MCNAPI_C void setPerspective(float fovyRadian, float aspect, float zNear, float zFar);

    MCNAPI_C void transform3(::glm::vec3& outVec) const;

    MCNAPI void transform3(::glm::vec3& outVec, float& outW) const;

    MCNAPI void translate(::glm::vec3 const& t);

    MCNAPI_C void translate(float x, float y, float z);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Matrix const& IDENTITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI void* $ctor(::glm::qua<float> const& q);
    // NOLINTEND
};
