#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/sound/SoundEventIdentifier.h"

struct LevelSoundEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mActorIdentifier;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>          mActor;
    ::ll::TypedStorage<8, 40, ::SoundEventIdentifier>  mSoundEvent;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mPos;
    ::ll::TypedStorage<4, 4, int>                      mData;
    ::ll::TypedStorage<1, 1, bool>                     mIsGlobal;
    ::ll::TypedStorage<1, 1, bool>                     mIsBaby;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mFireAtPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundEventPacketPayload& operator=(LevelSoundEventPacketPayload const&);
    LevelSoundEventPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSoundEventPacketPayload(::LevelSoundEventPacketPayload const&);

    MCAPI ~LevelSoundEventPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelSoundEventPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
