#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class ShaderType : uchar {
    Vertex         = 0,
    Fragment       = 1,
    Geometry       = 2,
    MaxShaderTypes = 3,
};

}
