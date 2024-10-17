#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TickMobEffectsSystem {

struct RemoveMobEffectsRequestComponent {
public:
    // prevent constructor by default
    RemoveMobEffectsRequestComponent& operator=(RemoveMobEffectsRequestComponent const&);
    RemoveMobEffectsRequestComponent(RemoveMobEffectsRequestComponent const&);
    RemoveMobEffectsRequestComponent();

public:
    // NOLINTBEGIN
    MCAPI struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent&
    operator=(struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent&&);

    MCAPI ~RemoveMobEffectsRequestComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace TickMobEffectsSystem
