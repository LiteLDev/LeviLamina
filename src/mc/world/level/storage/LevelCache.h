#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

class LevelCache {
public:
    // prevent constructor by default
    LevelCache& operator=(LevelCache const&);
    LevelCache(LevelCache const&);
    LevelCache();

public:
    // NOLINTBEGIN
    MCAPI explicit LevelCache(class OwnerPtr<class LevelData> data);

    MCAPI ~LevelCache();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class OwnerPtr<class LevelData> data);

    MCAPI void dtor$();

    // NOLINTEND
};
