#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct ImageBuffer; }
// clang-format on

class TextureMergeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _mergeTopImageToBaseImage(::cg::ImageBuffer& baseImage, ::cg::ImageBuffer const& topImage);

    MCNAPI static ::cg::ImageBuffer
    buildMergedTexture(::cg::ImageBuffer const& base, ::std::vector<::cg::ImageBuffer> const& textures);
    // NOLINTEND
};
