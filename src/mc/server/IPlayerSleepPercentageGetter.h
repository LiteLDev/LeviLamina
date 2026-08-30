#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPlayerSleepPercentageGetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerSleepPercentageGetter();

    virtual float getPlayerSleepPercentageGoal() const = 0;
    // NOLINTEND
};
