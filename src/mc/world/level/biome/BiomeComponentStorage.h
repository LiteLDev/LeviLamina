#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeComponentStorage {
public:
    // prevent constructor by default
    BiomeComponentStorage& operator=(BiomeComponentStorage const&);
    BiomeComponentStorage(BiomeComponentStorage const&);
    BiomeComponentStorage();

public:
    // NOLINTBEGIN
    // symbol: ?finalizeComponents@BiomeComponentStorage@@QEAAXXZ
    MCAPI void finalizeComponents();

    // NOLINTEND
};
