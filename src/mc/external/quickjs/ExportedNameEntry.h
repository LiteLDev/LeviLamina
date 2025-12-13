#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExportedNameEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc441c0;
    ::ll::UntypedStorage<4, 4> mUnkcbbccb;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 8> mUnk83db7e;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 8> mUnke84503;
#endif
    // NOLINTEND
};
