#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayerIDs {
public:
    // prevent constructor by default
    PlayerIDs& operator=(PlayerIDs const&);
    PlayerIDs(PlayerIDs const&);
    PlayerIDs();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerIDs();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Social
