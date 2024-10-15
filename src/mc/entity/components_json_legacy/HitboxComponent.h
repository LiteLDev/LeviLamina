#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HitboxComponent {
public:
    // prevent constructor by default
    HitboxComponent& operator=(HitboxComponent const&);
    HitboxComponent();

public:
    // NOLINTBEGIN
    MCAPI HitboxComponent(class HitboxComponent const&);

    MCAPI void addAdditionalSaveData(class CompoundTag&) const;

    MCAPI void fromCompoundTag(class CompoundTag const& tag);

    MCAPI class HitboxComponent& operator=(class HitboxComponent&&);

    MCAPI void toCompoundTag(class CompoundTag& tag);

    MCAPI ~HitboxComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class HitboxComponent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
