#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockGraphicsModeChangeContext {
public:
    // prevent constructor by default
    BlockGraphicsModeChangeContext& operator=(BlockGraphicsModeChangeContext const&);
    BlockGraphicsModeChangeContext(BlockGraphicsModeChangeContext const&);
    BlockGraphicsModeChangeContext();
};
