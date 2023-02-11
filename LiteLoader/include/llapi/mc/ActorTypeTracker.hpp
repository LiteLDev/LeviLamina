/**
 * @file  ActorTypeTracker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorTypeTracker.
 *
 */
class ActorTypeTracker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORTYPETRACKER
public:
    class ActorTypeTracker& operator=(class ActorTypeTracker const &) = delete;
    ActorTypeTracker(class ActorTypeTracker const &) = delete;
#endif

public:
    /**
     * @hash   435842821
     * @symbol  ??0ActorTypeTracker\@\@QEAA\@XZ
     */
    MCAPI ActorTypeTracker();
    /**
     * @hash   625750534
     * @symbol  ?markSeenType\@ActorTypeTracker\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void markSeenType(class Actor const &);
    /**
     * @hash   -1208977107
     * @symbol  ?shouldSendPropertyUpdate\@ActorTypeTracker\@\@QEAA_NAEBVActor\@\@\@Z
     */
    MCAPI bool shouldSendPropertyUpdate(class Actor const &);
    /**
     * @hash   1122706387
     * @symbol  ??1ActorTypeTracker\@\@QEAA\@XZ
     */
    MCAPI ~ActorTypeTracker();

};