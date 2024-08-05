#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelStorageEventingContext {
public:
    // prevent constructor by default
    LevelStorageEventingContext& operator=(LevelStorageEventingContext const&);
    LevelStorageEventingContext(LevelStorageEventingContext const&);
    LevelStorageEventingContext();

public:
    // NOLINTBEGIN
    MCAPI ~LevelStorageEventingContext();

    // NOLINTEND
};
