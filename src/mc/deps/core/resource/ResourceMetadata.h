#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4b614e;
    ::ll::UntypedStorage<8, 32> mUnk29efd1;
    ::ll::UntypedStorage<8, 32> mUnk482403;
    ::ll::UntypedStorage<8, 32> mUnk94406c;
    ::ll::UntypedStorage<8, 16> mUnk7f5f40;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceMetadata(ResourceMetadata const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceMetadata();

    MCNAPI ::ResourceMetadata& operator=(::ResourceMetadata const&);

    MCNAPI ~ResourceMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
