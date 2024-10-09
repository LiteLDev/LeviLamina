#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class OozingMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    OozingMobEffect& operator=(OozingMobEffect const&);
    OozingMobEffect(OozingMobEffect const&);
    OozingMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OozingMobEffect() = default;

    // vIndex: 4
    virtual void onActorRemovedAfterDeath(class Actor& target, int amplifier) const;

    // NOLINTEND
};
