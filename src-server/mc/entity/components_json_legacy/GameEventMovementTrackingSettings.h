#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventMovementTrackingSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEmitMove;
    ::ll::TypedStorage<1, 1, bool> mEmitSwim;
    ::ll::TypedStorage<1, 1, bool> mEmitFlap;
    // NOLINTEND

};
