#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationControllerPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk573969;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerPtr& operator=(ActorAnimationControllerPtr const&);
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
    ActorAnimationControllerPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorAnimationControllerPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ActorAnimationControllerPtr const& NONE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
