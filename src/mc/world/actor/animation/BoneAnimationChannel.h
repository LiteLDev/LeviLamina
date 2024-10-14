#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneAnimationChannel {
public:
    // prevent constructor by default
    BoneAnimationChannel& operator=(BoneAnimationChannel const&);
    BoneAnimationChannel();

public:
    // NOLINTBEGIN
    MCAPI BoneAnimationChannel(class BoneAnimationChannel const&);

    MCAPI class KeyFrameTransform& addKeyFrame(float time);

    MCAPI void sortKeyFrames();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
