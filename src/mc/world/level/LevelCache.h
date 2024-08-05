#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"

class LevelCache {
public:
    // prevent constructor by default
    LevelCache& operator=(LevelCache const&);
    LevelCache(LevelCache const&);
    LevelCache();

public:
    // NOLINTBEGIN
    MCAPI explicit LevelCache(class OwnerPtr<class LevelData>);

    MCAPI ~LevelCache();

    // NOLINTEND
};
