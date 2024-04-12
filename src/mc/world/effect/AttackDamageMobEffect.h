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
    // vIndex: 0, symbol: __gen_??1AttackDamageMobEffect@@UEAA@XZ
    virtual ~AttackDamageMobEffect() = default;

    // vIndex: 6, symbol: ?getAttributeModifierValue@AttackDamageMobEffect@@UEBAMHAEBVAttributeModifier@@@Z
    virtual float getAttributeModifierValue(int amplifier, class AttributeModifier const& modifier) const;

    // symbol: ??0AttackDamageMobEffect@@QEAA@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NHH@Z
    MCAPI AttackDamageMobEffect(
        int                id,
        std::string const& resourceName,
        std::string const& locName,
        bool               isHarmful,
        int                color,
        int                icon
    );

    // symbol: ?getDamageAfterDamageBoost@AttackDamageMobEffect@@SAMMH@Z
    MCAPI static float getDamageAfterDamageBoost(float initialDamage, int count);

    // symbol: ?getDamageAfterWeakness@AttackDamageMobEffect@@SAMMH@Z
    MCAPI static float getDamageAfterWeakness(float initialDamage, int count);

    // NOLINTEND
};
