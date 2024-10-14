#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorSoundEffectEvent {
public:
    // prevent constructor by default
    ActorSoundEffectEvent& operator=(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorSoundEffectEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
