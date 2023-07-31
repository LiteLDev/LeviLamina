#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockQueuedTickingComponent {

public:
    // prevent constructor by default
    BlockQueuedTickingComponent& operator=(BlockQueuedTickingComponent const&) = delete;
    BlockQueuedTickingComponent(BlockQueuedTickingComponent const&)            = delete;
    BlockQueuedTickingComponent()                                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKQUEUEDTICKINGCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockQueuedTickingComponent();
#endif
    /**
     * @symbol ??0BlockQueuedTickingComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockQueuedTickingComponent(struct BlockQueuedTickingComponent&&);
    // NOLINTEND
};
