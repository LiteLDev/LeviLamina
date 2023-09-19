#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScore {
public:
    // prevent constructor by default
    PlayerScore& operator=(PlayerScore const&);
    PlayerScore(PlayerScore const&);
    PlayerScore();

public:
    // NOLINTBEGIN
    // symbol: ?getId@PlayerScore@@QEBAAEBUScoreboardId@@XZ
    MCAPI struct ScoreboardId const& getId() const;

    // NOLINTEND
};
