/**
 * @file  ActorAnimationControllerPtr.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   906207947
     * @symbol ??0ActorAnimationControllerPtr@@QEAA@AEAVActorAnimationControllerGroup@@AEBVHashedString@@@Z
     */
    MCAPI ActorAnimationControllerPtr(class ActorAnimationControllerGroup &, class HashedString const &);
    /**
     * @hash   503860552
     * @symbol ?getName@ActorAnimationControllerPtr@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   613778522
     * @symbol ?isNull@ActorAnimationControllerPtr@@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @hash   -1990957601
     * @symbol ??CActorAnimationControllerPtr@@QEBAPEBVActorAnimationController@@XZ
     */
    MCAPI class ActorAnimationController const * operator->() const;
    /**
     * @hash   402315041
     * @symbol ??CActorAnimationControllerPtr@@QEAAPEAVActorAnimationController@@XZ
     */
    MCAPI class ActorAnimationController * operator->();
    /**
     * @hash   -1027824561
     * @symbol ??1ActorAnimationControllerPtr@@QEAA@XZ
     */
    MCAPI ~ActorAnimationControllerPtr();
    /**
     * @hash   -2105353083
     * @symbol ?NONE@ActorAnimationControllerPtr@@2V1@B
     */
    MCAPI static class ActorAnimationControllerPtr const NONE;

};