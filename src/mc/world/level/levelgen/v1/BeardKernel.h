#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // prevent constructor by default
    BeardKernel& operator=(BeardKernel const&);
    BeardKernel(BeardKernel const&);

public:
    // NOLINTBEGIN
    MCAPI BeardKernel();

    MCAPI static float getContribution(int, int, int);

    // NOLINTEND
};
