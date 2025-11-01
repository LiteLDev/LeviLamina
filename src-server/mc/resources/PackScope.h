#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackScope : uchar {
    // bitfield representation
    Global = 1 << 0,
    AddOn = 1 << 1,
    Level = 1 << 2,
    System = 1 << 3,
    World = AddOn | Level,
    Default = Global | AddOn | Level,
    Any = Global | AddOn | Level,
};
