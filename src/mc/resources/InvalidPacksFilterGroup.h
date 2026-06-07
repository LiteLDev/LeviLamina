#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

struct InvalidPacksFilterGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk863722;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    InvalidPacksFilterGroup& operator=(InvalidPacksFilterGroup const&);
    InvalidPacksFilterGroup(InvalidPacksFilterGroup const&);
    InvalidPacksFilterGroup();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    InvalidPacksFilterGroup& operator=(InvalidPacksFilterGroup const&);
    InvalidPacksFilterGroup(InvalidPacksFilterGroup const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI InvalidPacksFilterGroup();

    MCNAPI ::InvalidPacksFilterGroup& addFilter(::PackType packFilter);

    MCNAPI ~InvalidPacksFilterGroup();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
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
