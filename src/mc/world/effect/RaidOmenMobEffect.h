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
    // vIndex: 0, symbol: __gen_??1RaidOmenMobEffect@@UEAA@XZ
    virtual ~RaidOmenMobEffect() = default;

    // vIndex: 1, symbol: ?applyEffects@RaidOmenMobEffect@@UEBAXAEAVActor@@HH@Z
    virtual void applyEffects(class Actor&, int, int) const;

    // vIndex: 3, symbol: ?onEffectExpired@RaidOmenMobEffect@@UEBAXAEAVActor@@@Z
    virtual void onEffectExpired(class Actor&) const;

    // NOLINTEND
};
