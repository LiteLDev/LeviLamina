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
    MCAPI ActorAnimationControllerPtr(::ActorAnimationControllerGroup& group, ::HashedString const& name);

    MCAPI ~ActorAnimationControllerPtr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorAnimationControllerGroup& group, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
