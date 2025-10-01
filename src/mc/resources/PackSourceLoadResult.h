#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackSourceLoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk305d64;
    ::ll::UntypedStorage<8, 24> mUnk1afb45;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceLoadResult& operator=(PackSourceLoadResult const&);
    PackSourceLoadResult(PackSourceLoadResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSourceLoadResult();

    MCNAPI ~PackSourceLoadResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
