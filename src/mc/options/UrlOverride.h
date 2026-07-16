#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UrlOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf6e712;
    ::ll::UntypedStorage<8, 32> mUnk8b49db;
    ::ll::UntypedStorage<8, 32> mUnk20d762;
    // NOLINTEND

public:
    // prevent constructor by default
    UrlOverride& operator=(UrlOverride const&);
    UrlOverride(UrlOverride const&);
    UrlOverride();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::UrlOverride& operator=(::UrlOverride&&);

    MCNAPI ~UrlOverride();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
