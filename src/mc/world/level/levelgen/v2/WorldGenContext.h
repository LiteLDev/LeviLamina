#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

class WorldGenContext {
public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
    WorldGenContext(WorldGenContext const&);
    WorldGenContext();
};

}; // namespace br::worldgen
