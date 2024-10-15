#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Quaternion {
public:
    // prevent constructor by default
    Quaternion& operator=(Quaternion const&);
    Quaternion(Quaternion const&);
    Quaternion();

public:
    // NOLINTBEGIN
    MCAPI explicit Quaternion(class Matrix const& rot);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Matrix const& rot);

    // NOLINTEND
};
