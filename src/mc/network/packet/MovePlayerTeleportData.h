#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovePlayerTeleportData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCause;
    ::ll::TypedStorage<4, 4, int> mSourceEntityType;
    // NOLINTEND
};
