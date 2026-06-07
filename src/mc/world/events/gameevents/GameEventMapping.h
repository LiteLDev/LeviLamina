#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/game_event_config/GameEventType.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
class HashedString;
struct GameEventPair;
// clang-format on

class GameEventMapping {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::GameEvent const* creatorNameToEvent(::std::string const& name);

    MCAPI static ::GameEvent const& typeToEvent(::GameEventConfig::GameEventType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::set<::HashedString> const& mExposedGameEvents();

    MCAPI static ::std::vector<::GameEventPair> const& mGameEventPairs();
    // NOLINTEND
};
