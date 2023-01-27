/**
 * @file  PerfTimer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"
#include "../../Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PerfTimer.
 *
 */
class PerfTimer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFTIMER
public:
    class PerfTimer& operator=(class PerfTimer const &) = delete;
    PerfTimer(class PerfTimer const &) = delete;
    PerfTimer() = delete;
#endif

public:
    /**
     * @hash   -1746822629
     * @symbol  ??0PerfTimer\@\@QEAA\@Vid\@thread\@std\@\@\@Z
     */
    MCAPI PerfTimer(class std::thread::id);
    /**
     * @hash   -443112056
     * @symbol  ??1PerfTimer\@\@QEAA\@XZ
     */
    MCAPI ~PerfTimer();
    /**
     * @hash   1665501853
     * @symbol  ?mEnabled\@PerfTimer\@\@2_NA
     */
    MCAPI static bool mEnabled;
    /**
     * @hash   1270705345
     * @symbol  ?test\@PerfTimer\@\@2V?$ThreadLocalObject\@VPerfTimer\@\@V?$allocator\@VPerfTimer\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class PerfTimer, class std::allocator<class PerfTimer>> test;

//protected:

protected:
    /**
     * @hash   1871927193
     * @symbol  ?MultiplyDeBruijnBitPosition\@PerfTimer\@\@1QBHB
     */
    MCAPI static int const MultiplyDeBruijnBitPosition[];
    /**
     * @hash   180978690
     * @symbol  ?mPath\@PerfTimer\@\@1V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@A
     */
    MCAPI static class Core::PathBuffer<std::string> mPath;

};