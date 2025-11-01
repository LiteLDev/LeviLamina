#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorSkeletalAnimationPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk99dc44;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSkeletalAnimationPtr& operator=(ActorSkeletalAnimationPtr const&);
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    ActorSkeletalAnimationPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorSkeletalAnimationPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ActorSkeletalAnimationPtr const& NONE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
