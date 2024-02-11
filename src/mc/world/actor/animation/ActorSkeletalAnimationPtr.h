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
    // symbol:
    // ??0ActorSkeletalAnimationPtr@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VActorAnimationGroup@@@Bedrock@@@gsl@@AEBVHashedString@@@Z
    MCAPI ActorSkeletalAnimationPtr(
        Bedrock::NotNullNonOwnerPtr<class ActorAnimationGroup> const&,
        class HashedString const& name
    );

    // symbol: ?isNull@ActorSkeletalAnimationPtr@@QEBA_NXZ
    MCAPI bool isNull() const;

    // symbol: ??4ActorSkeletalAnimationPtr@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ActorSkeletalAnimationPtr& operator=(class ActorSkeletalAnimationPtr const&);

    // symbol: ??1ActorSkeletalAnimationPtr@@QEAA@XZ
    MCAPI ~ActorSkeletalAnimationPtr();

    // symbol: ?NONE@ActorSkeletalAnimationPtr@@2V1@B
    MCAPI static class ActorSkeletalAnimationPtr const NONE;

    // NOLINTEND
};
