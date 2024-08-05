#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetNearbyComponent {
public:
    // prevent constructor by default
    TargetNearbyComponent& operator=(TargetNearbyComponent const&);
    TargetNearbyComponent(TargetNearbyComponent const&);
    TargetNearbyComponent();

public:
    // NOLINTBEGIN
    MCAPI bool getWasInsideRange() const;

    MCAPI bool getWasOutsideRange() const;

    MCAPI bool getWasSeenLastTick() const;

    MCAPI void setPreviousDistance(float distance);

    MCAPI void setWasInsideRange(bool wasInside);

    MCAPI void setWasOutsideRange(bool wasOutside);

    MCAPI void setWasSeenLastTick(bool wasSeen);

    // NOLINTEND
};
