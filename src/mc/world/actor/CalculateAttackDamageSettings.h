#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CalculateAttackDamageSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mBonusDamage;
    ::ll::TypedStorage<1, 1, bool>  mApplyAttributes;
    ::ll::TypedStorage<1, 1, bool>  mApplyCarriedItemBonus;
    ::ll::TypedStorage<1, 1, bool>  mApplyCarriedItemEnchantBonus;
    ::ll::TypedStorage<1, 1, bool>  mApplyMobEffects;
    // NOLINTEND
};
