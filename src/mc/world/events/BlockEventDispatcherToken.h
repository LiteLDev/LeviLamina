#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventDispatcherToken {
public:
    // prevent constructor by default
    BlockEventDispatcherToken& operator=(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken(BlockEventDispatcherToken const&);

public:
    // NOLINTBEGIN
    MCAPI BlockEventDispatcherToken();

    MCAPI BlockEventDispatcherToken(class BlockEventDispatcherToken&& rhs);

    MCAPI class BlockEventDispatcher* getDispatcher() const;

    MCAPI int getHandle() const;

    MCAPI bool isValid() const;

    MCAPI class BlockEventDispatcherToken& operator=(class BlockEventDispatcherToken&& rhs);

    MCAPI void unregister();

    MCAPI ~BlockEventDispatcherToken();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class BlockEventDispatcherToken&& rhs);

    MCAPI void dtor$();

    // NOLINTEND
};
