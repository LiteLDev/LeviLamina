#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSProperty {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 16> mUnka9cb72;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 16> mUnk4608d0;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    JSProperty& operator=(JSProperty const&);
    JSProperty(JSProperty const&);
    JSProperty();
};
