/**
 * @file  ActorAnimationControllerPtr.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationControllerPtr.
 *
 */
class ActorAnimationControllerPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERPTR
public:
    class ActorAnimationControllerPtr& operator=(class ActorAnimationControllerPtr const &) = delete;
    ActorAnimationControllerPtr(class ActorAnimationControllerPtr const &) = delete;
    ActorAnimationControllerPtr() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorAnimationControllerPtr\@\@QEAA\@AEAVActorAnimationControllerGroup\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI ActorAnimationControllerPtr(class ActorAnimationControllerGroup &, class HashedString const &);
    /**
     * @symbol  ?getName\@ActorAnimationControllerPtr\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol  ?isNull\@ActorAnimationControllerPtr\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @symbol  ??CActorAnimationControllerPtr\@\@QEBAPEBVActorAnimationController\@\@XZ
     */
    MCAPI class ActorAnimationController const * operator->() const;
    /**
     * @symbol  ??CActorAnimationControllerPtr\@\@QEAAPEAVActorAnimationController\@\@XZ
     */
    MCAPI class ActorAnimationController * operator->();
    /**
     * @symbol  ??1ActorAnimationControllerPtr\@\@QEAA\@XZ
     */
    MCAPI ~ActorAnimationControllerPtr();
    /**
     * @symbol  ?NONE\@ActorAnimationControllerPtr\@\@2V1\@B
     */
    MCAPI static class ActorAnimationControllerPtr const NONE;

};