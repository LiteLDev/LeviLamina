#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventDispatcherToken {

public:
    // prevent constructor by default
    BlockEventDispatcherToken& operator=(BlockEventDispatcherToken const&) = delete;
    BlockEventDispatcherToken(BlockEventDispatcherToken const&)            = delete;
    BlockEventDispatcherToken()                                            = delete;

public:
    /**
     * @symbol ??4BlockEventDispatcherToken\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BlockEventDispatcherToken& operator=(class BlockEventDispatcherToken&&); // NOLINT
    /**
     * @symbol ?unregister\@BlockEventDispatcherToken\@\@QEAAXXZ
     */
    MCAPI void unregister(); // NOLINT
    /**
     * @symbol ??1BlockEventDispatcherToken\@\@QEAA\@XZ
     */
    MCAPI ~BlockEventDispatcherToken(); // NOLINT
};
