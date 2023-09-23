#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneAnimationChannel {
public:
    // prevent constructor by default
    BoneAnimationChannel& operator=(BoneAnimationChannel const&);
    BoneAnimationChannel(BoneAnimationChannel const&);
    BoneAnimationChannel();

public:
    // NOLINTBEGIN
    // symbol: ?addKeyFrame@BoneAnimationChannel@@QEAAAEAVKeyFrameTransform@@M@Z
    MCAPI class KeyFrameTransform& addKeyFrame(float);

    // symbol: ?sortKeyFrames@BoneAnimationChannel@@QEAAXXZ
    MCAPI void sortKeyFrames();

    // NOLINTEND
};
