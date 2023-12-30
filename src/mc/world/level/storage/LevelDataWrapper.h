#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDataWrapper {
public:
    // prevent constructor by default
    LevelDataWrapper& operator=(LevelDataWrapper const&);
    LevelDataWrapper(LevelDataWrapper const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LevelDataWrapper@@QEAA@XZ
    MCAPI LevelDataWrapper();

    // symbol: ??DLevelDataWrapper@@QEAAAEAVLevelData@@XZ
    MCAPI class LevelData& operator*();

    // symbol: ??DLevelDataWrapper@@QEBAAEBVLevelData@@XZ
    MCAPI class LevelData const& operator*() const;

    // symbol: ??CLevelDataWrapper@@QEAAPEAVLevelData@@XZ
    MCAPI class LevelData* operator->();

    // symbol: ??CLevelDataWrapper@@QEBAPEBVLevelData@@XZ
    MCAPI class LevelData const* operator->() const;

    // symbol: ?setLevelData@LevelDataWrapper@@QEAAXAEAVLevelData@@@Z
    MCAPI void setLevelData(class LevelData& levelData);

    // symbol: ??1LevelDataWrapper@@QEAA@XZ
    MCAPI ~LevelDataWrapper();

    // NOLINTEND
};
