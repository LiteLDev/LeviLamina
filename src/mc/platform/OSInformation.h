#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OSInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4530db;
    ::ll::UntypedStorage<4, 4>  mUnkf2b206;
    ::ll::UntypedStorage<8, 32> mUnkd56456;
    // NOLINTEND

public:
    // prevent constructor by default
    OSInformation& operator=(OSInformation const&);
    OSInformation(OSInformation const&);
    OSInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~OSInformation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
