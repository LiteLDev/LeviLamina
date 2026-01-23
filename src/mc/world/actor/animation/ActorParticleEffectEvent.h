#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ActorParticleEffect.h"

class ActorParticleEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::ActorParticleEffect> mParticleEffect;
    ::ll::TypedStorage<4, 4, float>                   mTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorParticleEffectEvent& operator=(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorParticleEffectEvent(::ActorParticleEffectEvent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorParticleEffectEvent&&);
    // NOLINTEND
};
