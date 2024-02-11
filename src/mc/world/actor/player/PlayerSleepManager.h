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

    // vIndex: 1, symbol: ?updateSleepingPlayerList@PlayerSleepManager@@UEAAXXZ
    virtual void updateSleepingPlayerList();

    // symbol: ??0PlayerSleepManager@@QEAA@XZ
    MCAPI PlayerSleepManager();

    // symbol: ?getPlayerSleepStatus@PlayerSleepManager@@QEBAAEBUPlayerSleepStatus@@XZ
    MCAPI struct PlayerSleepStatus const& getPlayerSleepStatus() const;

    // symbol: ?setSleepStatus@PlayerSleepManager@@QEAAXAEBUPlayerSleepStatus@@@Z
    MCAPI void setSleepStatus(struct PlayerSleepStatus const&);

    // NOLINTEND
};
