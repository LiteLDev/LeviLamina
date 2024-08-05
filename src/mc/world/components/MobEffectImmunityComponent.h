#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobEffectImmunityComponent {
public:
    // prevent constructor by default
    MobEffectImmunityComponent& operator=(MobEffectImmunityComponent const&);
    MobEffectImmunityComponent(MobEffectImmunityComponent const&);
    MobEffectImmunityComponent();

public:
    // NOLINTBEGIN
    MCAPI struct MobEffectImmunityComponent& operator=(struct MobEffectImmunityComponent&&);

    // NOLINTEND
};
