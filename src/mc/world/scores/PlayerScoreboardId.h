#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> mActorUniqueId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerScoreboardId();

    MCAPI explicit PlayerScoreboardId(int64 actorUniqueId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PlayerScoreboardId const& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(int64 actorUniqueId);
    // NOLINTEND
};
