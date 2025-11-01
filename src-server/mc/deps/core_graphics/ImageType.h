#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

enum class ImageType : uchar {
    Texture2D = 0,
    CubemapDeprecated = 1,
    Texture3D = 2,
    TextureCube = 3,
};

}
