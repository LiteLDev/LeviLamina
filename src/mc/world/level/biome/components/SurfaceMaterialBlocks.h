#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialBlocks {

public:
    // prevent constructor by default
    SurfaceMaterialBlocks& operator=(SurfaceMaterialBlocks const&) = delete;
    SurfaceMaterialBlocks(SurfaceMaterialBlocks const&)            = delete;
    SurfaceMaterialBlocks()                                        = delete;
};
