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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
