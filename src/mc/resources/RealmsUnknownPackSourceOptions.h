#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RealmsUnknownPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd77a80;
    ::ll::UntypedStorage<1, 1> mUnkfbcbdf;
    ::ll::UntypedStorage<1, 1> mUnkd5b7f2;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsUnknownPackSourceOptions& operator=(RealmsUnknownPackSourceOptions const&);
    RealmsUnknownPackSourceOptions(RealmsUnknownPackSourceOptions const&);
    RealmsUnknownPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsUnknownPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
