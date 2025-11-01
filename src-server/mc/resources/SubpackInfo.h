#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubpackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2e7e5d;
    ::ll::UntypedStorage<8, 32> mUnk98bbf2;
    ::ll::UntypedStorage<1, 1> mUnk548b8a;
    // NOLINTEND

public:
    // prevent constructor by default
    SubpackInfo& operator=(SubpackInfo const&);
    SubpackInfo(SubpackInfo const&);
    SubpackInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SubpackInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
