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
    MCAPI_C static ::mce::Color _applyTint(::mce::Color pixelColor, ::mce::Color baseColor, ::mce::Color tintColor);

    MCAPI_C static ::mce::Color _hslToRgb(::mce::Color hsl);

    MCAPI_C static ::mce::Color _lchToRgb(::mce::Color lch);

    MCAPI_C static ::mce::Color _rgbToHsl(::mce::Color rgb);

    MCAPI_C static ::mce::Color _rgbToLch(::mce::Color rgb);

    MCAPI_C static ::mce::Color _rgbToXyz(::mce::Color rgb);

    MCAPI_C static ::mce::Color applyTintToPixel(
        ::mce::Color   underPixel,
        ::mce::Color   pixelColor,
        ::TintMapColor tintBaseColor,
        ::TintMapColor tintColor,
        ::mce::Color   tintMapColor
    );
    // NOLINTEND
};
