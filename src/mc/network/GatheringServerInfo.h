#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GatheringServerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk79c251;
    ::ll::UntypedStorage<8, 32> mUnk7056a8;
    ::ll::UntypedStorage<8, 32> mUnk905dc7;
    ::ll::UntypedStorage<8, 32> mUnkcbe96d;
    ::ll::UntypedStorage<4, 4>  mUnkabe6ce;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringServerInfo(GatheringServerInfo const&);
    GatheringServerInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::GatheringServerInfo& operator=(::GatheringServerInfo const&);

    MCAPI ~GatheringServerInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
