#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // prevent constructor by default
    BeardKernel& operator=(BeardKernel const&);
    BeardKernel(BeardKernel const&);

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
