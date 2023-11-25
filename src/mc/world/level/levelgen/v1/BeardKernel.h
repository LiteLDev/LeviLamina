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
    // symbol: ??0BeardKernel@@QEAA@XZ
    MCAPI BeardKernel();

    // symbol: ?getContribution@BeardKernel@@SAMHHH@Z
    MCAPI static float getContribution(int, int, int);

    // NOLINTEND
};
