#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TintMapColor;
namespace mce { class Color; }
// clang-format on

class TintUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::mce::Color _applyTint(::mce::Color pixelColor, ::mce::Color baseColor, ::mce::Color tintColor);

    MCNAPI_C static ::mce::Color _hslToRgb(::mce::Color hsl);

    MCNAPI_C static ::mce::Color _lchToRgb(::mce::Color lch);

    MCNAPI_C static ::mce::Color _rgbToHsl(::mce::Color rgb);

    MCNAPI_C static ::mce::Color _rgbToLch(::mce::Color rgb);

    MCNAPI_C static ::mce::Color _rgbToXyz(::mce::Color rgb);

    MCNAPI_C static ::mce::Color applyTintToPixel(
        ::mce::Color   underPixel,
        ::mce::Color   pixelColor,
        ::TintMapColor tintBaseColor,
        ::TintMapColor tintColor,
        ::mce::Color   tintMapColor
    );
    // NOLINTEND
};
