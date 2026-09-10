#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ct_data_s {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<2, 2> mUnk5d7de2;
    ::ll::UntypedStorage<2, 2> mUnkfc9fdb;
#else // LL_PLAT_C
    ::ll::UntypedStorage<2, 2> mUnkbbbc55;
    ::ll::UntypedStorage<2, 2> mUnk1a6daf;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    ct_data_s& operator=(ct_data_s const&);
    ct_data_s(ct_data_s const&);
    ct_data_s();
};
