#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateTrackerDiff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk86bdde;
    ::ll::UntypedStorage<8, 16> mUnk49779f;
    ::ll::UntypedStorage<1, 2>  mUnk9e9943;
    ::ll::UntypedStorage<4, 16> mUnke8275a;
    ::ll::UntypedStorage<4, 16> mUnk58f400;
    ::ll::UntypedStorage<1, 2>  mUnk395446;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplayStateTrackerDiff& operator=(ReplayStateTrackerDiff const&);
    ReplayStateTrackerDiff(ReplayStateTrackerDiff const&);
    ReplayStateTrackerDiff();
};
