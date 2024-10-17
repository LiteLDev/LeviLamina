#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/AnimationComponentGroupType.h"

class AnimationComponentGroup {
public:
    // prevent constructor by default
    AnimationComponentGroup& operator=(AnimationComponentGroup const&);
    AnimationComponentGroup(AnimationComponentGroup const&);
    AnimationComponentGroup();

public:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<class AnimationComponentID, std::weak_ptr<class AnimationComponent>>&
    _getAllAnimationComponents(::AnimationComponentGroupType groupType);

    MCAPI static std::shared_ptr<class AnimationComponent>
    getAnimationComponent(::AnimationComponentGroupType groupType, class AnimationComponentID ownerUUID);

    MCAPI static void
    releaseAnimationComponent(::AnimationComponentGroupType groupType, class AnimationComponentID ownerUUID);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::recursive_mutex& _getAnimationComponentMapLock();

    // NOLINTEND
};
