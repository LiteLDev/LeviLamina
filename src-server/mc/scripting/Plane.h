#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class Plane : int {
    // bitfield representation
    NoPlane = 0,
    Xy = 1 << 0,
    Xz = 1 << 1,
    Yz = 1 << 2,
};

}
