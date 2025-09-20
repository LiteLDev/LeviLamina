#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"

struct LevelSoundEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                         mActorIdentifier;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mActor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mEventId;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPos;
    ::ll::TypedStorage<4, 4, int>                                    mData;
    ::ll::TypedStorage<1, 1, bool>                                   mIsGlobal;
    ::ll::TypedStorage<1, 1, bool>                                   mIsBaby;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundEventPacketPayload(LevelSoundEventPacketPayload const&);
    LevelSoundEventPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::LevelSoundEventPacketPayload& operator=(::LevelSoundEventPacketPayload const&);

    MCAPI ::LevelSoundEventPacketPayload& operator=(::LevelSoundEventPacketPayload&&);

    MCAPI ~LevelSoundEventPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
