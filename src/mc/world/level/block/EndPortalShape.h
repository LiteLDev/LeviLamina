#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EndPortalShape {
public:
    // prevent constructor by default
    EndPortalShape& operator=(EndPortalShape const&);
    EndPortalShape(EndPortalShape const&);
    EndPortalShape();

public:
    // NOLINTBEGIN
    // symbol: ??0EndPortalShape@@QEAA@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI EndPortalShape(class BlockSource& region, class BlockPos pos);

    // symbol: ?isValid@EndPortalShape@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool isValid(class BlockSource& region);

    // symbol: ??1EndPortalShape@@QEAA@XZ
    MCAPI ~EndPortalShape();

    // NOLINTEND
};
