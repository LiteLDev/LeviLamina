/**
 * @file  PlayerEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../MinecraftEventing.hpp"

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
     * @hash   1069508570
     * @symbol  ?registerPlayerGameplayHandler\@PlayerEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VPlayerGameplayHandler\@\@U?$default_delete\@VPlayerGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler> &&);
    /**
     * @hash   -1957783445
     * @symbol  ?sendEvent\@PlayerEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@AEBV?$EventRef\@U?$PlayerGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct PlayerGameplayEvent<enum class CoordinatorResult>> const &);
    /**
     * @hash   -1794721462
     * @symbol  ?sendEvent\@PlayerEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$PlayerGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const &);
    /**
     * @hash   255636713
     * @symbol  ?sendPlayerAwardAchievement\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@W4AchievementIds\@MinecraftEventing\@\@\@Z
     */
    MCAPI void sendPlayerAwardAchievement(class Player &, enum class MinecraftEventing::AchievementIds);
    /**
     * @hash   1258203053
     * @symbol  ?sendPlayerCaravanChanged\@PlayerEventCoordinator\@\@QEAAXAEBVActor\@\@H\@Z
     */
    MCAPI void sendPlayerCaravanChanged(class Actor const &, int);
    /**
     * @hash   -91218043
     * @symbol  ?sendPlayerDestroyedBlock\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@HHH\@Z
     */
    MCAPI void sendPlayerDestroyedBlock(class Player &, int, int, int);
    /**
     * @hash   -1233529622
     * @symbol  ?sendPlayerItemEquipped\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@H\@Z
     */
    MCAPI void sendPlayerItemEquipped(class Player &, class ItemInstance const &, int);
    /**
     * @hash   722004297
     * @symbol  ?sendPlayerItemPlaceInteraction\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI void sendPlayerItemPlaceInteraction(class Player &, class ItemInstance const &);
    /**
     * @hash   1547517385
     * @symbol  ?sendPlayerItemUseInteraction\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI void sendPlayerItemUseInteraction(class Player &, class ItemInstance const &);
    /**
     * @hash   -92442540
     * @symbol  ?sendPlayerMove\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerMove(class Player &);
    /**
     * @hash   -1192171002
     * @symbol  ?sendPlayerSlide\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerSlide(class Player &);
    /**
     * @hash   111137602
     * @symbol  ?sendPlayerTeleported\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerTeleported(class Player &);
    /**
     * @hash   -117564340
     * @symbol  ?sendPlayerTick\@PlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerTick(class Player &);

};