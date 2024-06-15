#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneAnimationChannel {
public:
    // prevent constructor by default
    BoneAnimationChannel& operator=(BoneAnimationChannel const&);
    BoneAnimationChannel();

public:
    // NOLINTBEGIN
    // symbol: ??0BoneAnimationChannel@@QEAA@AEBV0@@Z
    MCAPI BoneAnimationChannel(class BoneAnimationChannel const&);

    // symbol: ?addKeyFrame@BoneAnimationChannel@@QEAAAEAVKeyFrameTransform@@M@Z
    MCAPI class KeyFrameTransform& addKeyFrame(float time);

    // symbol: ?sortKeyFrames@BoneAnimationChannel@@QEAAXXZ
    MCAPI void sortKeyFrames();

    // NOLINTEND
};
