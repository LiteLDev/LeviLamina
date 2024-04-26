#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/dimension/BlockEventDispatcher.h"

class BlockEventDispatcherToken {
public:
    // prevent constructor by default
    BlockEventDispatcherToken& operator=(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken(BlockEventDispatcherToken const&);

    int                         mHandle;     // this+0x0
    class BlockEventDispatcher* mDispatcher; // this+0x8
public:
    // NOLINTBEGIN
    // symbol: ??0BlockEventDispatcherToken@@QEAA@XZ
    MCAPI BlockEventDispatcherToken();

    // symbol: ??0BlockEventDispatcherToken@@QEAA@$$QEAV0@@Z
    MCAPI BlockEventDispatcherToken(class BlockEventDispatcherToken&&);

    // symbol: ?getDispatcher@BlockEventDispatcherToken@@QEBAPEAVBlockEventDispatcher@@XZ
    MCAPI class BlockEventDispatcher* getDispatcher() const;

    // symbol: ?getHandle@BlockEventDispatcherToken@@QEBAHXZ
    MCAPI int getHandle() const;

    // symbol: ?isValid@BlockEventDispatcherToken@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??4BlockEventDispatcherToken@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class BlockEventDispatcherToken& operator=(class BlockEventDispatcherToken&& rhs);

    // symbol: ?unregister@BlockEventDispatcherToken@@QEAAXXZ
    MCAPI void unregister();

    // symbol: ??1BlockEventDispatcherToken@@QEAA@XZ
    MCAPI ~BlockEventDispatcherToken();

    // NOLINTEND
};
