#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientTerrainPixel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mPixel;
    ::ll::TypedStorage<1, 1, bool> mAssignedToMap;
    ::ll::TypedStorage<1, 1, bool> mSentToServer;
    // NOLINTEND
};
