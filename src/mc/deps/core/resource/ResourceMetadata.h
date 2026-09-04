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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ResourceMetadata& operator=(ResourceMetadata const&);
    ResourceMetadata();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourceMetadata();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceMetadata(::ResourceMetadata const&);

#ifdef LL_PLAT_C
    MCNAPI ::ResourceMetadata& operator=(::ResourceMetadata const&);
#endif

    MCNAPI ~ResourceMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
