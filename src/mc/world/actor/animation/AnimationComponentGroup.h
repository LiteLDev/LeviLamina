#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/AnimationComponentGroupType.h"

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class AnimationComponentID;
// clang-format on

class AnimationComponentGroup {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::AnimationComponentID, ::std::weak_ptr<::AnimationComponent>>&
    _getAllAnimationComponents(::AnimationComponentGroupType groupType);

    MCNAPI static ::std::shared_ptr<::AnimationComponent>
    getAnimationComponent(::AnimationComponentGroupType groupType, ::AnimationComponentID ownerUUID);

    MCNAPI_C static void onFrameRendered();

    MCNAPI static void
    releaseAnimationComponent(::AnimationComponentGroupType groupType, ::AnimationComponentID ownerUUID);
    // NOLINTEND
};
