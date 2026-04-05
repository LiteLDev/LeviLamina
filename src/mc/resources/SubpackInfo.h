#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubpackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3084c6;
    ::ll::UntypedStorage<8, 32> mUnk939ca8;
    ::ll::UntypedStorage<1, 1>  mUnk548b8a;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SubpackInfo& operator=(SubpackInfo const&);
    SubpackInfo(SubpackInfo const&);
    SubpackInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    SubpackInfo(SubpackInfo const&);
    SubpackInfo();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::SubpackInfo& operator=(::SubpackInfo const&);
#endif

    MCNAPI ~SubpackInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
