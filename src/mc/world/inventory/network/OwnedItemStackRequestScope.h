#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OwnedItemStackRequestScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8d6d10;
    ::ll::UntypedStorage<1, 1>  mUnkd7b60a;
    ::ll::UntypedStorage<8, 16> mUnk11b0f4;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedItemStackRequestScope& operator=(OwnedItemStackRequestScope const&);
    OwnedItemStackRequestScope(OwnedItemStackRequestScope const&);
    OwnedItemStackRequestScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~OwnedItemStackRequestScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
