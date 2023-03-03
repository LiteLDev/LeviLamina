/**
 * @file  TickNextTickData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickNextTickData.
 *
 */
class TickNextTickData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKNEXTTICKDATA
public:
    class TickNextTickData& operator=(class TickNextTickData const &) = delete;
    TickNextTickData(class TickNextTickData const &) = delete;
    TickNextTickData() = delete;
#endif

public:
    /**
     * @symbol  ??0TickNextTickData\@\@QEAA\@AEBVBlockPos\@\@AEBVBlock\@\@AEBUTick\@\@H\@Z
     */
    MCAPI TickNextTickData(class BlockPos const &, class Block const &, struct Tick const &, int);
    /**
     * @symbol  ??8TickNextTickData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class TickNextTickData const &) const;
    /**
     * @symbol  ??OTickNextTickData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>(class TickNextTickData const &) const;

};