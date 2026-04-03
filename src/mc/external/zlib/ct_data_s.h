#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ct_data_s {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<2, 2> mUnka6f583;
    ::ll::UntypedStorage<2, 2> mUnkb4030f;
#else // LL_PLAT_C
    ::ll::UntypedStorage<2, 2> mUnka5963a;
    ::ll::UntypedStorage<2, 2> mUnk69cabd;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    ct_data_s& operator=(ct_data_s const&);
    ct_data_s(ct_data_s const&);
    ct_data_s();
};
