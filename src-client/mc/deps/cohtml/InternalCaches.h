#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum class InternalCaches : int {
    // bitfield representation
    Shadows                = 1 << 0,
    Paths                  = 1 << 1,
    Textures               = 1 << 2,
    ScratchLayers          = 1 << 3,
    ScratchTextures        = 1 << 4,
    GfxCommandBuffers      = 1 << 5,
    GfxCommandProcessors   = 1 << 6,
    SVGSurfaces            = 1 << 7,
    BackdropFilterSurfaces = 1 << 8,
};

}
