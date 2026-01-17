#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class CBType : int {
    TransformVS                   = 0,
    RenoirShaderParamsVS          = 1,
    GlobalDataPS                  = 2,
    StandardPrimitivePS           = 3,
    StandardPrimitiveAdditionalPS = 4,
    EffectsPS                     = 5,
    RenoirShaderParamsPS          = 6,
    Count                         = 7,
};

}
