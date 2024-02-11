#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {
public:
    // prevent constructor by default
    PlayerScoreboardId& operator=(PlayerScoreboardId const&);
    PlayerScoreboardId(PlayerScoreboardId const&);

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
