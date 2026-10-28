#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadedResourceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk336365;
    ::ll::UntypedStorage<1, 1>  mUnkfc66b1;
    ::ll::UntypedStorage<8, 80> mUnk386cd6;
    ::ll::UntypedStorage<8, 56> mUnkb19307;
    ::ll::UntypedStorage<2, 2>  mUnke16d0c;
    ::ll::UntypedStorage<8, 32> mUnk880253;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadedResourceData& operator=(LoadedResourceData const&);
    LoadedResourceData(LoadedResourceData const&);
    LoadedResourceData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LoadedResourceData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
