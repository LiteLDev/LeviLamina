#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class Axis : int {
    // bitfield representation
    NoAxis = 0,
    X = 1 << 0,
    Y = 1 << 1,
    Z = 1 << 2,
};

}
