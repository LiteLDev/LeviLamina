/**
 * @file  ActorAcquiredItemEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorAcquiredItemEvent.
 *
 */
struct ActorAcquiredItemEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORACQUIREDITEMEVENT
public:
    struct ActorAcquiredItemEvent& operator=(struct ActorAcquiredItemEvent const &) = delete;
    ActorAcquiredItemEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorAcquiredItemEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorAcquiredItemEvent(struct ActorAcquiredItemEvent const &);
    /**
     * @symbol  ??1ActorAcquiredItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAcquiredItemEvent();

};