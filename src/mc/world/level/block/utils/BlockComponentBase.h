#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockComponentBase {

public:
    // prevent constructor by default
    BlockComponentBase& operator=(BlockComponentBase const&) = delete;
    BlockComponentBase(BlockComponentBase const&)            = delete;
    BlockComponentBase()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockComponentBase();
#endif
    // NOLINTEND
};
