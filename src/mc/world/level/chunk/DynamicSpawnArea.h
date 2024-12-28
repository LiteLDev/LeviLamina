#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct DynamicSpawnArea {
public:
    // prevent constructor by default
    DynamicSpawnArea& operator=(DynamicSpawnArea const&);
    DynamicSpawnArea(DynamicSpawnArea const&);
    DynamicSpawnArea();
};

} // namespace br
