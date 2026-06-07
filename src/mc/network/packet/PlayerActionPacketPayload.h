#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/world/level/BlockPos.h"

struct PlayerActionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>        mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>        mResultPos;
    ::ll::TypedStorage<4, 4, int>                mFace;
    ::ll::TypedStorage<4, 4, ::PlayerActionType> mAction;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>   mRuntimeId;
    ::ll::TypedStorage<1, 1, bool>               mIsFromServerPlayerMovementSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerActionPacketPayload(::PlayerActionType action, ::ActorRuntimeID runtimeId);

#ifdef LL_PLAT_C
    MCAPI PlayerActionPacketPayload(::PlayerActionType action, int data, ::ActorRuntimeID runtimeId);
#endif

    MCAPI PlayerActionPacketPayload(::PlayerActionType action, ::BlockPos const& pos, ::ActorRuntimeID runtimeId);

    MCAPI
    PlayerActionPacketPayload(::PlayerActionType action, ::BlockPos const& pos, int data, ::ActorRuntimeID runtimeId);

    MCAPI
    PlayerActionPacketPayload(::PlayerActionType action, ::BlockPos const& pos, uchar face, ::ActorRuntimeID runtimeId);

    MCAPI PlayerActionPacketPayload(
        ::PlayerActionType action,
        ::BlockPos const&  pos,
        ::BlockPos const&  resultPos,
        int                data,
        ::ActorRuntimeID   runtimeId
    );

    MCFOLD bool getIsFromServerPlayerMovementSystem() const;

    MCFOLD void setFromServerPlayerMovementSystem(bool value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerActionType action, ::ActorRuntimeID runtimeId);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::PlayerActionType action, int data, ::ActorRuntimeID runtimeId);
#endif

    MCAPI void* $ctor(::PlayerActionType action, ::BlockPos const& pos, ::ActorRuntimeID runtimeId);

    MCAPI void* $ctor(::PlayerActionType action, ::BlockPos const& pos, int data, ::ActorRuntimeID runtimeId);

    MCAPI void* $ctor(::PlayerActionType action, ::BlockPos const& pos, uchar face, ::ActorRuntimeID runtimeId);

    MCAPI void* $ctor(
        ::PlayerActionType action,
        ::BlockPos const&  pos,
        ::BlockPos const&  resultPos,
        int                data,
        ::ActorRuntimeID   runtimeId
    );
    // NOLINTEND
};
