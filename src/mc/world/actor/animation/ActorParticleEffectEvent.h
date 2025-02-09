#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorParticleEffect;
// clang-format on

class ActorParticleEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ActorParticleEffect> mParticleEffect;
    ::ll::TypedStorage<4, 4, float>                   mTime;
    // NOLINTEND

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
