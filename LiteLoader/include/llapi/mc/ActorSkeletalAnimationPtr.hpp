/**
 * @file  ActorSkeletalAnimationPtr.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @symbol ??0ActorSkeletalAnimationPtr@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VActorAnimationGroup@@@Bedrock@@@gsl@@AEBVHashedString@@@Z
     * @hash   -589771870
     */
    MCAPI ActorSkeletalAnimationPtr(class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorAnimationGroup>> const &, class HashedString const &);
    /**
     * @symbol ?getName@ActorSkeletalAnimationPtr@@QEBAAEBVHashedString@@XZ
     * @hash   -458058802
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol ?isNull@ActorSkeletalAnimationPtr@@QEBA_NXZ
     * @hash   -460313248
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ??CActorSkeletalAnimationPtr@@QEBAPEBVActorSkeletalAnimation@@XZ
     * @hash   -863321201
     */
    MCAPI class ActorSkeletalAnimation const * operator->() const;
    /**
     * @symbol ??CActorSkeletalAnimationPtr@@QEAAPEAVActorSkeletalAnimation@@XZ
     * @hash   107440145
     */
    MCAPI class ActorSkeletalAnimation * operator->();
    /**
     * @symbol ??4ActorSkeletalAnimationPtr@@QEAAAEAV0@AEBV0@@Z
     * @hash   58707196
     */
    MCAPI class ActorSkeletalAnimationPtr & operator=(class ActorSkeletalAnimationPtr const &);
    /**
     * @symbol ??1ActorSkeletalAnimationPtr@@QEAA@XZ
     * @hash   -952405308
     */
    MCAPI ~ActorSkeletalAnimationPtr();
    /**
     * @symbol ?NONE@ActorSkeletalAnimationPtr@@2V1@B
     * @hash   -1179203904
     */
    MCAPI static class ActorSkeletalAnimationPtr const NONE;

};