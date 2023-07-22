/**
 * @file  PerfContextTracker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0PerfContextTracker\@\@QEAA\@XZ
     */
    MCAPI PerfContextTracker();
    /**
     * @symbol  ?incrementPacketReceivedInfo\@PerfContextTracker\@\@QEAAXI\@Z
     */
    MCAPI void incrementPacketReceivedInfo(unsigned int);
    /**
     * @symbol  ?incrementPacketSentInfo\@PerfContextTracker\@\@QEAAXI\@Z
     */
    MCAPI void incrementPacketSentInfo(unsigned int);
    /**
     * @symbol  ?getInstance\@PerfContextTracker\@\@SAAEAV1\@XZ
     */
    MCAPI static class PerfContextTracker & getInstance();

//private:
    /**
     * @symbol  ?_resetStats\@PerfContextTracker\@\@AEAAXXZ
     */
    MCAPI void _resetStats();

private:

};