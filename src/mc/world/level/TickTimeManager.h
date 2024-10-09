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
    MCAPI TickTimeManager(bool isClientSide, std::unique_ptr<class ITickTimeManagerProxy> tickTimeManagerProxy);

    MCAPI void incrementCurrentTick();

    MCAPI void registerForGameplayUserManagerEvents(class GameplayUserManager& gameplayUserManager);

    MCAPI void registerForPlayerSleepManagerEvents(class ServerPlayerSleepManager& serverPlayerSleepManager);

    MCAPI void setPacketSender(class PacketSender& packetSender);

    MCAPI void update();

    MCAPI ~TickTimeManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onWakeUpAllPlayers();

    MCAPI void _syncTime(int64 currentTick);

    // NOLINTEND
};
