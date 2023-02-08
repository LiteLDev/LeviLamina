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
     * @hash   1228424477
     * @symbol  ??0TickNextTickData\@\@QEAA\@AEBVBlockPos\@\@AEBVBlock\@\@AEBUTick\@\@H\@Z
     */
    MCAPI TickNextTickData(class BlockPos const &, class Block const &, struct Tick const &, int);
    /**
     * @hash   -777728624
     * @symbol  ??8TickNextTickData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class TickNextTickData const &) const;
    /**
     * @hash   -1209411181
     * @symbol  ??OTickNextTickData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>(class TickNextTickData const &) const;

};