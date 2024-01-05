#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

class SmoothStoneSelector : public ::BlockSelector {
public:
    // prevent constructor by default
    SmoothStoneSelector& operator=(SmoothStoneSelector const&);
    SmoothStoneSelector(SmoothStoneSelector const&);
    SmoothStoneSelector();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SmoothStoneSelector@@UEAA@XZ
    virtual ~SmoothStoneSelector();

    // vIndex: 1, symbol: ?next@SmoothStoneSelector@@UEBAAEBVBlock@@AEAVRandom@@HHH_N@Z
    virtual class Block const& next(class Random& random, int, int, int, bool isEdge) const;

    // NOLINTEND
};
