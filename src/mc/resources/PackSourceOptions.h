#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6e886d;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceOptions& operator=(PackSourceOptions const&);
    PackSourceOptions(PackSourceOptions const&);
    PackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
