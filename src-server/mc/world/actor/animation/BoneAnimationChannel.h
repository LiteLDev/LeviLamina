#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class KeyFrameTransform;
// clang-format on

class BoneAnimationChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk639e19;
    ::ll::UntypedStorage<8, 24> mUnk746181;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneAnimationChannel& operator=(BoneAnimationChannel const&);
    BoneAnimationChannel(BoneAnimationChannel const&);
    BoneAnimationChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::KeyFrameTransform& addKeyFrame(float time);
    // NOLINTEND

};
