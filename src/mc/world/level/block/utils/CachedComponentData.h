#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CachedComponentData {
public:
    // prevent constructor by default
    CachedComponentData& operator=(CachedComponentData const&);
    CachedComponentData(CachedComponentData const&);
    CachedComponentData();

public:
    // NOLINTBEGIN
    // symbol: ?cacheComponentData@CachedComponentData@@QEAAXAEBVBlock@@@Z
    MCAPI void cacheComponentData(class Block const& block);

    // NOLINTEND
};
