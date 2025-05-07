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
    MCNAPI explicit Matrix(::glm::qua<float> const& q);

    MCNAPI void transform3(::glm::vec3& outVec, float& outW) const;

    MCNAPI void translate(float x, float y, float z);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Matrix const& IDENTITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::glm::qua<float> const& q);
    // NOLINTEND
};
