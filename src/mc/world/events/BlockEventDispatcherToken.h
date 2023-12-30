#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventDispatcherToken {
public:
    // prevent constructor by default
    BlockEventDispatcherToken& operator=(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken();

public:
    // NOLINTBEGIN
    // symbol: ??4BlockEventDispatcherToken@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class BlockEventDispatcherToken& operator=(class BlockEventDispatcherToken&& rhs);

    // symbol: ?unregister@BlockEventDispatcherToken@@QEAAXXZ
    MCAPI void unregister();

    // symbol: ??1BlockEventDispatcherToken@@QEAA@XZ
    MCAPI ~BlockEventDispatcherToken();

    // NOLINTEND
};
