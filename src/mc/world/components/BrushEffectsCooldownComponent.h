#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrushEffectsCooldownComponent {
public:
    // prevent constructor by default
    BrushEffectsCooldownComponent& operator=(BrushEffectsCooldownComponent const&) = delete;
    BrushEffectsCooldownComponent(BrushEffectsCooldownComponent const&)            = delete;
    BrushEffectsCooldownComponent()                                                = delete;

private:
    // NOLINTBEGIN
    // symbol: ?EXPIRED_TICK@BrushEffectsCooldownComponent@@0VExpiringTick@@B
    MCAPI static class ExpiringTick const EXPIRED_TICK;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $EXPIRED_TICK() { return EXPIRED_TICK; }

    // NOLINTEND
};
