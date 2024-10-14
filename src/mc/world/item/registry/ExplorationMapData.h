#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExplorationMapData {
public:
    // prevent constructor by default
    ExplorationMapData& operator=(ExplorationMapData const&);
    ExplorationMapData(ExplorationMapData const&);
    ExplorationMapData();

public:
    // NOLINTBEGIN
    MCAPI ~ExplorationMapData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
