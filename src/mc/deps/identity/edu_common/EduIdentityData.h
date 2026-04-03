#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduIdentityData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk90f184;
    ::ll::UntypedStorage<1, 1>  mUnkb528a4;
    ::ll::UntypedStorage<8, 80> mUnk250984;
    ::ll::UntypedStorage<8, 32> mUnk45a3b6;
    // NOLINTEND

public:
    // prevent constructor by default
    EduIdentityData& operator=(EduIdentityData const&);
    EduIdentityData(EduIdentityData const&);
    EduIdentityData();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
