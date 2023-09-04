#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class LevelEventListener {
public:
    // prevent constructor by default
    LevelEventListener& operator=(LevelEventListener const&) = delete;
    LevelEventListener(LevelEventListener const&)            = delete;
    LevelEventListener()                                     = delete;

public:
    // NOLINTBEGIN
    // symbol: ?onEvent@LevelEventListener@@UEAA?AW4EventResult@@AEBULevelNotificationEvent@@@Z
    MCVAPI ::EventResult onEvent(struct LevelNotificationEvent const&);

    // symbol: ?onLevelAddedPlayer@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onLevelAddedPlayer(class Level&, class Player&);

    // symbol: ?onLevelInitialized@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    MCVAPI ::EventResult onLevelInitialized(class Level&);

    // symbol: ?onLevelRemovedActor@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVActor@@@Z
    MCVAPI ::EventResult onLevelRemovedActor(class Level&, class Actor&);

    // symbol: ?onLevelRemovedPlayer@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onLevelRemovedPlayer(class Level&, class Player&);

    // symbol: ?onLevelTick@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    MCVAPI ::EventResult onLevelTick(class Level&);

    // symbol: ?onLevelTickStart@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    MCVAPI ::EventResult onLevelTickStart(class Level&);

    // symbol:
    // ?onLevelWeatherChange@LevelEventListener@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
    MCVAPI ::EventResult onLevelWeatherChange(std::string const&, bool, bool);

    // NOLINTEND
};
