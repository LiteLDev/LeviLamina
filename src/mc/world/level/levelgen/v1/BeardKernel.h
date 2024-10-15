#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    const std::array<float, 13824UL> mKernel;

    // prevent constructor by default
    BeardKernel& operator=(BeardKernel const&);
    BeardKernel(BeardKernel const&);

public:
    // NOLINTBEGIN
    MCAPI BeardKernel();

    MCAPI static float getContribution(int dx, int dy, int dz);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
