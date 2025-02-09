#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComparisonEventingCapComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mAllowedPlayerActionEventTriggers;
    ::ll::TypedStorage<8, 8, uint64> mAllowedVehiclePositionEventTriggers;
    // NOLINTEND
};
