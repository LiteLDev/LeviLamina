#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/GameEventCategory.h"
#include "mc/world/events/GameEventType.h"

class GameEvent {
public:
    // prevent constructor by default
    GameEvent& operator=(GameEvent const&);
    GameEvent(GameEvent const&);
    GameEvent();

public:
    // NOLINTBEGIN
    // symbol: ?getRadius@GameEvent@@QEBAMXZ
    MCAPI float getRadius() const;

    // symbol: ?getRadiusSqrd@GameEvent@@QEBAMXZ
    MCAPI float getRadiusSqrd() const;

    // symbol: ?getType@GameEvent@@QEBA?BW4GameEventType@GameEventConfig@@XZ
    MCAPI ::GameEventConfig::GameEventType const getType() const;

    // symbol: ?isCategory@GameEvent@@QEBA_NW4GameEventCategory@GameEventConfig@@@Z
    MCAPI bool isCategory(::GameEventConfig::GameEventCategory category) const;

    // NOLINTEND
};
