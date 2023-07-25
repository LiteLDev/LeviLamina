#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrushEffectsCooldownComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRUSHEFFECTSCOOLDOWNCOMPONENT
public:
    BrushEffectsCooldownComponent& operator=(BrushEffectsCooldownComponent const&) = delete;
    BrushEffectsCooldownComponent(BrushEffectsCooldownComponent const&)            = delete;
    BrushEffectsCooldownComponent()                                                = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?EXPIRED_TICK\@BrushEffectsCooldownComponent\@\@0VExpiringTick\@\@B
     */
    MCAPI static class ExpiringTick const EXPIRED_TICK;
};
