#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Matrix {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnk4b6c4f;
    // NOLINTEND

public:
    // prevent constructor by default
    Matrix& operator=(Matrix const&);
    Matrix(Matrix const&);
    Matrix();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Matrix(::glm::qua<float> const& q);

    MCAPI void transform3(::glm::vec3& outVec, float& outW) const;

    MCAPI void translate(::glm::vec3 const& t);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Matrix const& IDENTITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::glm::qua<float> const& q);
    // NOLINTEND
};
