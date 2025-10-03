#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/network/packet/PlayerActionType.h"

struct PlayerActionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPos;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mResultPos;
    ::ll::TypedStorage<4, 4, int>                     mFace;
    ::ll::TypedStorage<4, 4, ::PlayerActionType>      mAction;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>        mRuntimeId;
    ::ll::TypedStorage<1, 1, bool>                    mIsFromServerPlayerMovementSystem;
    // NOLINTEND
};
