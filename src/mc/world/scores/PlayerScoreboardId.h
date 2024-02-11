#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {
public:
    int64 mActorUniqueId; // this+0x0
public:
    // NOLINTBEGIN
    // symbol: ??0PlayerScoreboardId@@QEAA@XZ
    MCAPI PlayerScoreboardId();

    // symbol: ??0PlayerScoreboardId@@QEAA@_J@Z
    MCAPI explicit PlayerScoreboardId(int64 actorUniqueId);

    // symbol: ?INVALID@PlayerScoreboardId@@2U1@B
    MCAPI static struct PlayerScoreboardId const INVALID;

    // NOLINTEND
};
