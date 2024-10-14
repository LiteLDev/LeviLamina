#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobEffectsComponent {
public:
    // prevent constructor by default
    MobEffectsComponent& operator=(MobEffectsComponent const&);
    MobEffectsComponent(MobEffectsComponent const&);
    MobEffectsComponent();

public:
    // NOLINTBEGIN
    MCAPI struct MobEffectsComponent& operator=(struct MobEffectsComponent&&);

    MCAPI ~MobEffectsComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
