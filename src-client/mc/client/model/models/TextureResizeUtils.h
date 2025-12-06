#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct ImageBuffer; }
// clang-format on

class TextureResizeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cg::ImageBuffer resizeTexture(::cg::ImageBuffer const& image, uint newHeight, uint newWidth);
    // NOLINTEND
};
