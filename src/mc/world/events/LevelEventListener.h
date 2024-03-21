#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class LevelEventListener {
public:
    // prevent constructor by default
    LevelEventListener& operator=(LevelEventListener const&);
    LevelEventListener(LevelEventListener const&);
    LevelEventListener();

public:
    // NOLINTBEGIN
    // symbol: ?onEvent@LevelEventListener@@UEAA?AW4EventResult@@AEBULevelNotificationEvent@@@Z
    MCVAPI ::EventResult onEvent(struct LevelNotificationEvent const& event);

    // symbol: ?onLevelAddedPlayer@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onLevelAddedPlayer(class Level& level, class Player& player);

    // symbol: ?onLevelInitialized@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    MCVAPI ::EventResult onLevelInitialized(class Level& level);

    // symbol: ?onLevelRemovedActor@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVActor@@@Z
    MCVAPI ::EventResult onLevelRemovedActor(class Level& level, class Actor& actor);

    // symbol: ?onLevelRemovedPlayer@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onLevelRemovedPlayer(class Level& level, class Player& player);

    // symbol: ?onLevelTick@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    MCVAPI ::EventResult onLevelTick(class Level&);

    // symbol: ?onLevelTickStart@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    MCVAPI ::EventResult onLevelTickStart(class Level&);

    // symbol:
    // ?onLevelWeatherChange@LevelEventListener@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N111@Z
    MCVAPI ::EventResult onLevelWeatherChange(std::string const&, bool, bool, bool, bool);

    // NOLINTEND
};
