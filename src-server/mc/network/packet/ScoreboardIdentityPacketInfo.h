#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"

struct ScoreboardIdentityPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    ::ll::TypedStorage<8, 8, ::PlayerScoreboardId> mPlayerId;
    // NOLINTEND

};
