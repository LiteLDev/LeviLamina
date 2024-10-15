#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {
public:
    // prevent constructor by default
    PlayerScoreboardId& operator=(PlayerScoreboardId const&);
    PlayerScoreboardId(PlayerScoreboardId const&);

public:
    // NOLINTBEGIN
    MCAPI PlayerScoreboardId();

    MCAPI explicit PlayerScoreboardId(int64 actorUniqueId);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(int64 actorUniqueId);

    MCAPI static struct PlayerScoreboardId const& INVALID();

    // NOLINTEND
};
