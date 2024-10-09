#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageObserver {
public:
    // prevent constructor by default
    LevelStorageObserver& operator=(LevelStorageObserver const&);
    LevelStorageObserver(LevelStorageObserver const&);
    LevelStorageObserver();

public:
    // NOLINTBEGIN
    MCAPI void onSave(std::string const& levelId);

    // NOLINTEND
};
