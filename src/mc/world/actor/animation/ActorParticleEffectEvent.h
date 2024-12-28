#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorParticleEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mUnk82bf58;
    ::ll::UntypedStorage<4, 4>   mUnk16e07b;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorParticleEffectEvent& operator=(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorParticleEffectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
