#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerSleepManager {
public:
    // prevent constructor by default
    PlayerSleepManager& operator=(PlayerSleepManager const&);
    PlayerSleepManager(PlayerSleepManager const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?updateSleepingPlayerList@PlayerSleepManager@@UEAAXM@Z
    virtual void updateSleepingPlayerList(float);

    // symbol: ??1PlayerSleepManager@@UEAA@XZ
    MCVAPI ~PlayerSleepManager();

    // symbol: ??0PlayerSleepManager@@QEAA@XZ
    MCAPI PlayerSleepManager();

    // NOLINTEND
};
