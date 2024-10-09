#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventMapping {
public:
    // prevent constructor by default
    GameEventMapping& operator=(GameEventMapping const&);
    GameEventMapping(GameEventMapping const&);
    GameEventMapping();

public:
    // NOLINTBEGIN
    MCAPI static class GameEvent const* creatorNameToEvent(std::string const& name);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::set<class HashedString> const mExposedGameEvents;

    MCAPI static std::vector<struct GameEventPair> const mGameEventPairs;

    // NOLINTEND
};
