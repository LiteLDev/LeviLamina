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
    virtual class Block const& next(class Random&, int, int, int, bool) const;

    // NOLINTEND
};
