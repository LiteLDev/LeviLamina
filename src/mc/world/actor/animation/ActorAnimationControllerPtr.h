#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationControllerPtr {

public:
    // prevent constructor by default
    ActorAnimationControllerPtr& operator=(ActorAnimationControllerPtr const&) = delete;
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&)            = delete;
    ActorAnimationControllerPtr()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getName\@ActorAnimationControllerPtr\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getName() const;
    /**
     * @symbol ?isNull\@ActorAnimationControllerPtr\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ??1ActorAnimationControllerPtr\@\@QEAA\@XZ
     */
    MCAPI ~ActorAnimationControllerPtr();
    /**
     * @symbol ?NONE\@ActorAnimationControllerPtr\@\@2V1\@B
     */
    MCAPI static class ActorAnimationControllerPtr const NONE;
    // NOLINTEND
};
