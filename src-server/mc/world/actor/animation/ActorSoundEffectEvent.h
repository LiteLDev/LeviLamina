#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ActorSoundEffect.h"

class ActorSoundEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ActorSoundEffect> mSoundEffect;
    ::ll::TypedStorage<4, 4, float> mTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSoundEffectEvent& operator=(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorSoundEffectEvent& operator=(::ActorSoundEffectEvent&&);
    // NOLINTEND

};
