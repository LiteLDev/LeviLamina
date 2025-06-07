#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RealmsUnknownPackSources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6763b1;
    ::ll::UntypedStorage<8, 8> mUnkf75346;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsUnknownPackSources& operator=(RealmsUnknownPackSources const&);
    RealmsUnknownPackSources(RealmsUnknownPackSources const&);
    RealmsUnknownPackSources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsUnknownPackSources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
