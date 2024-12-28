#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsSolidMobNearbyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnka03654;
    ::ll::UntypedStorage<8, 64> mUnkdcfcb3;
    // NOLINTEND

public:
    // prevent constructor by default
    IsSolidMobNearbyComponent& operator=(IsSolidMobNearbyComponent const&);
    IsSolidMobNearbyComponent(IsSolidMobNearbyComponent const&);
    IsSolidMobNearbyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IsSolidMobNearbyComponent(::IsSolidMobNearbyComponent&&);

    MCAPI ::IsSolidMobNearbyComponent& operator=(::IsSolidMobNearbyComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IsSolidMobNearbyComponent&&);
    // NOLINTEND
};
