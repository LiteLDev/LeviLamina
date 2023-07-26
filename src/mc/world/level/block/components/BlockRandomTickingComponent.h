#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockRandomTickingComponent {

public:
    // prevent constructor by default
    BlockRandomTickingComponent& operator=(BlockRandomTickingComponent const&) = delete;
    BlockRandomTickingComponent(BlockRandomTickingComponent const&)            = delete;
    BlockRandomTickingComponent()                                              = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKRANDOMTICKINGCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockRandomTickingComponent(); // NOLINT
#endif
    /**
     * @symbol ??0BlockRandomTickingComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockRandomTickingComponent(struct BlockRandomTickingComponent&&); // NOLINT
};
