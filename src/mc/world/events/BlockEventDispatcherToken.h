#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/dimension/BlockEventDispatcher.h"

class BlockEventDispatcherToken {
public:
    // prevent constructor by default
    BlockEventDispatcherToken& operator=(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken();

    int                         mHandle;     // this+0x0
    class BlockEventDispatcher* mDispatcher; // this+0x8
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
