#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickNextTickData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKNEXTTICKDATA
public:
    TickNextTickData& operator=(TickNextTickData const&) = delete;
    TickNextTickData(TickNextTickData const&)            = delete;
    TickNextTickData()                                   = delete;
#endif

public:
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
};
