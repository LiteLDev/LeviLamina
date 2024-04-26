#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

class WorldGenContext {
public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
    WorldGenContext(WorldGenContext const&);
    WorldGenContext();

public:
    // NOLINTBEGIN
    // symbol: ?maxHeight@WorldGenContext@worldgen@br@@QEBAHXZ
    MCAPI int maxHeight() const;

    // symbol: ?minHeight@WorldGenContext@worldgen@br@@QEBAHXZ
    MCAPI int minHeight() const;

    // NOLINTEND
};

}; // namespace br::worldgen
