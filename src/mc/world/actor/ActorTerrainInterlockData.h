#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorTerrainInterlockData {
public:
    // prevent constructor by default
    ActorTerrainInterlockData& operator=(ActorTerrainInterlockData const&);
    ActorTerrainInterlockData(ActorTerrainInterlockData const&);
    ActorTerrainInterlockData();

public:
    // NOLINTBEGIN
    MCAPI void setCreationTime();

    // NOLINTEND
};
