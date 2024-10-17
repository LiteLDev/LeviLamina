#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISharedSpawnGetter {
public:
    // prevent constructor by default
    ISharedSpawnGetter& operator=(ISharedSpawnGetter const&);
    ISharedSpawnGetter(ISharedSpawnGetter const&);
    ISharedSpawnGetter();
};
