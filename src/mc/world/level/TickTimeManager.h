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
    MCAPI TickTimeManager(bool, std::unique_ptr<class ITickTimeManagerProxy>);

    MCAPI void incrementCurrentTick();

    MCAPI void registerForGameplayUserManagerEvents(class GameplayUserManager&);

    MCAPI void registerForPlayerSleepManagerEvents(class ServerPlayerSleepManager&);

    MCAPI void setPacketSender(class PacketSender&);

    MCAPI void update();

    MCAPI ~TickTimeManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onWakeUpAllPlayers();

    MCAPI void _syncTime(int64);

    // NOLINTEND
};
