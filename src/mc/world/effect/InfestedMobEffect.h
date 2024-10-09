#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class InfestedMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    InfestedMobEffect& operator=(InfestedMobEffect const&);
    InfestedMobEffect(InfestedMobEffect const&);
    InfestedMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InfestedMobEffect() = default;

    // vIndex: 5
    virtual void
    onActorHurt(class Actor& target, int amplifier, class ActorDamageSource const& source, float damage) const;

    // NOLINTEND
};
