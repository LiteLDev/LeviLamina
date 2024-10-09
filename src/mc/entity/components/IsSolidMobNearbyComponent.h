#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsSolidMobNearbyComponent {
public:
    // prevent constructor by default
    IsSolidMobNearbyComponent& operator=(IsSolidMobNearbyComponent const&);
    IsSolidMobNearbyComponent();

public:
    // NOLINTBEGIN
    MCAPI IsSolidMobNearbyComponent(struct IsSolidMobNearbyComponent&&);

    MCAPI IsSolidMobNearbyComponent(struct IsSolidMobNearbyComponent const&);

    MCAPI struct IsSolidMobNearbyComponent& operator=(struct IsSolidMobNearbyComponent&&);

    // NOLINTEND
};
