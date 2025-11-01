#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

enum class ColorEndpointMode : int {
    KLDRLumaDirect = 0,
    KLDRLumaBaseOffset = 1,
    KHDRLumaLargeRange = 2,
    KHDRLumaSmallRange = 3,
    KLDRLumaAlphaDirect = 4,
    KLDRLumaAlphaBaseOffset = 5,
    KLDRRGBBaseScale = 6,
    KHDRRGBBaseScale = 7,
    KLDRRGBDirect = 8,
    KLDRRGBBaseOffset = 9,
    KLDRRGBBaseScaleTwoA = 10,
    KHDRRGBDirect = 11,
    KLDRRGBADirect = 12,
    KLDRRGBABaseOffset = 13,
    KHDRRGBDirectLDRAlpha = 14,
    KHDRRGBDirectHDRAlpha = 15,
    KNumColorEndpointModes = 16,
};

}
