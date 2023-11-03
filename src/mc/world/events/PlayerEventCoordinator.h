#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/events/PlayerGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class PlayerEventCoordinator {
public:
    // prevent constructor by default
    PlayerEventCoordinator& operator=(PlayerEventCoordinator const&);
    PlayerEventCoordinator(PlayerEventCoordinator const&);
    PlayerEventCoordinator();

public:
    // NOLINTBEGIN
    // symbol: ?getPlayerGameplayHandler@PlayerEventCoordinator@@QEAAAEAVPlayerGameplayHandler@@XZ
    MCAPI class PlayerGameplayHandler& getPlayerGameplayHandler();

    // symbol:
    // ?registerPlayerGameplayHandler@PlayerEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VPlayerGameplayHandler@@U?$default_delete@VPlayerGameplayHandler@@@std@@@std@@@Z
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler>&&);

    // symbol:
    // ?sendEvent@PlayerEventCoordinator@@QEAA?AW4CoordinatorResult@@AEBV?$EventRef@U?$PlayerGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct PlayerGameplayEvent<::CoordinatorResult>> const&);

    // symbol: ?sendEvent@PlayerEventCoordinator@@QEAAXAEBV?$EventRef@U?$PlayerGameplayEvent@X@@@@@Z
    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const&);

    // symbol:
    // ?sendPlayerAwardAchievement@PlayerEventCoordinator@@QEAAXAEAVPlayer@@W4AchievementIds@MinecraftEventing@@@Z
    MCAPI void sendPlayerAwardAchievement(class Player&, ::MinecraftEventing::AchievementIds);

    // symbol: ?sendPlayerCaravanChanged@PlayerEventCoordinator@@QEAAXAEBVActor@@H@Z
    MCAPI void sendPlayerCaravanChanged(class Actor const&, int);

    // symbol: ?sendPlayerDestroyedBlock@PlayerEventCoordinator@@QEAAXAEAVPlayer@@HHH@Z
    MCAPI void sendPlayerDestroyedBlock(class Player&, int, int, int);

    // symbol: ?sendPlayerItemEquipped@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@H@Z
    MCAPI void sendPlayerItemEquipped(class Player&, class ItemInstance const&, int);

    // symbol: ?sendPlayerItemPlaceInteraction@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@@Z
    MCAPI void sendPlayerItemPlaceInteraction(class Player&, class ItemInstance const&);

    // symbol: ?sendPlayerItemUseInteraction@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@@Z
    MCAPI void sendPlayerItemUseInteraction(class Player&, class ItemInstance const&);

    // symbol: ?sendPlayerMove@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerMove(class Player&);

    // symbol: ?sendPlayerSlide@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerSlide(class Player&);

    // symbol: ?sendPlayerTeleported@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerTeleported(class Player&);

    // symbol: ?sendPlayerTeleported@PlayerEventCoordinator@@QEAAXAEAVPlayer@@M@Z
    MCAPI void sendPlayerTeleported(class Player&, float);

    // symbol: ?sendPlayerTick@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerTick(class Player&);

    // NOLINTEND
};
