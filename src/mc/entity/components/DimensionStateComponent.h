#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionStateComponent {
public:
    // DimensionStateComponent inner types define
    enum class DimensionState : int {
        Ready                 = 0,
        Pending               = 1,
        WaitingServerResponse = 2,
        WaitingArea           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionStateComponent::DimensionState> mDimensionState;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>   mLoadIntoDimensionTimeout;
    // NOLINTEND
};
