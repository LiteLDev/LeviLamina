#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerRespawnState.h"

struct RespawnPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<1, 1, ::PlayerRespawnState> mState;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    // NOLINTEND

};
