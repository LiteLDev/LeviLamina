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
    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~Pig() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
