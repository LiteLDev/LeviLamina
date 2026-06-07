#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePack;
// clang-format on

struct RepositoryPackTuple {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd6d4d0;
    ::ll::UntypedStorage<8, 16> mUnkec28f2;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoryPackTuple& operator=(RepositoryPackTuple const&);
    RepositoryPackTuple(RepositoryPackTuple const&);
    RepositoryPackTuple();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ResourcePack* operator->();
#endif

    MCNAPI ~RepositoryPackTuple();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
