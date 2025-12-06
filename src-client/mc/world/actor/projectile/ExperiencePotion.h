#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/projectile/Throwable.h"

class ExperiencePotion : public ::Throwable {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 140
    virtual float getGravity() /*override*/;

    // vIndex: 138
    virtual float getThrowPower() /*override*/;

    // vIndex: 139
    virtual float getThrowUpAngleOffset() /*override*/;

    // vIndex: 8
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
