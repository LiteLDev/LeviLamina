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
    MCAPI PlayerScore(struct ScoreboardId const& id, int score);

    MCAPI struct ScoreboardId const& getId() const;

    // NOLINTEND
};
