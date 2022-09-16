/**
 * @file  ActorAnimationControllerPtr.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @symbol ??0ActorAnimationControllerPtr@@QEAA@AEAVActorAnimationControllerGroup@@AEBVHashedString@@@Z
     * @hash   906207947
     */
    MCAPI ActorAnimationControllerPtr(class ActorAnimationControllerGroup &, class HashedString const &);
    /**
     * @symbol ?getName@ActorAnimationControllerPtr@@QEBAAEBVHashedString@@XZ
     * @hash   503860552
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol ?isNull@ActorAnimationControllerPtr@@QEBA_NXZ
     * @hash   613778522
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ??CActorAnimationControllerPtr@@QEBAPEBVActorAnimationController@@XZ
     * @hash   -1990957601
     */
    MCAPI class ActorAnimationController const * operator->() const;
    /**
     * @symbol ??CActorAnimationControllerPtr@@QEAAPEAVActorAnimationController@@XZ
     * @hash   402315041
     */
    MCAPI class ActorAnimationController * operator->();
    /**
     * @symbol ??1ActorAnimationControllerPtr@@QEAA@XZ
     * @hash   -1027824561
     */
    MCAPI ~ActorAnimationControllerPtr();
    /**
     * @symbol ?NONE@ActorAnimationControllerPtr@@2V1@B
     * @hash   -2105353083
     */
    MCAPI static class ActorAnimationControllerPtr const NONE;

};