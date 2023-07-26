#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelEventListener {

public:
    // prevent constructor by default
    LevelEventListener& operator=(LevelEventListener const&) = delete;
    LevelEventListener(LevelEventListener const&)            = delete;
    LevelEventListener()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELEVENTLISTENER
    /**
     * @symbol ?onEvent\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEBULevelNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct LevelNotificationEvent const&); // NOLINT
    /**
     * @symbol ?onLevelAddedPlayer\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelAddedPlayer(class Level&, class Player&); // NOLINT
    /**
     * @symbol ?onLevelInitialized\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelInitialized(class Level&); // NOLINT
    /**
     * @symbol ?onLevelRemovedActor\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelRemovedActor(class Level&, class Actor&); // NOLINT
    /**
     * @symbol ?onLevelRemovedPlayer\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelRemovedPlayer(class Level&, class Player&); // NOLINT
    /**
     * @symbol ?onLevelTick\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelTick(class Level&); // NOLINT
    /**
     * @symbol ?onLevelTickStart\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelTickStart(class Level&); // NOLINT
    /**
     * @symbol
     * ?onLevelWeatherChange\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCVAPI enum class EventResult onLevelWeatherChange(std::string const&, bool, bool); // NOLINT
#endif
};
