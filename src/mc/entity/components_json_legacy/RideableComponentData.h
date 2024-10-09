#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RideableComponentData {
public:
    // prevent constructor by default
    RideableComponentData& operator=(RideableComponentData const&);
    RideableComponentData(RideableComponentData const&);
    RideableComponentData();

public:
    // NOLINTBEGIN
    MCAPI ~RideableComponentData();

    // NOLINTEND
};
