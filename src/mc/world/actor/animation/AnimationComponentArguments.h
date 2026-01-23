#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/AnimationComponentGroupType.h"

// auto generated forward declare list
// clang-format off
class AnimationComponentID;
// clang-format on

struct AnimationComponentArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AnimationComponentGroupType> mAnimationComponentGroup;
    ::ll::TypedStorage<8, 8, ::AnimationComponentID const&> mOwnerUUID;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationComponentArguments& operator=(AnimationComponentArguments const&);
    AnimationComponentArguments(AnimationComponentArguments const&);
    AnimationComponentArguments();
};
