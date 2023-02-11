/**
 * @file  PerfContextTracker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PerfContextTracker.
 *
 */
class PerfContextTracker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFCONTEXTTRACKER
public:
    class PerfContextTracker& operator=(class PerfContextTracker const &) = delete;
    PerfContextTracker(class PerfContextTracker const &) = delete;
#endif

public:
    /**
     * @hash   -1655037378
     * @symbol  ??0PerfContextTracker\@\@QEAA\@XZ
     */
    MCAPI PerfContextTracker();
    /**
     * @hash   963725666
     * @symbol  ?incrementPacketReceivedInfo\@PerfContextTracker\@\@QEAAXI\@Z
     */
    MCAPI void incrementPacketReceivedInfo(unsigned int);
    /**
     * @hash   -1989190126
     * @symbol  ?incrementPacketSentInfo\@PerfContextTracker\@\@QEAAXI\@Z
     */
    MCAPI void incrementPacketSentInfo(unsigned int);
    /**
     * @hash   -1249261191
     * @symbol  ?getInstance\@PerfContextTracker\@\@SAAEAV1\@XZ
     */
    MCAPI static class PerfContextTracker & getInstance();

//private:
    /**
     * @hash   529711273
     * @symbol  ?_resetStats\@PerfContextTracker\@\@AEAAXXZ
     */
    MCAPI void _resetStats();

private:

};