#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd302b9;
    ::ll::UntypedStorage<4, 4> mUnka2a2d5;
    ::ll::UntypedStorage<8, 8> mUnke4e888;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 32> mUnk5a9385;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 32> mUnk5db923;
#endif
    // NOLINTEND
};
