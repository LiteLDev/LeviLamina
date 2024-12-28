#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

enum class EndpointEncodingMode : int {
    KDirectLuma      = 0,
    KDirectLumaAlpha = 1,
    KBaseScaleRGB    = 2,
    KBaseScaleRGBA   = 3,
    KDirectRGB       = 4,
    KDirectRGBA      = 5,
};

}
