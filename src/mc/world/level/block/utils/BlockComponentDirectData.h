#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockComponentDirectData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTDIRECTDATA
public:
    BlockComponentDirectData& operator=(BlockComponentDirectData const&) = delete;
    BlockComponentDirectData(BlockComponentDirectData const&)            = delete;
    BlockComponentDirectData()                                           = delete;
#endif

public:
    /**
     * @symbol ?finalize\@BlockComponentDirectData\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void finalize(class Block const&);
};
