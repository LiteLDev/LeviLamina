#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerGroup;
class ActorAnimationControllerInfo;
class HashedString;
// clang-format on

class ActorAnimationControllerPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationControllerInfo>> mActorAnimationControllerInfoPtr;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationControllerPtr(::ActorAnimationControllerGroup& group, ::HashedString const& name);

    MCNAPI ~ActorAnimationControllerPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ActorAnimationControllerPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorAnimationControllerGroup& group, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
