#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class LevelEventCoordinator {

public:
    // prevent constructor by default
    LevelEventCoordinator& operator=(LevelEventCoordinator const&) = delete;
    LevelEventCoordinator(LevelEventCoordinator const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELEVENTCOORDINATOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelEventCoordinator(); // NOLINT
#endif
    /**
     * @symbol ??0LevelEventCoordinator\@\@QEAA\@XZ
     */
    MCAPI LevelEventCoordinator(); // NOLINT
    /**
     * @symbol
     * ?registerLevelGameplayHandler\@LevelEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VLevelGameplayHandler\@\@U?$default_delete\@VLevelGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerLevelGameplayHandler(std::unique_ptr<class LevelGameplayHandler>&&); // NOLINT
    /**
     * @symbol ?sendEvent\@LevelEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$LevelGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct LevelGameplayEvent<void>> const&); // NOLINT
    /**
     * @symbol ?sendLevelInitialized\@LevelEventCoordinator\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void sendLevelInitialized(class Level&); // NOLINT
    /**
     * @symbol ?sendLevelRemovedActor\@LevelEventCoordinator\@\@QEAAXAEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCAPI void sendLevelRemovedActor(class Level&, class Actor&); // NOLINT
    /**
     * @symbol ?sendLevelTick\@LevelEventCoordinator\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void sendLevelTick(class Level&); // NOLINT
    /**
     * @symbol ?sendLevelTickStart\@LevelEventCoordinator\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void sendLevelTickStart(class Level&); // NOLINT
    /**
     * @symbol
     * ?sendLevelWeatherChanged\@LevelEventCoordinator\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCAPI void sendLevelWeatherChanged(std::string const&, bool, bool); // NOLINT
};
