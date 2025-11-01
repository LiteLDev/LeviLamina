#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/world/level/GameType.h"

struct UpdatePlayerGameTypePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameType> mPlayerGameType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mTargetPlayer;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick> mTick;
    // NOLINTEND

};
