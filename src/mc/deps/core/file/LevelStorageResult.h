#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct LevelStorageResult {
public:
    // prevent constructor by default
    LevelStorageResult& operator=(LevelStorageResult const&);
    LevelStorageResult(LevelStorageResult const&);
    LevelStorageResult();

public:
    // NOLINTBEGIN
    MCAPI ~LevelStorageResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core
