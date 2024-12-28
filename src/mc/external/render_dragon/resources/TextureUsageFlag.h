#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

enum class TextureUsageFlag : uchar {
    ReadSrc    = 0,
    CopyDst    = 1,
    RenderDst  = 2,
    ComputeDst = 3,
    Count      = 4,
};

}
