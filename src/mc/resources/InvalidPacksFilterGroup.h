#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InvalidPacksFilterGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk863722;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidPacksFilterGroup& operator=(InvalidPacksFilterGroup const&);
    InvalidPacksFilterGroup(InvalidPacksFilterGroup const&);
    InvalidPacksFilterGroup();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~InvalidPacksFilterGroup();
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
