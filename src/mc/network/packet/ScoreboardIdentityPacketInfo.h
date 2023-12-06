#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"

struct ScoreboardIdentityPacketInfo {
    ScoreboardId       mScoreboardId; // this+0x0
    PlayerScoreboardId mPlayerId;     // this+0x10
};
