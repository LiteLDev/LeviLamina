#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContentType : uint64 {
    None           = 0,
    World          = 1,
    WorldTemplate  = 2,
    Resource       = 3,
    Behavior       = 4,
    Skin           = 5,
    ItemCollection = 6,
};
