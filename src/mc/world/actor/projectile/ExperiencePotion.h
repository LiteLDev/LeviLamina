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

    virtual ~ExperiencePotion() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD float $getGravity();

    MCFOLD float $getThrowPower();

    MCAPI float $getThrowUpAngleOffset();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
