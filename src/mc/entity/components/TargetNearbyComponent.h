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
    // symbol: ?getWasInsideRange@TargetNearbyComponent@@QEBA_NXZ
    MCAPI bool getWasInsideRange() const;

    // symbol: ?getWasOutsideRange@TargetNearbyComponent@@QEBA_NXZ
    MCAPI bool getWasOutsideRange() const;

    // symbol: ?getWasSeenLastTick@TargetNearbyComponent@@QEBA_NXZ
    MCAPI bool getWasSeenLastTick() const;

    // symbol: ?setPreviousDistance@TargetNearbyComponent@@QEAAXM@Z
    MCAPI void setPreviousDistance(float distance);

    // symbol: ?setWasInsideRange@TargetNearbyComponent@@QEAAX_N@Z
    MCAPI void setWasInsideRange(bool wasInside);

    // symbol: ?setWasOutsideRange@TargetNearbyComponent@@QEAAX_N@Z
    MCAPI void setWasOutsideRange(bool wasOutside);

    // symbol: ?setWasSeenLastTick@TargetNearbyComponent@@QEAAX_N@Z
    MCAPI void setWasSeenLastTick(bool wasSeen);

    // NOLINTEND
};
