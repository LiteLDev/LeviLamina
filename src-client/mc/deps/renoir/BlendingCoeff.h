#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class BlendingCoeff : int {
    Zero           = 1,
    One            = 2,
    SrcColor       = 3,
    InvSrcColor    = 4,
    SrcAlpha       = 5,
    InvSrcAlpha    = 6,
    DestAlpha      = 7,
    InvDestAlpha   = 8,
    DestColor      = 9,
    InvDestColor   = 10,
    SrcAlphaSat    = 11,
    BlendFactor    = 14,
    InvBlendFactor = 15,
};

}
