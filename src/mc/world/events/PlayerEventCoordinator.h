#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/events/PlayerGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class PlayerEventCoordinator {

public:
    // prevent constructor by default
    PlayerEventCoordinator& operator=(PlayerEventCoordinator const&) = delete;
    PlayerEventCoordinator(PlayerEventCoordinator const&)            = delete;
    PlayerEventCoordinator()                                         = delete;

public:
    /**
     * @symbol
     * ?registerPlayerGameplayHandler\@PlayerEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VPlayerGameplayHandler\@\@U?$default_delete\@VPlayerGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler>&&); // NOLINT
    /**
     * @symbol ?sendEvent\@PlayerEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$PlayerGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const&); // NOLINT
    /**
     * @symbol
     * ?sendEvent\@PlayerEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@AEBV?$EventRef\@U?$PlayerGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
    sendEvent(class EventRef<struct PlayerGameplayEvent<enum class CoordinatorResult>> const&); // NOLINT
    /**
     * @symbol
     * ?sendPlayerAwardAchievement\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@W4AchievementIds\@MinecraftEventing\@\@\@Z
     */
    MCAPI void sendPlayerAwardAchievement(class Player&, enum class MinecraftEventing::AchievementIds); // NOLINT
    /**
     * @symbol ?sendPlayerCaravanChanged\@PlayerEventCoordinator\@\@QEAAXAEBVActor\@\@H\@Z
     */
    MCAPI void sendPlayerCaravanChanged(class Actor const&, int); // NOLINT
    /**
     * @symbol ?sendPlayerDestroyedBlock\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@HHH\@Z
     */
    MCAPI void sendPlayerDestroyedBlock(class Player&, int, int, int); // NOLINT
    /**
     * @symbol ?sendPlayerItemEquipped\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@H\@Z
     */
    MCAPI void sendPlayerItemEquipped(class Player&, class ItemInstance const&, int); // NOLINT
    /**
     * @symbol ?sendPlayerItemPlaceInteraction\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI void sendPlayerItemPlaceInteraction(class Player&, class ItemInstance const&); // NOLINT
    /**
     * @symbol ?sendPlayerItemUseInteraction\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI void sendPlayerItemUseInteraction(class Player&, class ItemInstance const&); // NOLINT
    /**
     * @symbol ?sendPlayerMove\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerMove(class Player&); // NOLINT
    /**
     * @symbol ?sendPlayerSlide\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerSlide(class Player&); // NOLINT
    /**
     * @symbol ?sendPlayerTeleported\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerTeleported(class Player&); // NOLINT
    /**
     * @symbol ?sendPlayerTick\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerTick(class Player&); // NOLINT
};
