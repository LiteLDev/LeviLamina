#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

class Breeze : public ::Monster {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 92
    virtual float causeFallDamageToActor(float fallDistance, float, ::ActorDamageSource) /*override*/;

    // vIndex: 8
    virtual ~Breeze() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $causeFallDamageToActor(float fallDistance, float, ::ActorDamageSource);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
