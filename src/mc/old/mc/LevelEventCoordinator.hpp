/**
 * @file  LevelEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0LevelEventCoordinator\@\@QEAA\@XZ
     */
    MCAPI LevelEventCoordinator();
    /**
     * @symbol  ?registerLevelGameplayHandler\@LevelEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VLevelGameplayHandler\@\@U?$default_delete\@VLevelGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerLevelGameplayHandler(std::unique_ptr<class LevelGameplayHandler> &&);
    /**
     * @symbol  ?sendEvent\@LevelEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$LevelGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct LevelGameplayEvent<void>> const &);
    /**
     * @symbol  ?sendLevelBiomesRegistered\@LevelEventCoordinator\@\@QEAAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI void sendLevelBiomesRegistered(class IWorldRegistriesProvider &);
    /**
     * @symbol  ?sendLevelInitialized\@LevelEventCoordinator\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void sendLevelInitialized(class Level &);
    /**
     * @symbol  ?sendLevelRemovedActor\@LevelEventCoordinator\@\@QEAAXAEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCAPI void sendLevelRemovedActor(class Level &, class Actor &);
    /**
     * @symbol  ?sendLevelScriptTick\@LevelEventCoordinator\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void sendLevelScriptTick(class Level &);
    /**
     * @symbol  ?sendLevelTick\@LevelEventCoordinator\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void sendLevelTick(class Level &);
    /**
     * @symbol  ?sendLevelWeatherChanged\@LevelEventCoordinator\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCAPI void sendLevelWeatherChanged(std::string const &, bool, bool);

};