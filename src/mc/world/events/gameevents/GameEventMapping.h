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
    // symbol:
    // ?nameToEvent@GameEventMapping@@SAAEBVGameEvent@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class GameEvent const& nameToEvent(std::string const& name);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mGameEventPairs@GameEventMapping@@0V?$vector@UGameEventPair@@V?$allocator@UGameEventPair@@@std@@@std@@B
    MCAPI static std::vector<struct GameEventPair> const mGameEventPairs;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mGameEventPairs() { return mGameEventPairs; }

    // NOLINTEND
};
