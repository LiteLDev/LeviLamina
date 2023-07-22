/**
 * @file  ActorCarriedItemChangedEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorCarriedItemChangedEvent.
 *
 */
struct ActorCarriedItemChangedEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCARRIEDITEMCHANGEDEVENT
public:
    struct ActorCarriedItemChangedEvent& operator=(struct ActorCarriedItemChangedEvent const &) = delete;
    ActorCarriedItemChangedEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorCarriedItemChangedEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorCarriedItemChangedEvent(struct ActorCarriedItemChangedEvent const &);
    /**
     * @symbol  ??1ActorCarriedItemChangedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorCarriedItemChangedEvent();

};