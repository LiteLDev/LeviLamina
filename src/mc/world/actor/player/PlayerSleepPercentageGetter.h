#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/IPlayerSleepPercentageGetter.h"

class PlayerSleepPercentageGetter : public ::IPlayerSleepPercentageGetter {
public:
    // prevent constructor by default
    PlayerSleepPercentageGetter& operator=(PlayerSleepPercentageGetter const&);
    PlayerSleepPercentageGetter(PlayerSleepPercentageGetter const&);
    PlayerSleepPercentageGetter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayerSleepPercentageGetter@@UEAA@XZ
    virtual ~PlayerSleepPercentageGetter() = default;

    // vIndex: 1, symbol: ?getPlayerSleepPercentageGoal@PlayerSleepPercentageGetter@@UEBAMXZ
    virtual float getPlayerSleepPercentageGoal() const;

    // NOLINTEND
};
