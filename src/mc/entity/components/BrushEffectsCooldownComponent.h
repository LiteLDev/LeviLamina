#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrushEffectsCooldownComponent {
public:
    // prevent constructor by default
    BrushEffectsCooldownComponent& operator=(BrushEffectsCooldownComponent const&);
    BrushEffectsCooldownComponent(BrushEffectsCooldownComponent const&);
    BrushEffectsCooldownComponent();

    // private:
    // NOLINTBEGIN
    MCAPI static class ExpiringTick const EXPIRED_TICK;

    // NOLINTEND
};
