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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
