#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ct_data_s {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<2, 2> mUnkab32d2;
    ::ll::UntypedStorage<2, 2> mUnk7d09ee;
#else // LL_PLAT_C
    ::ll::UntypedStorage<2, 2> mUnkbc558a;
    ::ll::UntypedStorage<2, 2> mUnk16d6bf;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    ct_data_s& operator=(ct_data_s const&);
    ct_data_s(ct_data_s const&);
    ct_data_s();
};
