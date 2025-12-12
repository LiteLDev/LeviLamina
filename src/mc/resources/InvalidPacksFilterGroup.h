#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InvalidPacksFilterGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka5bce1;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidPacksFilterGroup& operator=(InvalidPacksFilterGroup const&);
    InvalidPacksFilterGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C InvalidPacksFilterGroup(::InvalidPacksFilterGroup const&);

    MCNAPI_C ~InvalidPacksFilterGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::InvalidPacksFilterGroup const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
