#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeIdLatticeBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mAreaOffset;
    ::ll::TypedStorage<4, 4, int>                 mGridOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mBiomeIds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~BiomeIdLatticeBatch();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
