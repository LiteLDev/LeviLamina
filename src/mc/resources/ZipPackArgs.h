#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ZipPackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk81d337;
    ::ll::UntypedStorage<8, 32> mUnkfb97ec;
    ::ll::UntypedStorage<1, 1>  mUnk7a9851;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipPackArgs& operator=(ZipPackArgs const&);
    ZipPackArgs(ZipPackArgs const&);
    ZipPackArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ZipPackArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
