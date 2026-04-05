#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir::domains {

enum class TextureDomain : int {
    ScratchTexture       = 0,
    LayerTexture         = 1,
    ImageTexture         = 2,
    SurfaceTexture       = 3,
    CompositorTexture    = 4,
    GlyphAtlas           = 5,
    GradientCacheTexture = 6,
    Count                = 7,
};

}
