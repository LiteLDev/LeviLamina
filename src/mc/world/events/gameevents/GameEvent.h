#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/game_event_config/GameEventType.h"

class GameEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameEventConfig::GameEventType const> mType;
    ::ll::TypedStorage<1, 1, uchar const>                            mCategories;
    // NOLINTEND
};
