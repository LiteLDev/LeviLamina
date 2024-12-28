#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorSoundEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk63d2f3;
    ::ll::UntypedStorage<4, 4>  mUnk61ed60;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSoundEffectEvent& operator=(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorSoundEffectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
