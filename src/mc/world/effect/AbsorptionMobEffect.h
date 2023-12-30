#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class AbsorptionMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    AbsorptionMobEffect& operator=(AbsorptionMobEffect const&);
    AbsorptionMobEffect(AbsorptionMobEffect const&);
    AbsorptionMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AbsorptionMobEffect@@UEAA@XZ
    virtual ~AbsorptionMobEffect() = default;

    // vIndex: 1, symbol: ?applyEffects@AbsorptionMobEffect@@UEBAXPEAVActor@@HH@Z
    virtual void applyEffects(class Actor* target, int durationTicks, int amplification) const;

    // vIndex: 2, symbol: ?removeEffects@AbsorptionMobEffect@@UEAAXPEAVActor@@@Z
    virtual void removeEffects(class Actor* target);

    // NOLINTEND
};
