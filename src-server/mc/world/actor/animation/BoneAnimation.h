#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneAnimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk5ae1b5;
    ::ll::UntypedStorage<8, 24> mUnk7f55de;
    ::ll::UntypedStorage<1, 1>  mUnkdacf56;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneAnimation& operator=(BoneAnimation const&);
    BoneAnimation(BoneAnimation const&);
    BoneAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BoneAnimation(::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& name);
    // NOLINTEND
};
