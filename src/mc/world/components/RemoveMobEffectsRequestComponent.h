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
    // symbol: ??4RemoveMobEffectsRequestComponent@TickMobEffectsSystem@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent&
    operator=(struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent&&);

    // symbol: ??1RemoveMobEffectsRequestComponent@TickMobEffectsSystem@@QEAA@XZ
    MCAPI ~RemoveMobEffectsRequestComponent();

    // NOLINTEND
};

}; // namespace TickMobEffectsSystem
