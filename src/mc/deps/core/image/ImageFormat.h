#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class ImageFormat : uint {
    Unknown     = 0,
    R8Unorm     = 1,
    RG8Unorm    = 2,
    RGB8Unorm   = 3,
    RGBA8Unorm  = 4,
    RGBA16Float = 5,
};

}
