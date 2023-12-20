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
    // symbol: ??1BlockComponentStorage@@UEAA@XZ
    MCVAPI ~BlockComponentStorage();

    // symbol: ?addingComponentsIsAllowed@BlockComponentStorage@@QEBA_NXZ
    MCAPI bool addingComponentsIsAllowed() const;

    // symbol: ?allowComponentReplacement@BlockComponentStorage@@QEAAXXZ
    MCAPI void allowComponentReplacement();

    // symbol: ?allowTryGetComponentBeforeFinalization@BlockComponentStorage@@QEAAXXZ
    MCAPI void allowTryGetComponentBeforeFinalization();

    // symbol: ?finalizeComponents@BlockComponentStorage@@QEAAXXZ
    MCAPI void finalizeComponents();

    // NOLINTEND
};
