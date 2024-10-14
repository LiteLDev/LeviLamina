#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {
public:
    int64 mActorUniqueId; // this+0x0
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
