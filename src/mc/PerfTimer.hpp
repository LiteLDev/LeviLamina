/**
 * @file  PerfTimer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

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
     * @symbol  ??0PerfTimer\@\@QEAA\@Vid\@thread\@std\@\@\@Z
     */
    MCAPI PerfTimer(class std::thread::id);
    /**
     * @symbol  ??1PerfTimer\@\@QEAA\@XZ
     */
    MCAPI ~PerfTimer();
    /**
     * @symbol  ?mEnabled\@PerfTimer\@\@2_NA
     */
    MCAPI static bool mEnabled;
    /**
     * @symbol  ?test\@PerfTimer\@\@2V?$ThreadLocalObject\@VPerfTimer\@\@V?$allocator\@VPerfTimer\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class PerfTimer, class std::allocator<class PerfTimer>> test;

//protected:

protected:
    /**
     * @symbol  ?MultiplyDeBruijnBitPosition\@PerfTimer\@\@1QBHB
     */
    MCAPI static int const MultiplyDeBruijnBitPosition[];
    /**
     * @symbol  ?mPath\@PerfTimer\@\@1V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@A
     */
    MCAPI static class Core::PathBuffer<std::string> mPath;

};