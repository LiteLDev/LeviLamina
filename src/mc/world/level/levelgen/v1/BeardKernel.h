#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::std::array<float, 13824> const> createBeardKernel();

    MCNAPI static float getContribution(int dx, int dy, int dz);
    // NOLINTEND
};
