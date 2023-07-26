#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockComponentDirectData {

public:
    // prevent constructor by default
    BlockComponentDirectData& operator=(BlockComponentDirectData const&) = delete;
    BlockComponentDirectData(BlockComponentDirectData const&)            = delete;
    BlockComponentDirectData()                                           = delete;

public:
    /**
     * @symbol ?finalize\@BlockComponentDirectData\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void finalize(class Block const&); // NOLINT
};
