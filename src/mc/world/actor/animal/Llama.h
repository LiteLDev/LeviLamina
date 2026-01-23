#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

class Llama : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onFailedTame() /*override*/;

    virtual float causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual ~Llama() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onFailedTame();

    MCAPI float $causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
