/**
 * @file  MC/SoundEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SoundEventSystem.
 *
 */
class SoundEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDEVENTSYSTEM
public:
    class SoundEventSystem& operator=(class SoundEventSystem const &) = delete;
    SoundEventSystem(class SoundEventSystem const &) = delete;
    SoundEventSystem() = delete;
#endif

public:
    /**
     * @hash   -1611825116
     * @symbol ?_tick@SoundEventSystem@@SAXAEBVStrictEntityContext@@AEAVLevelComponent@@AEAUSoundEventRequestQueueComponent@@@Z
     */
    MCAPI static void _tick(class StrictEntityContext const &, class LevelComponent &, struct SoundEventRequestQueueComponent &);
    /**
     * @hash   1771634512
     * @symbol ?create@SoundEventSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};