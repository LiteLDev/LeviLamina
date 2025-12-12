#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayerDimensionWaitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mWaitingForServerDimensionChangeAcknowledgment;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mServerDimensionChangeTimer;
    // NOLINTEND
};
