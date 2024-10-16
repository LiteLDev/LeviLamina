#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class WeavingMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    WeavingMobEffect& operator=(WeavingMobEffect const&);
    WeavingMobEffect(WeavingMobEffect const&);
    WeavingMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeavingMobEffect() = default;

    // vIndex: 4
    virtual void onActorRemovedAfterDeath(class Actor& target, int amplifier) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void onActorRemovedAfterDeath$(class Actor& target, int amplifier) const;

    MCAPI static class Vec3 const& COBWEB_SLOWDOWN_OVERRIDE();

    // NOLINTEND
};
