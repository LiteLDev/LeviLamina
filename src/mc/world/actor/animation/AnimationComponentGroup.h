#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/AnimationComponentGroupType.h"

// auto generated forward declare list
// clang-format off
class AnimationComponent;
class AnimationComponentID;
struct AnimationComponentArguments;
// clang-format on

class AnimationComponentGroup {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::AnimationComponentID, ::std::weak_ptr<::AnimationComponent>>&
    _getAllAnimationComponents(::AnimationComponentGroupType groupType);

    MCAPI static ::std::shared_ptr<::AnimationComponent>
    getAnimationComponent(::AnimationComponentGroupType groupType, ::AnimationComponentID ownerUUID);

#ifdef LL_PLAT_C
    MCAPI static void onFrameRendered();
#endif

    MCAPI static void
    releaseAnimationComponent(::AnimationComponentGroupType groupType, ::AnimationComponentID ownerUUID);

#ifdef LL_PLAT_C
    MCAPI static void
    setFactory(::gsl::not_null<::std::unique_ptr<::AnimationComponent> (*)(::AnimationComponentArguments&&)> factory);
#endif
    // NOLINTEND
};
