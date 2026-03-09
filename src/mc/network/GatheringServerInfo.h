#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GatheringServerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mGatheringId;
    ::ll::TypedStorage<8, 32, ::std::string> mGatheringIdAsCreatorName;
    ::ll::TypedStorage<8, 32, ::std::string> mTitle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GatheringServerInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
