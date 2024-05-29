#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

class MossStoneSelector : public ::BlockSelector {
public:
    // prevent constructor by default
    MossStoneSelector& operator=(MossStoneSelector const&);
    MossStoneSelector(MossStoneSelector const&);
    MossStoneSelector();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MossStoneSelector@@UEAA@XZ
    virtual ~MossStoneSelector();

    // vIndex: 1, symbol: ?next@MossStoneSelector@@UEBAAEBVBlock@@AEAVRandom@@HHH_N@Z
    virtual class Block const& next(class Random& random, int worldX, int worldY, int worldZ, bool isEdge) const;

    // symbol: ??0MossStoneSelector@@QEAA@PEBVBlock@@0@Z
    MCAPI MossStoneSelector(class Block const*, class Block const*);

    // NOLINTEND
};
