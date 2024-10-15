#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionStateComponent {
public:
    // DimensionStateComponent inner types define
    enum class DimensionState {};

public:
    // prevent constructor by default
    DimensionStateComponent& operator=(DimensionStateComponent const&);
    DimensionStateComponent(DimensionStateComponent const&);
    DimensionStateComponent();

public:
    // NOLINTBEGIN
    MCAPI explicit DimensionStateComponent(std::chrono::steady_clock::time_point loadIntoDimensionTimeout);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::chrono::steady_clock::time_point loadIntoDimensionTimeout);

    // NOLINTEND
};
