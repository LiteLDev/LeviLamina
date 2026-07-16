#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackAccessStrategies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk337200;
    ::ll::UntypedStorage<8, 8> mUnk94c915;
    // NOLINTEND

public:
    // prevent constructor by default
    PackAccessStrategies& operator=(PackAccessStrategies const&);
    PackAccessStrategies(PackAccessStrategies const&);
    PackAccessStrategies();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~PackAccessStrategies();
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
