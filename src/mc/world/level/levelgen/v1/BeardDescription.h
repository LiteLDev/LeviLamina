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
    MCAPI BeardDescription(class BeardingDescriptionCache cache, struct BeardKernel const& beardKernel);

    MCAPI float calculateContribution(class BlockPos const& pos) const;

    // NOLINTEND
};
