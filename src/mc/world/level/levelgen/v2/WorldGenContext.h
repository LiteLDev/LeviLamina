#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

class WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk691da3;
    ::ll::UntypedStorage<4, 4> mUnkc7c3b2;
    ::ll::UntypedStorage<4, 4> mUnkc36618;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
    WorldGenContext(WorldGenContext const&);
    WorldGenContext();
};

} // namespace br::worldgen
