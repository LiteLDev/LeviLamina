#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneAnimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk5ae1b5;
    ::ll::UntypedStorage<8, 24> mUnk7f55de;
    ::ll::UntypedStorage<4, 4>  mUnkdacf56;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneAnimation& operator=(BoneAnimation const&);
    BoneAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BoneAnimation(::BoneAnimation const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BoneAnimation const&);
    // NOLINTEND
};
