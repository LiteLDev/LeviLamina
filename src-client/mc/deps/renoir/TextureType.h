#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir::domains {

enum class TextureType : int {
    ColorTexture = 0,
    DepthTexture = 1,
    Count        = 2,
};

}
