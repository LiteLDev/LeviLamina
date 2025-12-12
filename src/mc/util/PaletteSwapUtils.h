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
    MCNAPI_C static ::std::map<uint, uint>
    _createPaletteMap(uint paletteSize, uint const* keyBufferArray, uint const* paletteBufferArray);

    MCNAPI_C static ::cg::ImageBuffer swapColors(
        ::cg::ImageBuffer const& swapTargetImage,
        ::cg::ImageBuffer const& paletteKeyImage,
        ::cg::ImageBuffer const& paletteImage
    );
    // NOLINTEND
};
