#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct StaticSpawnArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk16d4c0;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticSpawnArea& operator=(StaticSpawnArea const&);
    StaticSpawnArea(StaticSpawnArea const&);
    StaticSpawnArea();
};

} // namespace br
