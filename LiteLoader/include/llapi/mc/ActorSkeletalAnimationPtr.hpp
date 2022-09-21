/**
 * @file  MC/ActorSkeletalAnimationPtr.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorSkeletalAnimationPtr.
 *
 */
class ActorSkeletalAnimationPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSKELETALANIMATIONPTR
public:
    ActorSkeletalAnimationPtr(class ActorSkeletalAnimationPtr const &) = delete;
    ActorSkeletalAnimationPtr() = delete;
#endif

public:
    /**
     * @hash   206731090
     * @symbol ??0ActorSkeletalAnimationPtr@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VActorAnimationGroup@@@Bedrock@@@gsl@@AEBVHashedString@@@Z
     */
    MCAPI ActorSkeletalAnimationPtr(class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorAnimationGroup>> const &, class HashedString const &);
    /**
     * @hash   338413406
     * @symbol ?getName@ActorSkeletalAnimationPtr@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   336158960
     * @symbol ?isNull@ActorSkeletalAnimationPtr@@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @hash   -66848993
     * @symbol ??CActorSkeletalAnimationPtr@@QEBAPEBVActorSkeletalAnimation@@XZ
     */
    MCAPI class ActorSkeletalAnimation const * operator->() const;
    /**
     * @hash   903912353
     * @symbol ??CActorSkeletalAnimationPtr@@QEAAPEAVActorSkeletalAnimation@@XZ
     */
    MCAPI class ActorSkeletalAnimation * operator->();
    /**
     * @hash   439017180
     * @symbol ??4ActorSkeletalAnimationPtr@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ActorSkeletalAnimationPtr & operator=(class ActorSkeletalAnimationPtr const &);
    /**
     * @hash   -744552540
     * @symbol ??1ActorSkeletalAnimationPtr@@QEAA@XZ
     */
    MCAPI ~ActorSkeletalAnimationPtr();
    /**
     * @hash   -2026236992
     * @symbol ?NONE@ActorSkeletalAnimationPtr@@2V1@B
     */
    MCAPI static class ActorSkeletalAnimationPtr const NONE;

};