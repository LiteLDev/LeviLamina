#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::std::array<float, 13824> const> createBeardKernel();

    MCAPI static float getContribution(int dx, int dy, int dz);
    // NOLINTEND
};
