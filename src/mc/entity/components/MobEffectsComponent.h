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
    // symbol: ??4MobEffectsComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct MobEffectsComponent& operator=(struct MobEffectsComponent&&);

    // symbol: ??1MobEffectsComponent@@QEAA@XZ
    MCAPI ~MobEffectsComponent();

    // NOLINTEND
};
