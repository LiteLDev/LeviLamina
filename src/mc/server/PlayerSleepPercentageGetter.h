#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IPlayerSleepPercentageGetter.h"

class PlayerSleepPercentageGetter : public ::IPlayerSleepPercentageGetter {
public:
    // prevent constructor by default
    PlayerSleepPercentageGetter& operator=(PlayerSleepPercentageGetter const&);
    PlayerSleepPercentageGetter(PlayerSleepPercentageGetter const&);
    PlayerSleepPercentageGetter();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerSleepPercentageGetter() = default;

    // vIndex: 1
    virtual float getPlayerSleepPercentageGoal() const;

    // NOLINTEND
};
