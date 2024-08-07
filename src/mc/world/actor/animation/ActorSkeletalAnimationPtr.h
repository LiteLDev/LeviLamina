#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class ActorSkeletalAnimationPtr {
public:
    // prevent constructor by default
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    ActorSkeletalAnimationPtr();

public:
    // NOLINTBEGIN
    MCAPI ActorSkeletalAnimationPtr(
        Bedrock::NotNullNonOwnerPtr<class ActorAnimationGroup> const&,
        class HashedString const& name
    );

    MCAPI class HashedString const& getName() const;

    MCAPI bool isNull() const;

    MCAPI class ActorSkeletalAnimation* operator->();

    MCAPI class ActorSkeletalAnimation const* operator->() const;

    MCAPI class ActorSkeletalAnimationPtr& operator=(class ActorSkeletalAnimationPtr const&);

    MCAPI ~ActorSkeletalAnimationPtr();

    MCAPI static class ActorSkeletalAnimationPtr const NONE;

    // NOLINTEND
};
