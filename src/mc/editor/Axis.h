#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class Axis : int {
    // bitfield representation
    X = 1 << 0,
    Y = 1 << 1,
    Z = 1 << 2,
};

}
