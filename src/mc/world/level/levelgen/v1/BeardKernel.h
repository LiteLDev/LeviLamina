#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // prevent constructor by default
    BeardKernel& operator=(BeardKernel const&);
    BeardKernel(BeardKernel const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BeardKernel@@QEAA@XZ
    MCAPI BeardKernel();

    // symbol: ?getContribution@BeardKernel@@QEBAMHHH@Z
    MCAPI float getContribution(int, int, int) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?createBeardKernel@BeardKernel@@AEAA?BV?$array@M$0DGAA@@std@@XZ
    MCAPI std::array<float, 13824> const createBeardKernel();

    // NOLINTEND
};
