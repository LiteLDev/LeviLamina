#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeardDescription {
public:
    // prevent constructor by default
    BeardDescription& operator=(BeardDescription const&);
    BeardDescription(BeardDescription const&);
    BeardDescription();

public:
    // NOLINTBEGIN
    // symbol: ??0BeardDescription@@QEAA@VBeardingDescriptionCache@@AEBUBeardKernel@@@Z
    MCAPI BeardDescription(class BeardingDescriptionCache cache, struct BeardKernel const&);

    // symbol: ?calculateContribution@BeardDescription@@QEBAMAEBVBlockPos@@@Z
    MCAPI float calculateContribution(class BlockPos const& pos) const;

    // NOLINTEND
};
