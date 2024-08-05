#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConditionalBandwidthOptimization {
public:
    // prevent constructor by default
    ConditionalBandwidthOptimization(ConditionalBandwidthOptimization const&);
    ConditionalBandwidthOptimization();

public:
    // NOLINTBEGIN
    MCAPI struct ConditionalBandwidthOptimization& operator=(struct ConditionalBandwidthOptimization&&);

    MCAPI struct ConditionalBandwidthOptimization& operator=(struct ConditionalBandwidthOptimization const&);

    MCAPI ~ConditionalBandwidthOptimization();

    // NOLINTEND
};
