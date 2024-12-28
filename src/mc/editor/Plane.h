#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class Plane : int {
    // bitfield representation
    Xy = 1 << 0,
    Xz = 1 << 1,
    Yz = 1 << 2,
};

}
