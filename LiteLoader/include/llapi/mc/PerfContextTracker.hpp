/**
 * @file  PerfContextTracker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1088708546
     * @symbol ??0PerfContextTracker@@QEAA@XZ
     */
    MCAPI PerfContextTracker();
    /**
     * @hash   1530054498
     * @symbol ?incrementPacketReceivedInfo@PerfContextTracker@@QEAAXI@Z
     */
    MCAPI void incrementPacketReceivedInfo(unsigned int);
    /**
     * @hash   -1422861294
     * @symbol ?incrementPacketSentInfo@PerfContextTracker@@QEAAXI@Z
     */
    MCAPI void incrementPacketSentInfo(unsigned int);
    /**
     * @hash   -682932359
     * @symbol ?getInstance@PerfContextTracker@@SAAEAV1@XZ
     */
    MCAPI static class PerfContextTracker & getInstance();

};