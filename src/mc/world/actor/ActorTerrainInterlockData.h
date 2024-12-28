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
    ::ll::UntypedStorage<1, 1> mUnk778fb2;
    ::ll::UntypedStorage<8, 8> mUnkfb4f13;
    ::ll::UntypedStorage<1, 1> mUnk9605eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorTerrainInterlockData& operator=(ActorTerrainInterlockData const&);
    ActorTerrainInterlockData(ActorTerrainInterlockData const&);
    ActorTerrainInterlockData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setCreationTime();
    // NOLINTEND
};
