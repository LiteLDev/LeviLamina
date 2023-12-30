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
    // symbol: ??0CircuitTrackingInfo@@QEAA@V?$not_null@PEAVBaseCircuitComponent@@@gsl@@AEBVBlockPos@@H@Z
    MCAPI
    CircuitTrackingInfo(gsl::not_null<class BaseCircuitComponent*> component, class BlockPos const& pos, int dampening);

    // NOLINTEND
};
