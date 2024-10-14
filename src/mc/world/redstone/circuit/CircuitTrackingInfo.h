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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
