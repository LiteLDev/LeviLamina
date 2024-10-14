#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class ActorSkeletalAnimationPtr {
public:
    // prevent constructor by default
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    ActorSkeletalAnimationPtr();

public:
    // NOLINTBEGIN
    MCAPI ActorSkeletalAnimationPtr(
        Bedrock::NotNullNonOwnerPtr<class ActorAnimationGroup> const& animationGroup,
        class HashedString const&                                     name
    );

    MCAPI class HashedString const& getName() const;

    MCAPI bool isNull() const;

    MCAPI class ActorSkeletalAnimation* operator->();

    MCAPI class ActorSkeletalAnimation const* operator->() const;

    MCAPI class ActorSkeletalAnimationPtr& operator=(class ActorSkeletalAnimationPtr const&);

    MCAPI ~ActorSkeletalAnimationPtr();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class ActorSkeletalAnimationPtr const& NONE();

    // NOLINTEND
};
