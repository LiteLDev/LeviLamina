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
    // vIndex: 0
    virtual ~AbsorptionMobEffect() = default;

    // vIndex: 1
    virtual void applyEffects(class Actor& target, int durationTicks, int amplification) const;

    // vIndex: 2
    virtual void removeEffects(class BaseAttributeMap& attributeMapToRemoveFrom);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void applyEffects$(class Actor& target, int durationTicks, int amplification) const;

    MCAPI void removeEffects$(class BaseAttributeMap& attributeMapToRemoveFrom);

    // NOLINTEND
};
