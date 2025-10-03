#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasItemFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk102e2b;
    ::ll::UntypedStorage<4, 8>  mUnkc272aa;
    ::ll::UntypedStorage<4, 12> mUnkb1d382;
    ::ll::UntypedStorage<8, 32> mUnkc777c4;
    ::ll::UntypedStorage<4, 12> mUnk3132f4;
    // NOLINTEND

public:
    // prevent constructor by default
    HasItemFilter& operator=(HasItemFilter const&);
    HasItemFilter(HasItemFilter const&);
    HasItemFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HasItemFilter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
