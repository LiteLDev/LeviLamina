#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorSkeletalAnimationPtr {

public:
    // prevent constructor by default
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&) = delete;
    ActorSkeletalAnimationPtr()                                 = delete;

public:
    /**
     * @symbol ?isNull\@ActorSkeletalAnimationPtr\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const; // NOLINT
    /**
     * @symbol ??4ActorSkeletalAnimationPtr\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ActorSkeletalAnimationPtr& operator=(class ActorSkeletalAnimationPtr const&); // NOLINT
    /**
     * @symbol ??1ActorSkeletalAnimationPtr\@\@QEAA\@XZ
     */
    MCAPI ~ActorSkeletalAnimationPtr(); // NOLINT
    /**
     * @symbol ?NONE\@ActorSkeletalAnimationPtr\@\@2V1\@B
     */
    MCAPI static class ActorSkeletalAnimationPtr const NONE; // NOLINT
};
