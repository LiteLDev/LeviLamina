#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConditionalBandwidthOptimization {
public:
    // prevent constructor by default
    ConditionalBandwidthOptimization(ConditionalBandwidthOptimization const&);
    ConditionalBandwidthOptimization();

public:
    // NOLINTBEGIN
    // symbol: ??4ConditionalBandwidthOptimization@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ConditionalBandwidthOptimization& operator=(struct ConditionalBandwidthOptimization&&);

    // symbol: ??4ConditionalBandwidthOptimization@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ConditionalBandwidthOptimization& operator=(struct ConditionalBandwidthOptimization const&);

    // symbol: ??1ConditionalBandwidthOptimization@@QEAA@XZ
    MCAPI ~ConditionalBandwidthOptimization();

    // NOLINTEND
};
