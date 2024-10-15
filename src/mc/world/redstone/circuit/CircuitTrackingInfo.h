#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitTrackingInfo {
public:
    // prevent constructor by default
    CircuitTrackingInfo& operator=(CircuitTrackingInfo const&);
    CircuitTrackingInfo(CircuitTrackingInfo const&);
    CircuitTrackingInfo();

public:
    // NOLINTBEGIN
    MCAPI CircuitTrackingInfo(gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, int);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, int);

    // NOLINTEND
};
