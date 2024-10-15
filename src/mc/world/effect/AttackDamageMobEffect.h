#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class AttackDamageMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    AttackDamageMobEffect& operator=(AttackDamageMobEffect const&);
    AttackDamageMobEffect(AttackDamageMobEffect const&);
    AttackDamageMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AttackDamageMobEffect() = default;

    // vIndex: 8
    virtual float getAttributeModifierValue(int amplifier, class AttributeModifier const& modifier) const;

    MCAPI AttackDamageMobEffect(
        int                id,
        std::string const& resourceName,
        std::string const& locName,
        bool               isHarmful,
        int                color,
        int                icon
    );

    MCAPI static float getDamageAfterDamageBoost(float initialDamage, int count);

    MCAPI static float getDamageAfterWeakness(float initialDamage, int count);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void*
    ctor$(int id, std::string const& resourceName, std::string const& locName, bool isHarmful, int color, int icon);

    MCAPI float getAttributeModifierValue$(int amplifier, class AttributeModifier const& modifier) const;

    // NOLINTEND
};
