#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke8d383;
    ::ll::UntypedStorage<8, 32> mUnkf32c39;
    ::ll::UntypedStorage<8, 32> mUnka8781f;
    ::ll::UntypedStorage<8, 32> mUnk7ea2be;
    ::ll::UntypedStorage<8, 16> mUnk204e24;
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
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& PRODUCT_TYPE_ADD_ON();
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
