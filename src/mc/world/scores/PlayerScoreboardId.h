#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {
public:
    int64 mActorUniqueId; // this+0x0
public:
    // NOLINTBEGIN
    MCAPI PlayerScoreboardId();

    MCAPI explicit PlayerScoreboardId(int64 actorUniqueId);

    MCAPI static struct PlayerScoreboardId const INVALID;

    // NOLINTEND
};
