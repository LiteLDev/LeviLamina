#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSelector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSELECTOR
public:
    BlockSelector& operator=(BlockSelector const&) = delete;
    BlockSelector(BlockSelector const&)            = delete;
    BlockSelector()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSELECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockSelector();
#endif
};
