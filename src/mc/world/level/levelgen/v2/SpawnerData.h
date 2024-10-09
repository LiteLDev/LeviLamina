#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct SpawnerData {
public:
    // prevent constructor by default
    SpawnerData& operator=(SpawnerData const&);
    SpawnerData();

public:
    // NOLINTBEGIN
    MCAPI SpawnerData(struct br::worldgen::SpawnerData const& other);

    // NOLINTEND
};

}; // namespace br::worldgen
