#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace cg {

class TextureConversionUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::optional<::cg::ImageBuffer>
    convertUnsupportedImageToSupportedGPUImage(::cg::ImageBuffer const& sourceImageBuffer);
    // NOLINTEND
};

} // namespace cg
