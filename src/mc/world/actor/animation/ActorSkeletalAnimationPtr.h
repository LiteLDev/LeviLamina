#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorSkeletalAnimationPtr {

public:
    // prevent constructor by default
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&) = delete;
    ActorSkeletalAnimationPtr()                                 = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
