#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventDispatcherToken {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTDISPATCHERTOKEN
public:
    BlockEventDispatcherToken& operator=(BlockEventDispatcherToken const&) = delete;
    BlockEventDispatcherToken(BlockEventDispatcherToken const&)            = delete;
    BlockEventDispatcherToken()                                            = delete;
#endif

public:
    /**
     * @symbol ??4BlockEventDispatcherToken\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BlockEventDispatcherToken& operator=(class BlockEventDispatcherToken&&);
    /**
     * @symbol ?unregister\@BlockEventDispatcherToken\@\@QEAAXXZ
     */
    MCAPI void unregister();
    /**
     * @symbol ??1BlockEventDispatcherToken\@\@QEAA\@XZ
     */
    MCAPI ~BlockEventDispatcherToken();
};
