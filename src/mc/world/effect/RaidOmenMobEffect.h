#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class RaidOmenMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    RaidOmenMobEffect& operator=(RaidOmenMobEffect const&);
    RaidOmenMobEffect(RaidOmenMobEffect const&);
    RaidOmenMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RaidOmenMobEffect() = default;

    // vIndex: 1
    virtual void applyEffects(class Actor&, int, int) const;

    // vIndex: 3
    virtual void onEffectExpired(class Actor&) const;

    // NOLINTEND
};
