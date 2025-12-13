#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class Plane : int {
    NoPlane = 0,
    Xy      = 1,
    Xz      = 2,
    Yz      = 4,
};

}
