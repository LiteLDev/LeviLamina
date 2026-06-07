#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class TextureChannelName : int {
    Red       = 0,
    Green     = 1,
    Blue      = 2,
    Alpha     = 3,
    Metalness = 0,
    Emissive  = 1,
    Roughness = 2,
    Normal    = 0,
    Invalid   = 255,
};

}
