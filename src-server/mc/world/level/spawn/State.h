#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/spawn/LocalMobCapCalc.h"

namespace br::spawn {

struct State {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mSpawnableChunkCount;
    ::ll::TypedStorage<4, 32, ::std::array<int, 8>>         mobCategoryCounts;
    ::ll::TypedStorage<8, 56, ::br::spawn::LocalMobCapCalc> mCalc;
    // NOLINTEND
};

} // namespace br::spawn
