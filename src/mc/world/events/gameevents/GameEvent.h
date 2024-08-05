#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/GameEventType.h"

class GameEvent {
public:
    // prevent constructor by default
    GameEvent& operator=(GameEvent const&);
    GameEvent(GameEvent const&);
    GameEvent();

public:
    // NOLINTBEGIN
    MCAPI ::GameEventConfig::GameEventType const getType() const;

    // NOLINTEND
};
