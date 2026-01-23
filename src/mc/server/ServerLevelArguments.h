#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerLevelArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 304> mUnkc7f7aa;
    ::ll::UntypedStorage<8, 8>   mUnk614769;
    ::ll::UntypedStorage<8, 8>   mUnk3ac172;
    ::ll::UntypedStorage<8, 8>   mUnk9f15c5;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLevelArguments& operator=(ServerLevelArguments const&);
    ServerLevelArguments(ServerLevelArguments const&);
    ServerLevelArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerLevelArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
