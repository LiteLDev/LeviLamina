#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GameEventConfig { enum class GameEventType; }
// clang-format on

class GameEventMapping {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMAPPING
public:
    GameEventMapping& operator=(GameEventMapping const&) = delete;
    GameEventMapping(GameEventMapping const&)            = delete;
    GameEventMapping()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?nameToEvent\@GameEventMapping\@\@SAAEBVGameEvent\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class GameEvent const& nameToEvent(std::string const&);
    /**
     * @symbol ?typeToEvent\@GameEventMapping\@\@SAAEBVGameEvent\@\@W4GameEventType\@GameEventConfig\@\@\@Z
     */
    MCAPI static class GameEvent const& typeToEvent(enum class GameEventConfig::GameEventType);

    // private:

private:
    /**
     * @symbol
     * ?mGameEventPairs\@GameEventMapping\@\@0V?$vector\@UGameEventPair\@\@V?$allocator\@UGameEventPair\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<struct GameEventPair> const mGameEventPairs;
};
