#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockGameplayHandler {

public:
    // prevent constructor by default
    BlockGameplayHandler& operator=(BlockGameplayHandler const&) = delete;
    BlockGameplayHandler(BlockGameplayHandler const&)            = delete;
    BlockGameplayHandler()                                       = delete;
};
