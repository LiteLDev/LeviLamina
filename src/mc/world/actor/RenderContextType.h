#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RenderContextType : int {
    Unknown           = 4294967295,
    Actor             = 0,
    ActorRenderData   = 1,
    TestQueryContext  = 2,
    BlockSource       = 3,
    NumContextTypes   = 4,
    IBlockWorldGenAPI = 5,
};
