#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

enum class ShaderCodePlatform : uchar {
    Direct3DSm40 = 0,
    Direct3DSm50 = 1,
    Direct3DSm60 = 2,
    Direct3DSm65 = 3,
    Direct3DXb1  = 4,
    Direct3DXbx  = 5,
    Glsl120      = 6,
    Glsl430      = 7,
    Essl310      = 8,
    Metal        = 9,
    Vulkan       = 10,
    Pssl         = 11,
    Unknown      = 12,
    Count        = 12,
};

}
