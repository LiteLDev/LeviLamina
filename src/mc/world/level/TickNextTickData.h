#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickNextTickData {

public:
    // prevent constructor by default
    TickNextTickData& operator=(TickNextTickData const&) = delete;
    TickNextTickData(TickNextTickData const&)            = delete;
    TickNextTickData()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0TickNextTickData\@\@QEAA\@AEBVBlockPos\@\@AEBVBlock\@\@AEBUTick\@\@H\@Z
     */
    MCAPI TickNextTickData(class BlockPos const&, class Block const&, struct Tick const&, int);
    /**
     * @symbol ??8TickNextTickData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class TickNextTickData const&) const;
    /**
     * @symbol ??OTickNextTickData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>(class TickNextTickData const&) const;
    // NOLINTEND
};
