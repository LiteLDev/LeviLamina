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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    UrlOverride& operator=(UrlOverride const&);
    UrlOverride(UrlOverride const&);
    UrlOverride();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    UrlOverride& operator=(UrlOverride const&);
    UrlOverride();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI UrlOverride(::UrlOverride const&);

    MCNAPI ::UrlOverride& operator=(::UrlOverride&&);

    MCNAPI ~UrlOverride();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::UrlOverride const&);
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
