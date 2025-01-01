#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    const std::array<float, 13824UL> mKernel;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeardKernel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float getContribution(int dx, int dy, int dz);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
