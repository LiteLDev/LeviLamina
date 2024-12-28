#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Matrix;
// clang-format on

class Quaternion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkc27771;
    // NOLINTEND

public:
    // prevent constructor by default
    Quaternion& operator=(Quaternion const&);
    Quaternion(Quaternion const&);
    Quaternion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Quaternion(::Matrix const& rot);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Matrix const& rot);
    // NOLINTEND
};
