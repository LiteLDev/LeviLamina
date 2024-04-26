#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/events/MutablePlayerGameplayEvent.h"
#include "mc/events/PlayerGameplayEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/events/EventRef.h"

class PlayerEventCoordinator {
public:
    // prevent constructor by default
    PlayerEventCoordinator& operator=(PlayerEventCoordinator const&);
    PlayerEventCoordinator(PlayerEventCoordinator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayerEventCoordinator@@UEAA@XZ
    virtual ~PlayerEventCoordinator() = default;

    // symbol: ??0PlayerEventCoordinator@@QEAA@XZ
    MCAPI PlayerEventCoordinator();

    // symbol: ?getPlayerGameplayHandler@PlayerEventCoordinator@@QEAAAEAVPlayerGameplayHandler@@XZ
    MCAPI class PlayerGameplayHandler& getPlayerGameplayHandler();

    // symbol:
    // ?registerPlayerGameplayHandler@PlayerEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VPlayerGameplayHandler@@U?$default_delete@VPlayerGameplayHandler@@@std@@@std@@@Z
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler>&& handler);

    // symbol:
    // ?sendEvent@PlayerEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutablePlayerGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutablePlayerGameplayEvent<::CoordinatorResult>> event);

    // symbol:
    // ?sendEvent@PlayerEventCoordinator@@QEAA?AW4CoordinatorResult@@AEBV?$EventRef@U?$PlayerGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct PlayerGameplayEvent<::CoordinatorResult>> const& event);

    // symbol: ?sendEvent@PlayerEventCoordinator@@QEAAXAEBV?$EventRef@U?$PlayerGameplayEvent@X@@@@@Z
    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const& event);

    // symbol:
    // ?sendPlayerAwardAchievement@PlayerEventCoordinator@@QEAAXAEAVPlayer@@W4AchievementIds@MinecraftEventing@@@Z
    MCAPI void sendPlayerAwardAchievement(class Player& player, ::MinecraftEventing::AchievementIds achievement);

    // symbol: ?sendPlayerCaravanChanged@PlayerEventCoordinator@@QEAAXAEBVActor@@H@Z
    MCAPI void sendPlayerCaravanChanged(class Actor const& mob, int caravanCount);

    // symbol: ?sendPlayerDestroyedBlock@PlayerEventCoordinator@@QEAAXAEAVPlayer@@HHH@Z
    MCAPI void sendPlayerDestroyedBlock(class Player& player, int x, int y, int z);

    // symbol: ?sendPlayerItemEquipped@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@H@Z
    MCAPI void
    sendPlayerItemEquipped(class Player& player, class ItemInstance const& equippedItem, int equipmentSlotId);

    // symbol: ?sendPlayerItemPlaceInteraction@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@@Z
    MCAPI void sendPlayerItemPlaceInteraction(class Player& player, class ItemInstance const& itemBeforeUse);

    // symbol: ?sendPlayerItemUseInteraction@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@@Z
    MCAPI void sendPlayerItemUseInteraction(class Player& player, class ItemInstance const& itemBeforeUse);

    // symbol: ?sendPlayerMove@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerMove(class Player& player);

    // symbol: ?sendPlayerPortalBuilt@PlayerEventCoordinator@@QEAAXAEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void sendPlayerPortalBuilt(class Player& player, DimensionType dimensionBuiltIn);

    // symbol: ?sendPlayerPortalUsed@PlayerEventCoordinator@@QEAAXAEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCAPI void sendPlayerPortalUsed(class Player& player, DimensionType fromDimension, DimensionType toDimension);

    // symbol: ?sendPlayerPoweredBeacon@PlayerEventCoordinator@@QEAAXAEBVPlayer@@H@Z
    MCAPI void sendPlayerPoweredBeacon(class Player const&, int);

    // symbol: ?sendPlayerSlide@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerSlide(class Player& player);

    // symbol: ?sendPlayerTeleported@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerTeleported(class Player& player);

    // symbol: ?sendPlayerTeleported@PlayerEventCoordinator@@QEAAXAEAVPlayer@@M@Z
    MCAPI void sendPlayerTeleported(class Player&, float);

    // symbol: ?sendPlayerTick@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerTick(class Player& player);

    // NOLINTEND
};
