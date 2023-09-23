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
    // symbol: ?addAnimationChannel@BoneAnimation@@QEAAAEAVBoneAnimationChannel@@W4BoneTransformType@@@Z
    MCAPI class BoneAnimationChannel& addAnimationChannel(::BoneTransformType);

    // symbol: ?setRotationRelativeMode@BoneAnimation@@QEAAXW4BoneAnimationRelativeMode@@@Z
    MCAPI void setRotationRelativeMode(::BoneAnimationRelativeMode);

    // NOLINTEND
};
