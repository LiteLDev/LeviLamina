#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

class ActorSoundEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mSoundEffectName;
    ::ll::TypedStorage<8, 48, ::HashedString> mLocatorName;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSoundEffect& operator=(ActorSoundEffect const&);
    ActorSoundEffect(ActorSoundEffect const&);
    ActorSoundEffect();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ActorSoundEffect& operator=(::ActorSoundEffect&&);

    MCAPI ~ActorSoundEffect();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
