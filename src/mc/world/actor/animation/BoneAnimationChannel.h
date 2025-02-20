#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneAnimationChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk639e19;
    ::ll::UntypedStorage<8, 24> mUnk746181;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneAnimationChannel& operator=(BoneAnimationChannel const&);
    BoneAnimationChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BoneAnimationChannel(::BoneAnimationChannel const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BoneAnimationChannel const&);
    // NOLINTEND
};
