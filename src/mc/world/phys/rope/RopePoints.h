#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RopePoints {
public:
    // prevent constructor by default
    RopePoints& operator=(RopePoints const&);
    RopePoints(RopePoints const&);
    RopePoints();

public:
    // NOLINTBEGIN
    MCAPI ~RopePoints();

    // NOLINTEND
};
