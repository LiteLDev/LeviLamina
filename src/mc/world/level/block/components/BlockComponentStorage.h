#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockComponentStorage {
public:
    // prevent constructor by default
    BlockComponentStorage& operator=(BlockComponentStorage const&);
    BlockComponentStorage(BlockComponentStorage const&);
    BlockComponentStorage();

public:
    // NOLINTBEGIN
    MCVAPI ~BlockComponentStorage();

    MCAPI bool addingComponentsIsAllowed() const;

    MCAPI void allowComponentReplacement();

    MCAPI void allowTryGetComponentBeforeFinalization();

    MCAPI void finalizeComponents();

    // NOLINTEND
};
