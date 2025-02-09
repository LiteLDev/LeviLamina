#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorSoundEffect;
// clang-format on

class ActorSoundEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ActorSoundEffect> mSoundEffect;
    ::ll::TypedStorage<4, 4, float>               mTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorSoundEffectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
