#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class RenderState : ushort {
    // bitfield representation
    None                  = 0,
    DisableDepthTest      = 1 << 0,
    Blending              = 1 << 1,
    DisableCulling        = 1 << 2,
    DisableColorWrite     = 1 << 3,
    DisableAlphaWrite     = 1 << 4,
    DisableDepthWrite     = 1 << 5,
    StencilWrite          = 1 << 6,
    InvertCulling         = 1 << 7,
    EnableStencilTest     = 1 << 8,
    EnableAlphaToCoverage = 1 << 9,
    Count                 = DisableDepthTest | EnableAlphaToCoverage,
};

}
