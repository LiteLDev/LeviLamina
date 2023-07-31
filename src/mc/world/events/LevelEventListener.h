#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelEventListener {

public:
    // prevent constructor by default
    LevelEventListener& operator=(LevelEventListener const&) = delete;
    LevelEventListener(LevelEventListener const&)            = delete;
    LevelEventListener()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELEVENTLISTENER
    /**
     * @symbol ?onEvent\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEBULevelNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct LevelNotificationEvent const&);
    /**
     * @symbol ?onLevelAddedPlayer\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelAddedPlayer(class Level&, class Player&);
    /**
     * @symbol ?onLevelInitialized\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelInitialized(class Level&);
    /**
     * @symbol ?onLevelRemovedActor\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelRemovedActor(class Level&, class Actor&);
    /**
     * @symbol ?onLevelRemovedPlayer\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelRemovedPlayer(class Level&, class Player&);
    /**
     * @symbol ?onLevelTick\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelTick(class Level&);
    /**
     * @symbol ?onLevelTickStart\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelTickStart(class Level&);
    /**
     * @symbol
     * ?onLevelWeatherChange\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCVAPI enum class EventResult onLevelWeatherChange(std::string const&, bool, bool);
#endif
    // NOLINTEND
};
