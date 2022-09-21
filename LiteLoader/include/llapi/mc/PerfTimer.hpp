/**
 * @file  MC/PerfTimer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1164487381
     * @symbol ??0PerfTimer@@QEAA@Vid@thread@std@@@Z
     */
    MCAPI PerfTimer(class std::thread::id);
    /**
     * @hash   139223192
     * @symbol ??1PerfTimer@@QEAA@XZ
     */
    MCAPI ~PerfTimer();
    /**
     * @hash   560736253
     * @symbol ?mEnabled@PerfTimer@@2_NA
     */
    MCAPI static bool mEnabled;
    /**
     * @hash   112139121
     * @symbol ?test@PerfTimer@@2V?$ThreadLocalObject@VPerfTimer@@V?$allocator@VPerfTimer@@@std@@@Threading@Bedrock@@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class PerfTimer, class std::allocator<class PerfTimer>> test;

//protected:

protected:
    /**
     * @hash   898180489
     * @symbol ?MultiplyDeBruijnBitPosition@PerfTimer@@1QBHB
     */
    MCAPI static int const MultiplyDeBruijnBitPosition[];
    /**
     * @hash   -891520374
     * @symbol ?mPath@PerfTimer@@1V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@A
     */
    MCAPI static class Core::PathBuffer<std::string> mPath;

};