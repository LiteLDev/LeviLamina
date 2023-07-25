#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorSkeletalAnimationPtr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSKELETALANIMATIONPTR
public:
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&) = delete;
    ActorSkeletalAnimationPtr()                                 = delete;
#endif

public:
    /**
     * @symbol ?isNull\@ActorSkeletalAnimationPtr\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ??4ActorSkeletalAnimationPtr\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ActorSkeletalAnimationPtr& operator=(class ActorSkeletalAnimationPtr const&);
    /**
     * @symbol ??1ActorSkeletalAnimationPtr\@\@QEAA\@XZ
     */
    MCAPI ~ActorSkeletalAnimationPtr();
    /**
     * @symbol ?NONE\@ActorSkeletalAnimationPtr\@\@2V1\@B
     */
    MCAPI static class ActorSkeletalAnimationPtr const NONE;
};
