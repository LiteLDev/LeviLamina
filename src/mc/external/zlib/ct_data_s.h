#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ct_data_s {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<2, 2> mUnk74a2ee;
    ::ll::UntypedStorage<2, 2> mUnk812c9e;
#else // LL_PLAT_C
    ::ll::UntypedStorage<2, 2> mUnkeecca7;
    ::ll::UntypedStorage<2, 2> mUnkd3dbd8;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    ct_data_s& operator=(ct_data_s const&);
    ct_data_s(ct_data_s const&);
    ct_data_s();
};
