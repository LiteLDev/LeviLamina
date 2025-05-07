#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

class InfestedMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void onActorHurt(::Actor& target, int amplifier, ::ActorDamageSource const& source, float damage) const
        /*override*/;

    // vIndex: 0
    virtual ~InfestedMobEffect() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActorHurt(::Actor& target, int amplifier, ::ActorDamageSource const& source, float damage) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
