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

    // vIndex: 1, symbol: ?updateSleepingPlayerList@PlayerSleepManager@@UEAAXXZ
    virtual void updateSleepingPlayerList();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // symbol: ??1PlayerSleepManager@@UEAA@XZ
    MCVAPI ~PlayerSleepManager();

    // symbol: ??0PlayerSleepManager@@QEAA@XZ
    MCAPI PlayerSleepManager();

    // symbol: ?getPlayerSleepStatus@PlayerSleepManager@@QEBAAEBUPlayerSleepStatus@@XZ
    MCAPI struct PlayerSleepStatus const& getPlayerSleepStatus() const;

    // symbol: ?initializeWithGameplayUserManager@PlayerSleepManager@@QEAAXAEAVGameplayUserManager@@@Z
    MCAPI void initializeWithGameplayUserManager(class GameplayUserManager&);

    // symbol: ?setSleepStatus@PlayerSleepManager@@QEAAXAEBUPlayerSleepStatus@@@Z
    MCAPI void setSleepStatus(struct PlayerSleepStatus const&);

    // NOLINTEND
};
