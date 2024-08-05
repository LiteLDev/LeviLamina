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
    MCAPI BlockEventDispatcherToken();

    MCAPI BlockEventDispatcherToken(class BlockEventDispatcherToken&&);

    MCAPI class BlockEventDispatcher* getDispatcher() const;

    MCAPI int getHandle() const;

    MCAPI bool isValid() const;

    MCAPI class BlockEventDispatcherToken& operator=(class BlockEventDispatcherToken&& rhs);

    MCAPI void unregister();

    MCAPI ~BlockEventDispatcherToken();

    // NOLINTEND
};
