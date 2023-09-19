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
    // symbol: ??1LevelStorageResult@Core@@QEAA@XZ
    MCAPI ~LevelStorageResult();

    // NOLINTEND
};

}; // namespace Core
