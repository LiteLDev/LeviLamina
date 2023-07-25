#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDisplayNameComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDISPLAYNAMECOMPONENT
public:
    BlockDisplayNameComponent& operator=(BlockDisplayNameComponent const&) = delete;
    BlockDisplayNameComponent(BlockDisplayNameComponent const&)            = delete;
    BlockDisplayNameComponent()                                            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKDISPLAYNAMECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockDisplayNameComponent();
#endif
};
