#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir::domains {

enum class VBDomain : int {
    GeometryBuffer = 0,
    PathBuffer     = 1,
    GlyphBuffer    = 2,
    Count          = 3,
};

}
