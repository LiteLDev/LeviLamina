#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class ActorAnimationInfo;
class HashedString;
// clang-format on

class ActorSkeletalAnimationPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationInfo>> mActorAnimationInfoPtr;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSkeletalAnimationPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSkeletalAnimationPtr(
        ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> const& animationGroup,
        ::HashedString const&                                       name
    );

    MCAPI ~ActorSkeletalAnimationPtr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> const& animationGroup, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
