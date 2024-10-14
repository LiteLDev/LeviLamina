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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static struct PlayerScoreboardId const& INVALID();

    // NOLINTEND
};
