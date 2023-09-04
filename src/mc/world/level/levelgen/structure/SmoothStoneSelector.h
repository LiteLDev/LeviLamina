#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

class SmoothStoneSelector : public ::BlockSelector {
public:
    // prevent constructor by default
    SmoothStoneSelector& operator=(SmoothStoneSelector const&) = delete;
    SmoothStoneSelector(SmoothStoneSelector const&)            = delete;
    SmoothStoneSelector()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?next@SmoothStoneSelector@@UEBAAEBVBlock@@AEAVRandom@@HHH_N@Z
    virtual class Block const& next(class Random&, int, int, int, bool) const;

    // symbol: ??1SmoothStoneSelector@@UEAA@XZ
    MCVAPI ~SmoothStoneSelector();

    // NOLINTEND
};
