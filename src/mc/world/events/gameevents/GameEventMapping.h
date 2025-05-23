#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCNAPI static ::GameEvent const* creatorNameToEvent(::std::string const& name);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::set<::HashedString> const& mExposedGameEvents();

    MCNAPI static ::std::vector<::GameEventPair> const& mGameEventPairs();
    // NOLINTEND
};
