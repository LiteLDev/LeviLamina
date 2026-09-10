#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

enum class RenderAPI : uchar {
    Default  = 0,
    D3d11    = 1,
    D3d12    = 2,
    D3d12rtx = 3,
    Gnm      = 4,
    Agc      = 5,
    Metal    = 6,
    Noop     = 7,
    OpenGL   = 8,
    OpenGLES = 9,
    Vulkan   = 10,
    Vulkan13 = 11,
};

}
