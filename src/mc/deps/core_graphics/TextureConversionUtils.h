#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace cg {

class TextureConversionUtils {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::cg::ImageBuffer>
    convertUnsupportedImageToSupportedGPUImage(::cg::ImageBuffer const& sourceImageBuffer);

    MCAPI static bool needsTextureConversion(::mce::TextureFormat textureFormat);
#endif
    // NOLINTEND
};

} // namespace cg
