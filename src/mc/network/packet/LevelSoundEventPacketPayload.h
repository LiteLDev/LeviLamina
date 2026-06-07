#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
// clang-format on

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
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>               mFireAtPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundEventPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSoundEventPacketPayload(
        ::SharedTypes::Legacy::LevelSoundEvent id,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

    MCAPI ~LevelSoundEventPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SharedTypes::Legacy::LevelSoundEvent id,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
