#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BoneAnimationRelativeMode.h"
#include "mc/enums/BoneTransformType.h"

class BoneAnimation {
public:
    // prevent constructor by default
    BoneAnimation& operator=(BoneAnimation const&);
    BoneAnimation(BoneAnimation const&);
    BoneAnimation();

public:
    // NOLINTBEGIN
    MCAPI class BoneAnimationChannel& addAnimationChannel(::BoneTransformType boneTransformType);

    MCAPI void setRotationRelativeMode(::BoneAnimationRelativeMode rotationRelativeMode);

    // NOLINTEND
};
