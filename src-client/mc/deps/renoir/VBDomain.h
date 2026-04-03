#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir::domains {

enum class VBDomain : int {
    GeometryBuffer         = 0,
    PathBuffer             = 1,
    PathInstanceDataBuffer = 2,
    GlyphBuffer            = 3,
    Count                  = 4,
};

}
