#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class PaletteSwapUtils {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::map<uint, uint>
    _createPaletteMap(uint paletteSize, uint const* keyBufferArray, uint const* paletteBufferArray);

    MCNAPI static ::cg::ImageBuffer swapColors(
        ::cg::ImageBuffer const& swapTargetImage,
        ::cg::ImageBuffer const& paletteKeyImage,
        ::cg::ImageBuffer const& paletteImage
    );
#endif
    // NOLINTEND
};
