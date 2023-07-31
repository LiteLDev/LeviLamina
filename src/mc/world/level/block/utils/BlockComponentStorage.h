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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTSTORAGE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockComponentStorage();
#endif
    /**
     * @symbol ?allowComponentReplacement\@BlockComponentStorage\@\@QEAAXXZ
     */
    MCAPI void allowComponentReplacement();
    /**
     * @symbol ?finalizeComponents\@BlockComponentStorage\@\@QEAAXXZ
     */
    MCAPI void finalizeComponents();
    // NOLINTEND
};
