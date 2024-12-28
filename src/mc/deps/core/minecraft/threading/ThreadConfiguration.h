#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ThreadConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke26f23;
    ::ll::UntypedStorage<8, 16> mUnk1038f2;
    ::ll::UntypedStorage<4, 4>  mUnk992e78;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadConfiguration& operator=(ThreadConfiguration const&);
    ThreadConfiguration(ThreadConfiguration const&);
    ThreadConfiguration();
};
