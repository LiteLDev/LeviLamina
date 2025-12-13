#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct EffectDuration;
// clang-format on

class RaidOmenMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const /*override*/;

    virtual void onEffectExpired(::Actor& target) const /*override*/;

    virtual ~RaidOmenMobEffect() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    MCAPI void $onEffectExpired(::Actor& target) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
