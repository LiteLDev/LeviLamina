#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationControllerPtr {
public:
    // prevent constructor by default
    ActorAnimationControllerPtr& operator=(ActorAnimationControllerPtr const&);
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
    ActorAnimationControllerPtr();

public:
    // NOLINTBEGIN
    MCAPI class HashedString const& getName() const;

    MCAPI bool isNull() const;

    MCAPI class ActorAnimationController* operator->();

    MCAPI class ActorAnimationController const* operator->() const;

    MCAPI ~ActorAnimationControllerPtr();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    MCAPI static class ActorAnimationControllerPtr const& NONE();

    // NOLINTEND
};
