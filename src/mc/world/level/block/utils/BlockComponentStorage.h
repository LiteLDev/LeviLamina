#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockComponentStorage {
public:
    // prevent constructor by default
    BlockComponentStorage& operator=(BlockComponentStorage const&) = delete;
    BlockComponentStorage(BlockComponentStorage const&)            = delete;
    BlockComponentStorage()                                        = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1BlockComponentStorage@@UEAA@XZ
    MCVAPI ~BlockComponentStorage();

    // symbol: ?allowComponentReplacement@BlockComponentStorage@@QEAAXXZ
    MCAPI void allowComponentReplacement();

    // symbol: ?finalizeComponents@BlockComponentStorage@@QEAAXXZ
    MCAPI void finalizeComponents();

    // NOLINTEND
};
