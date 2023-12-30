#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickNextTickData {
public:
    // prevent constructor by default
    TickNextTickData& operator=(TickNextTickData const&);
    TickNextTickData(TickNextTickData const&);
    TickNextTickData();

public:
    // NOLINTBEGIN
    // symbol: ??0TickNextTickData@@QEAA@AEBVBlockPos@@AEBVBlock@@AEBUTick@@H@Z
    MCAPI TickNextTickData(class BlockPos const& pos, class Block const& block, struct Tick const& tick, int pOffset);

    // symbol: ??8TickNextTickData@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class TickNextTickData const& t) const;

    // symbol: ??OTickNextTickData@@QEBA_NAEBV0@@Z
    MCAPI bool operator>(class TickNextTickData const& tnd) const;

    // NOLINTEND
};
