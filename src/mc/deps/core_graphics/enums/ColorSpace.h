#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/image/ImageUsage.h"

namespace cg {

enum class ColorSpace : uchar {
    Unknown = 0,
    SRGB    = 1,
    Linear  = 2,
};

LLAPI cg::ColorSpace translateImageUsage(const mce::ImageUsage imageUsage);

} // namespace cg
