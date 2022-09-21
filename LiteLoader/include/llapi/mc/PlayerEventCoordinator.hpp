/**
 * @file  MC/PlayerEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1650029450
     * @symbol ?registerPlayerGameplayHandler@PlayerEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VPlayerGameplayHandler@@U?$default_delete@VPlayerGameplayHandler@@@std@@@std@@@Z
     */
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler> &&);
    /**
     * @hash   -1283638101
     * @symbol ?sendEvent@PlayerEventCoordinator@@QEAA?AW4CoordinatorResult@@AEBV?$EventRef@U?$PlayerGameplayEvent@W4CoordinatorResult@@@@@@@Z
     */
    MCAPI enum CoordinatorResult sendEvent(class EventRef<struct PlayerGameplayEvent<enum CoordinatorResult>> const &);
    /**
     * @hash   -1120576118
     * @symbol ?sendEvent@PlayerEventCoordinator@@QEAAXAEBV?$EventRef@U?$PlayerGameplayEvent@X@@@@@Z
     */
    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const &);
    /**
     * @hash   929720553
     * @symbol ?sendPlayerAwardAchievement@PlayerEventCoordinator@@QEAAXAEAVPlayer@@W4AchievementIds@MinecraftEventing@@@Z
     */
    MCAPI void sendPlayerAwardAchievement(class Player &, enum MinecraftEventing::AchievementIds);
    /**
     * @hash   1932286893
     * @symbol ?sendPlayerCaravanChanged@PlayerEventCoordinator@@QEAAXAEBVActor@@H@Z
     */
    MCAPI void sendPlayerCaravanChanged(class Actor const &, int);
    /**
     * @hash   582865797
     * @symbol ?sendPlayerDestroyedBlock@PlayerEventCoordinator@@QEAAXAEAVPlayer@@HHH@Z
     */
    MCAPI void sendPlayerDestroyedBlock(class Player &, int, int, int);
    /**
     * @hash   -559445782
     * @symbol ?sendPlayerItemEquipped@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@H@Z
     */
    MCAPI void sendPlayerItemEquipped(class Player &, class ItemInstance const &, int);
    /**
     * @hash   1396088137
     * @symbol ?sendPlayerItemPlaceInteraction@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@@Z
     */
    MCAPI void sendPlayerItemPlaceInteraction(class Player &, class ItemInstance const &);
    /**
     * @hash   -2073366071
     * @symbol ?sendPlayerItemUseInteraction@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@@Z
     */
    MCAPI void sendPlayerItemUseInteraction(class Player &, class ItemInstance const &);
    /**
     * @hash   581641300
     * @symbol ?sendPlayerMove@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void sendPlayerMove(class Player &);
    /**
     * @hash   -518056410
     * @symbol ?sendPlayerSlide@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void sendPlayerSlide(class Player &);
    /**
     * @hash   785282946
     * @symbol ?sendPlayerTeleported@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void sendPlayerTeleported(class Player &);
    /**
     * @hash   556611756
     * @symbol ?sendPlayerTick@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void sendPlayerTick(class Player &);

};