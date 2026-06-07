#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeardKernel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::std::array<float, 13824> const> createBeardKernel();

    MCAPI static float getContribution(int dx, int dy, int dz);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
