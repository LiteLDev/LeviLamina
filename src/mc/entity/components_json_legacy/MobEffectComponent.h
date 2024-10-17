#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectComponent {
public:
    // prevent constructor by default
    MobEffectComponent& operator=(MobEffectComponent const&);
    MobEffectComponent(MobEffectComponent const&);

public:
    // NOLINTBEGIN
    MCAPI MobEffectComponent();

    MCAPI MobEffectComponent(class MobEffectComponent&&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag, class Actor const& owner) const;

    MCAPI class MobEffectComponent& operator=(class MobEffectComponent&&);

    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void tick(class Actor& owner);

    MCAPI ~MobEffectComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class MobEffectComponent&&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
