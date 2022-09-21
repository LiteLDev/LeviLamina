/**
 * @file  MC/LevelEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelEventCoordinator.
 *
 */
class LevelEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTCOORDINATOR
public:
    class LevelEventCoordinator& operator=(class LevelEventCoordinator const &) = delete;
    LevelEventCoordinator(class LevelEventCoordinator const &) = delete;
#endif

public:
    /**
     * @hash   1467411174
     * @symbol ??0LevelEventCoordinator@@QEAA@XZ
     */
    MCAPI LevelEventCoordinator();
    /**
     * @hash   -739864624
     * @symbol ?registerLevelGameplayHandler@LevelEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VLevelGameplayHandler@@U?$default_delete@VLevelGameplayHandler@@@std@@@std@@@Z
     */
    MCAPI void registerLevelGameplayHandler(std::unique_ptr<class LevelGameplayHandler> &&);
    /**
     * @hash   116463462
     * @symbol ?sendEvent@LevelEventCoordinator@@QEAAXAEBV?$EventRef@U?$LevelGameplayEvent@X@@@@@Z
     */
    MCAPI void sendEvent(class EventRef<struct LevelGameplayEvent<void>> const &);
    /**
     * @hash   -1592419834
     * @symbol ?sendLevelBiomesRegistered@LevelEventCoordinator@@QEAAXAEAVIWorldRegistriesProvider@@@Z
     */
    MCAPI void sendLevelBiomesRegistered(class IWorldRegistriesProvider &);
    /**
     * @hash   -1161785250
     * @symbol ?sendLevelInitialized@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
     */
    MCAPI void sendLevelInitialized(class Level &);
    /**
     * @hash   -1964949235
     * @symbol ?sendLevelRemovedActor@LevelEventCoordinator@@QEAAXAEAVLevel@@AEAVActor@@@Z
     */
    MCAPI void sendLevelRemovedActor(class Level &, class Actor &);
    /**
     * @symbol ?sendLevelScriptTick@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
     */
    MCAPI void sendLevelScriptTick(class Level &);
    /**
     * @symbol ?sendLevelTick@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
     */
    MCAPI void sendLevelTick(class Level &);
    /**
     * @hash   1648363974
     * @symbol ?sendLevelWeatherChanged@LevelEventCoordinator@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
     */
    MCAPI void sendLevelWeatherChanged(std::string const &, bool, bool);

};