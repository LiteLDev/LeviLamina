#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadedResourceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3cf435;
    ::ll::UntypedStorage<8, 32> mUnk232c89;
    ::ll::UntypedStorage<1, 1>  mUnkfc66b1;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadedResourceData& operator=(LoadedResourceData const&);
    LoadedResourceData(LoadedResourceData const&);
    LoadedResourceData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~LoadedResourceData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
