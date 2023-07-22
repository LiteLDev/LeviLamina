/**
 * @file  PlayerEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "MinecraftEventing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerEventCoordinator.
 *
 */
class PlayerEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYEREVENTCOORDINATOR
public:
    class PlayerEventCoordinator& operator=(class PlayerEventCoordinator const &) = delete;
    PlayerEventCoordinator(class PlayerEventCoordinator const &) = delete;
    PlayerEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol  ?registerPlayerGameplayHandler\@PlayerEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VPlayerGameplayHandler\@\@U?$default_delete\@VPlayerGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler> &&);
    /**
     * @symbol  ?sendEvent\@PlayerEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@AEBV?$EventRef\@U?$PlayerGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct PlayerGameplayEvent<enum class CoordinatorResult>> const &);
    /**
     * @symbol  ?sendEvent\@PlayerEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$PlayerGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const &);
    /**
     * @symbol  ?sendPlayerAwardAchievement\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@W4AchievementIds\@MinecraftEventing\@\@\@Z
     */
    MCAPI void sendPlayerAwardAchievement(class Player &, enum class MinecraftEventing::AchievementIds);
    /**
     * @symbol  ?sendPlayerCaravanChanged\@PlayerEventCoordinator\@\@QEAAXAEBVActor\@\@H\@Z
     */
    MCAPI void sendPlayerCaravanChanged(class Actor const &, int);
    /**
     * @symbol  ?sendPlayerDestroyedBlock\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@HHH\@Z
     */
    MCAPI void sendPlayerDestroyedBlock(class Player &, int, int, int);
    /**
     * @symbol  ?sendPlayerItemEquipped\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@H\@Z
     */
    MCAPI void sendPlayerItemEquipped(class Player &, class ItemInstance const &, int);
    /**
     * @symbol  ?sendPlayerItemPlaceInteraction\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI void sendPlayerItemPlaceInteraction(class Player &, class ItemInstance const &);
    /**
     * @symbol  ?sendPlayerItemUseInteraction\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI void sendPlayerItemUseInteraction(class Player &, class ItemInstance const &);
    /**
     * @symbol  ?sendPlayerMove\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerMove(class Player &);
    /**
     * @symbol  ?sendPlayerSlide\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerSlide(class Player &);
    /**
     * @symbol  ?sendPlayerTeleported\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerTeleported(class Player &);
    /**
     * @symbol  ?sendPlayerTick\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerTick(class Player &);

};