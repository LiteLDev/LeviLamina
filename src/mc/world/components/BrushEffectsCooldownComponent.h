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
    // symbol: ?EXPIRED_TICK@BrushEffectsCooldownComponent@@0VExpiringTick@@B
    MCAPI static class ExpiringTick const EXPIRED_TICK;

    // NOLINTEND
};
