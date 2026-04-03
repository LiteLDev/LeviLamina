#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RealmsUnknownPackSources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcd975c;
    ::ll::UntypedStorage<8, 8> mUnk12b143;
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
