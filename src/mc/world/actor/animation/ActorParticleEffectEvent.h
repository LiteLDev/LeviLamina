#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorParticleEffectEvent {
public:
    // prevent constructor by default
    ActorParticleEffectEvent& operator=(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorParticleEffectEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
