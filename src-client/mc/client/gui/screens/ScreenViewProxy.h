#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenViewProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mUnk128b7d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenViewProxy& operator=(ScreenViewProxy const&);
    ScreenViewProxy(ScreenViewProxy const&);
    ScreenViewProxy();
};
