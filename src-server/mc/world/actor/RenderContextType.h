#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RenderContextType : int {
    Unknown           = -1,
    Actor             = 0,
    ActorRenderData   = 1,
    TestQueryContext  = 2,
    BlockSource       = 3,
    NumContextTypes   = 4,
    IBlockWorldGenAPI = 5,
};
