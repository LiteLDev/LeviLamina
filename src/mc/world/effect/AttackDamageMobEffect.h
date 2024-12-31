#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class AttributeModifier;
// clang-format on

class AttackDamageMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    AttackDamageMobEffect& operator=(AttackDamageMobEffect const&);
    AttackDamageMobEffect(AttackDamageMobEffect const&);
    AttackDamageMobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual float getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const /*override*/;

    // vIndex: 0
    virtual ~AttackDamageMobEffect() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float getDamageAfterDamageBoost(float initialDamage, int count);

    MCAPI static float getDamageAfterWeakness(float initialDamage, int count);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
