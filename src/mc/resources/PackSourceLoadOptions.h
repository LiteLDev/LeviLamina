#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackSourceLoadOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2d9743;
    ::ll::UntypedStorage<8, 24> mUnk2ff64e;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceLoadOptions& operator=(PackSourceLoadOptions const&);
    PackSourceLoadOptions(PackSourceLoadOptions const&);
    PackSourceLoadOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackSourceLoadOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
