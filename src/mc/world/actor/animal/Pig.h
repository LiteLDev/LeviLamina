#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

class Pig : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite) /*override*/;

    virtual ~Pig() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
