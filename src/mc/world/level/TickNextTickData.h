#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/Block.h"

class TickNextTickData {
public:
    BlockPos     pos;
    const Block* mBlock;
    Tick         tick;
    int          priorityOffset;

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
