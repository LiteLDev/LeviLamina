#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorParticleEffect {
public:
    // prevent constructor by default
    ActorParticleEffect& operator=(ActorParticleEffect const&);
    ActorParticleEffect(ActorParticleEffect const&);

public:
    // NOLINTBEGIN
    MCAPI ActorParticleEffect();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
