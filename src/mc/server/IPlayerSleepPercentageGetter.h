#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPlayerSleepPercentageGetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerSleepPercentageGetter() = default;

    virtual float getPlayerSleepPercentageGoal() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
