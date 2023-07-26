#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneAnimation {

public:
    // prevent constructor by default
    BoneAnimation& operator=(BoneAnimation const&) = delete;
    BoneAnimation(BoneAnimation const&)            = delete;
    BoneAnimation()                                = delete;
};
