#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/game_event_config/GameEventType.h"

class GameEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd2e33a;
    ::ll::UntypedStorage<1, 1> mUnk4ced8f;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEvent& operator=(GameEvent const&);
    GameEvent(GameEvent const&);
    GameEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::GameEventConfig::GameEventType const getType() const;
    // NOLINTEND
};
