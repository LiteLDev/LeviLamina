#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockComponentBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTBASE
public:
    BlockComponentBase& operator=(BlockComponentBase const&) = delete;
    BlockComponentBase(BlockComponentBase const&)            = delete;
    BlockComponentBase()                                     = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockComponentBase();
#endif
};
