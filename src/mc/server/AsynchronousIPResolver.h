#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsynchronousIPResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka91997;
    ::ll::UntypedStorage<8, 16> mUnk227489;
    ::ll::UntypedStorage<8, 16> mUnkbeda29;
    // NOLINTEND

public:
    // prevent constructor by default
    AsynchronousIPResolver& operator=(AsynchronousIPResolver const&);
    AsynchronousIPResolver(AsynchronousIPResolver const&);
    AsynchronousIPResolver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsynchronousIPResolver(::std::string url);

    MCNAPI void _resolveIfNeeded();

#ifdef LL_PLAT_C
    MCNAPI ~AsynchronousIPResolver();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string url);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
