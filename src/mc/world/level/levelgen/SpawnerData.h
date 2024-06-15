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
    // symbol: ??0SpawnerData@worldgen@br@@QEAA@AEBU012@@Z
    MCAPI SpawnerData(struct br::worldgen::SpawnerData const&);

    // NOLINTEND
};

}; // namespace br::worldgen
