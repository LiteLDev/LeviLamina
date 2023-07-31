#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDisplayNameComponent {

public:
    // prevent constructor by default
    BlockDisplayNameComponent& operator=(BlockDisplayNameComponent const&) = delete;
    BlockDisplayNameComponent(BlockDisplayNameComponent const&)            = delete;
    BlockDisplayNameComponent()                                            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKDISPLAYNAMECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockDisplayNameComponent();
#endif
    // NOLINTEND
};
