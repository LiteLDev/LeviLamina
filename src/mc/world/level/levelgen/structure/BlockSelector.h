#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSelector {
public:
    // prevent constructor by default
    BlockSelector& operator=(BlockSelector const&);
    BlockSelector(BlockSelector const&);
    BlockSelector();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockSelector@@UEAA@XZ
    virtual ~BlockSelector();

    // vIndex: 1, symbol: ?next@MossStoneSelector@@UEBAAEBVBlock@@AEAVRandom@@HHH_N@Z
    virtual class Block const& next(class Random&, int, int, int, bool) const = 0;

    // NOLINTEND
};
