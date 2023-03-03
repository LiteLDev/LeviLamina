/**
 * @file  SoundEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?_playSound\@SoundEventSystem\@\@SAXAEAVILevel\@\@AEBUSoundEventRequest\@\@AEBUSynchronizedPlainData\@3\@\@Z
     */
    MCAPI static void _playSound(class ILevel &, struct SoundEventRequest const &, struct SoundEventRequest::SynchronizedPlainData const &);
    /**
     * @symbol  ?_tick\@SoundEventSystem\@\@SAXAEBVStrictEntityContext\@\@AEAVLevelComponent\@\@AEAUSoundEventRequestQueueComponent\@\@\@Z
     */
    MCAPI static void _tick(class StrictEntityContext const &, class LevelComponent &, struct SoundEventRequestQueueComponent &);
    /**
     * @symbol  ?create\@SoundEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};