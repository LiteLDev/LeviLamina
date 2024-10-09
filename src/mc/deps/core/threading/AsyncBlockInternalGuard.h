#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncBlockInternalGuard {
public:
    // prevent constructor by default
    AsyncBlockInternalGuard& operator=(AsyncBlockInternalGuard const&);
    AsyncBlockInternalGuard(AsyncBlockInternalGuard const&);
    AsyncBlockInternalGuard();

public:
    // NOLINTBEGIN
    MCAPI explicit AsyncBlockInternalGuard(struct XAsyncBlock*);

    // NOLINTEND
};
