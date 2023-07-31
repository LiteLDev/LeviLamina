#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSelector {

public:
    // prevent constructor by default
    BlockSelector& operator=(BlockSelector const&) = delete;
    BlockSelector(BlockSelector const&)            = delete;
    BlockSelector()                                = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSELECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockSelector();
#endif
    // NOLINTEND
};
