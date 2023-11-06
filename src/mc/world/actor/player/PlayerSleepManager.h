#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerSleepManager {
public:
    // prevent constructor by default
    PlayerSleepManager& operator=(PlayerSleepManager const&);
    PlayerSleepManager(PlayerSleepManager const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerSleepManager@@UEAA@XZ
    virtual ~PlayerSleepManager();

    // vIndex: 1, symbol: ?updateSleepingPlayerList@PlayerSleepManager@@UEAAXM@Z
    virtual void updateSleepingPlayerList(float);

    // symbol: ??0PlayerSleepManager@@QEAA@XZ
    MCAPI PlayerSleepManager();

    // NOLINTEND
};
