#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickTimeManager {
public:
    // prevent constructor by default
    TickTimeManager& operator=(TickTimeManager const&);
    TickTimeManager(TickTimeManager const&);
    TickTimeManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0TickTimeManager@@QEAA@_NV?$unique_ptr@VITickTimeManagerProxy@@U?$default_delete@VITickTimeManagerProxy@@@std@@@std@@@Z
    MCAPI TickTimeManager(bool, std::unique_ptr<class ITickTimeManagerProxy>);

    // symbol: ?incrementCurrentTick@TickTimeManager@@QEAAXXZ
    MCAPI void incrementCurrentTick();

    // symbol: ?registerForGameplayUserManagerEvents@TickTimeManager@@QEAAXAEAVGameplayUserManager@@@Z
    MCAPI void registerForGameplayUserManagerEvents(class GameplayUserManager&);

    // symbol: ?setPacketSender@TickTimeManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender&);

    // symbol: ?update@TickTimeManager@@QEAAXXZ
    MCAPI void update();

    // symbol: ??1TickTimeManager@@QEAA@XZ
    MCAPI ~TickTimeManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_syncTime@TickTimeManager@@AEAAX_J@Z
    MCAPI void _syncTime(int64);

    // NOLINTEND
};
