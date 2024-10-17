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
    MCVAPI ::EventResult onEvent(struct LevelNotificationEvent const& event);

    MCVAPI ::EventResult onLevelAddedPlayer(class Level& level, class Player& player);

    MCVAPI ::EventResult onLevelInitialized(class Level& level);

    MCVAPI ::EventResult onLevelRemovedActor(class Actor& actor);

    MCVAPI ::EventResult onLevelRemovedPlayer(class Level& level, class Player& player);

    MCVAPI ::EventResult onLevelTick(class Level&);

    MCVAPI ::EventResult onLevelTickStart(class Level&);

    MCVAPI ::EventResult onLevelWeatherChange(std::string const&, bool, bool, bool, bool);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI ::EventResult onEvent$(struct LevelNotificationEvent const& event);

    MCAPI ::EventResult onLevelAddedPlayer$(class Level& level, class Player& player);

    MCAPI ::EventResult onLevelInitialized$(class Level& level);

    MCAPI ::EventResult onLevelRemovedActor$(class Actor& actor);

    MCAPI ::EventResult onLevelRemovedPlayer$(class Level& level, class Player& player);

    MCAPI ::EventResult onLevelTick$(class Level&);

    MCAPI ::EventResult onLevelTickStart$(class Level&);

    MCAPI ::EventResult onLevelWeatherChange$(std::string const&, bool, bool, bool, bool);

    // NOLINTEND
};
