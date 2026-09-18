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
#ifdef LL_PLAT_S
    MCFOLD float $getGravity();
#else // LL_PLAT_C
    MCAPI float $getGravity();
#endif

    MCFOLD float $getThrowPower();

    MCAPI float $getThrowUpAngleOffset();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
