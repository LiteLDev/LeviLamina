#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ct_data_s {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<2, 2> mUnk6ee502;
    ::ll::UntypedStorage<2, 2> mUnk6ba071;
#else // LL_PLAT_C
    ::ll::UntypedStorage<2, 2> mUnk7069db;
    ::ll::UntypedStorage<2, 2> mUnk1f00cf;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    ct_data_s& operator=(ct_data_s const&);
    ct_data_s(ct_data_s const&);
    ct_data_s();
};
