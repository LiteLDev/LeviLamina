#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class PillagerOutpostStart : public ::StructureStart {
public:
    // prevent constructor by default
    PillagerOutpostStart& operator=(PillagerOutpostStart const&);
    PillagerOutpostStart(PillagerOutpostStart const&);
    PillagerOutpostStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PillagerOutpostStart() = default;

    // vIndex: 1
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI PillagerOutpostStart(class Dimension& dim, class Random& random, int x, int z);

    // NOLINTEND
};
