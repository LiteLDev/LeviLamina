#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ct_data_s {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<2, 2> mUnk402d0e;
    ::ll::UntypedStorage<2, 2> mUnk8ed594;
#else // LL_PLAT_C
    ::ll::UntypedStorage<2, 2> mUnk43110e;
    ::ll::UntypedStorage<2, 2> mUnk3b880d;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    ct_data_s& operator=(ct_data_s const&);
    ct_data_s(ct_data_s const&);
    ct_data_s();
};
