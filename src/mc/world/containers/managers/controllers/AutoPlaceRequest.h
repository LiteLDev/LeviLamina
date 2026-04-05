#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoPlaceRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkef62a6;
    ::ll::UntypedStorage<8, 48> mUnk82dfb4;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoPlaceRequest& operator=(AutoPlaceRequest const&);
    AutoPlaceRequest(AutoPlaceRequest const&);
    AutoPlaceRequest();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~AutoPlaceRequest();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
