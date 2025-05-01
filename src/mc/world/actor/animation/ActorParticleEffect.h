#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorParticleEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk24c8e5;
    ::ll::UntypedStorage<8, 48>  mUnkf336e5;
    ::ll::UntypedStorage<8, 216> mUnke3c0a6;
    ::ll::UntypedStorage<1, 1>   mUnkaa1bb5;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorParticleEffect& operator=(ActorParticleEffect const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorParticleEffect();

    MCNAPI ActorParticleEffect(::ActorParticleEffect const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ActorParticleEffect const&);
    // NOLINTEND
};
