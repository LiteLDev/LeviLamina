#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GameEventConfig { enum class GameEventCategory; }
namespace GameEventConfig { enum class GameEventType; }
// clang-format on

class GameEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENT
public:
    GameEvent& operator=(GameEvent const&) = delete;
    GameEvent(GameEvent const&)            = delete;
    GameEvent()                            = delete;
#endif

public:
    /**
     * @symbol ?getType\@GameEvent\@\@QEBA?BW4GameEventType\@GameEventConfig\@\@XZ
     */
    MCAPI enum class GameEventConfig::GameEventType const getType() const;
    /**
     * @symbol ?isCategory\@GameEvent\@\@QEBA_NW4GameEventCategory\@GameEventConfig\@\@\@Z
     */
    MCAPI bool isCategory(enum class GameEventConfig::GameEventCategory) const;
};
