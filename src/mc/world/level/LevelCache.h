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
    // symbol: ??0LevelCache@@QEAA@V?$OwnerPtr@VLevelData@@@@@Z
    MCAPI explicit LevelCache(class OwnerPtr<class LevelData>);

    // symbol: ??1LevelCache@@QEAA@XZ
    MCAPI ~LevelCache();

    // NOLINTEND
};
