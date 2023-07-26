#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MesaSurfaceBlocks {

public:
    // prevent constructor by default
    MesaSurfaceBlocks& operator=(MesaSurfaceBlocks const&) = delete;
    MesaSurfaceBlocks(MesaSurfaceBlocks const&)            = delete;
    MesaSurfaceBlocks()                                    = delete;
};
