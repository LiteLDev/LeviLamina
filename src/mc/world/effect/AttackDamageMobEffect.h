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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AttackDamageMobEffect();

    // vIndex: 6, symbol: ?getAttributeModifierValue@AttackDamageMobEffect@@UEBAMHAEBVAttributeModifier@@@Z
    virtual float getAttributeModifierValue(int, class AttributeModifier const&) const;

    // symbol: ??0AttackDamageMobEffect@@QEAA@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NHH@Z
    MCAPI AttackDamageMobEffect(int, std::string const&, std::string const&, bool, int, int);

    // symbol: ?getDamageAfterDamageBoost@AttackDamageMobEffect@@SAMMH@Z
    MCAPI static float getDamageAfterDamageBoost(float, int);

    // symbol: ?getDamageAfterWeakness@AttackDamageMobEffect@@SAMMH@Z
    MCAPI static float getDamageAfterWeakness(float, int);

    // NOLINTEND
};
