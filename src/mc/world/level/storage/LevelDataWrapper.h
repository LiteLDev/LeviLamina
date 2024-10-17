#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDataWrapper {
public:
    // prevent constructor by default
    LevelDataWrapper& operator=(LevelDataWrapper const&);
    LevelDataWrapper(LevelDataWrapper const&);

public:
    // NOLINTBEGIN
    MCAPI LevelDataWrapper();

    MCAPI class LevelData& operator*();

    MCAPI class LevelData const& operator*() const;

    MCAPI class LevelData const* operator->() const;

    MCAPI void setLevelData(class LevelData& levelData);

    MCAPI ~LevelDataWrapper();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
