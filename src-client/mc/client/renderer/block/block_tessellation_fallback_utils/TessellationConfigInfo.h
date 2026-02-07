#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTessellationFallbackUtils {

struct TessellationConfigInfo {
public:
    // member variables
    // NOLINTBEGIN
    bool mHasTextures                          : 1;
    bool mHasTexturesFromCreatorPacks          : 1;
    bool mHasBlockshapeFromCreatorPacks        : 1;
    bool mHasAmbientOcclusionFromCreatorPacks  : 1;
    bool mHasIsotropicTexturesFromCreatorPacks : 1;
    // NOLINTEND
};

} // namespace BlockTessellationFallbackUtils
