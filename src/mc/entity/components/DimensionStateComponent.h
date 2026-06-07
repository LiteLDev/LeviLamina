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

public:
    // prevent constructor by default
    DimensionStateComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DimensionStateComponent(::std::chrono::steady_clock::time_point loadIntoDimensionTimeout);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::chrono::steady_clock::time_point loadIntoDimensionTimeout);
    // NOLINTEND
};
