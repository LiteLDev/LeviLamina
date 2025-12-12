#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ct_data_s {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<2, 2> mUnk511d4c;
    ::ll::UntypedStorage<2, 2> mUnka61b5d;
#else // LL_PLAT_C
    ::ll::UntypedStorage<2, 2> mUnkd4fdac;
    ::ll::UntypedStorage<2, 2> mUnk4da1c6;
#endif
    // NOLINTEND
};
