#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
struct EffectDuration;
// clang-format on

class FreezingMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const /*override*/;

    virtual void onActorHurt(::Actor& target, int, ::ActorDamageSource const&, float) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    MCNAPI void $onActorHurt(::Actor& target, int, ::ActorDamageSource const&, float) const;


    // NOLINTEND
};
