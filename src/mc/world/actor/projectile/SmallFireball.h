#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

class SmallFireball : public ::Fireball {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _hurt(::ActorDamageSource const&, float, bool, bool) /*override*/;

    virtual ~SmallFireball() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $_hurt(::ActorDamageSource const&, float, bool, bool);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
