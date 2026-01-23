#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSProperty {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 16> mUnkd54b53;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 16> mUnk2b6445;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    JSProperty& operator=(JSProperty const&);
    JSProperty(JSProperty const&);
    JSProperty();
};
