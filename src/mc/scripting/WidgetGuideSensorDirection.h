#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class WidgetGuideSensorDirection : uchar {
    // bitfield representation
    None      = 0,
    PositiveY = 1 << 0,
    NegativeY = 1 << 1,
    PositiveZ = 1 << 2,
    NegativeZ = 1 << 3,
    PositiveX = 1 << 4,
    NegativeX = 1 << 5,
    All       = PositiveY | NegativeY | PositiveZ | NegativeZ | PositiveX | NegativeX,
};

}
