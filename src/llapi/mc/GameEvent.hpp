/**
 * @file  GameEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEvent.
 *
 */
class GameEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENT
public:
    class GameEvent& operator=(class GameEvent const &) = delete;
    GameEvent(class GameEvent const &) = delete;
    GameEvent() = delete;
#endif

public:
    /**
     * @symbol  ?getRadius\@GameEvent\@\@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @symbol  ?getRadiusSqrd\@GameEvent\@\@QEBAMXZ
     */
    MCAPI float getRadiusSqrd() const;
    /**
     * @symbol  ?getType\@GameEvent\@\@QEBA?BW4GameEventType\@GameEventConfig\@\@XZ
     */
    MCAPI enum class GameEventConfig::GameEventType const getType() const;
    /**
     * @symbol  ?isCategory\@GameEvent\@\@QEBA_NW4GameEventCategory\@GameEventConfig\@\@\@Z
     */
    MCAPI bool isCategory(enum class GameEventConfig::GameEventCategory) const;

};