#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk443cc4;
    uint                       mUnk63bd4a : 31;
    uchar                      mUnk612382 : 1;
    uint                       mUnk98c10e : 30;
    uchar                      mUnk85b39d : 2;
    ::ll::UntypedStorage<4, 4> mUnkfbf9e4;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<2, 2> mUnkddded3;
#else // LL_PLAT_C
    ::ll::UntypedStorage<2, 2> mUnk279b0e;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    JSString& operator=(JSString const&);
    JSString(JSString const&);
    JSString();
};
