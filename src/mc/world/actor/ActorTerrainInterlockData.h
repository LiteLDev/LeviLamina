#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorTerrainInterlockData {
public:
    // ActorTerrainInterlockData inner types define
    enum class VisibilityState : uchar {
        InitialNotVisible            = 0,
        Visible                      = 1,
        DelayedDestructionNotVisible = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ActorTerrainInterlockData::VisibilityState> mRenderVisibilityState;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>      mCreationTime;
    ::ll::TypedStorage<1, 1, bool>                                         mHasBeenDelayedDeleted;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setCreationTime();
    // NOLINTEND
};
