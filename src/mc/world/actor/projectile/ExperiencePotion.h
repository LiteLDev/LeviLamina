#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/projectile/Throwable.h"

class ExperiencePotion : public ::Throwable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getGravity() /*override*/;

    virtual float getThrowPower() /*override*/;

    virtual float getThrowUpAngleOffset() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getGravity();

    MCNAPI float $getThrowPower();

    MCNAPI float $getThrowUpAngleOffset();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
