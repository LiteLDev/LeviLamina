#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class StencilOp : uchar {
    Keep     = 1,
    Zero     = 2,
    Replace  = 3,
    Incr     = 7,
    Decr     = 8,
    IncrWrap = 9,
    DecrWrap = 10,
};

}
