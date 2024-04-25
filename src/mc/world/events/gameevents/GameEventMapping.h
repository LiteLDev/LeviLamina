#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/GameEventType.h"

class GameEventMapping {
public:
    // prevent constructor by default
    GameEventMapping& operator=(GameEventMapping const&);
    GameEventMapping(GameEventMapping const&);
    GameEventMapping();

public:
    // NOLINTBEGIN
    // symbol:
    // ?creatorNameToEvent@GameEventMapping@@SAPEBVGameEvent@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class GameEvent const* creatorNameToEvent(std::string const&);

    // symbol: ?typeToEvent@GameEventMapping@@SAAEBVGameEvent@@W4GameEventType@GameEventConfig@@@Z
    MCAPI static class GameEvent const& typeToEvent(::GameEventConfig::GameEventType type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mExposedGameEvents@GameEventMapping@@0V?$set@VHashedString@@U?$less@VHashedString@@@std@@V?$allocator@VHashedString@@@3@@std@@B
    MCAPI static std::set<class HashedString> const mExposedGameEvents;

    // symbol: ?mGameEventPairs@GameEventMapping@@0V?$vector@UGameEventPair@@V?$allocator@UGameEventPair@@@std@@@std@@B
    MCAPI static std::vector<struct GameEventPair> const mGameEventPairs;

    // NOLINTEND
};
