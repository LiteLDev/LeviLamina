#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Zombie.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

class Frostbite : public ::Zombie {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void die(::ActorDamageSource const& source) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $die(::ActorDamageSource const& source);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
