/**
 * @file  MC/GameEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -967452330
     * @symbol ?getRadius@GameEvent@@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @hash   856516422
     * @symbol ?getRadiusSqrd@GameEvent@@QEBAMXZ
     */
    MCAPI float getRadiusSqrd() const;
    /**
     * @hash   -568793866
     * @symbol ?getType@GameEvent@@QEBA?BW4GameEventType@GameEventConfig@@XZ
     */
    MCAPI enum GameEventConfig::GameEventType const getType() const;
    /**
     * @hash   -484388705
     * @symbol ?isCategory@GameEvent@@QEBA_NW4GameEventCategory@GameEventConfig@@@Z
     */
    MCAPI bool isCategory(enum GameEventConfig::GameEventCategory) const;

};