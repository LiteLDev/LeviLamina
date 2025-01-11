#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubpackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2e7e5d;
    ::ll::UntypedStorage<8, 32> mUnk98bbf2;
    ::ll::UntypedStorage<4, 4>  mUnk18ecfb;
    // NOLINTEND

public:
    // prevent constructor by default
    SubpackInfo& operator=(SubpackInfo const&);
    SubpackInfo(SubpackInfo const&);
    SubpackInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SubpackInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
