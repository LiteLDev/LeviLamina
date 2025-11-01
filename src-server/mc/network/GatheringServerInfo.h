#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GatheringServerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk79c251;
    ::ll::UntypedStorage<8, 32> mUnk7056a8;
    ::ll::UntypedStorage<8, 32> mUnkcbe96d;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringServerInfo& operator=(GatheringServerInfo const&);
    GatheringServerInfo(GatheringServerInfo const&);
    GatheringServerInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GatheringServerInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
