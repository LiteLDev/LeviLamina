/**
 * @file  ScopedSideBySideTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScopedSideBySideTrigger.
 *
 */
class ScopedSideBySideTrigger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOPEDSIDEBYSIDETRIGGER
public:
    class ScopedSideBySideTrigger& operator=(class ScopedSideBySideTrigger const &) = delete;
    ScopedSideBySideTrigger(class ScopedSideBySideTrigger const &) = delete;
    ScopedSideBySideTrigger() = delete;
#endif

public:
    /**
     * @symbol  ?end\@ScopedSideBySideTrigger\@\@QEAA_NXZ
     */
    MCAPI bool end();
    /**
     * @symbol  ??1ScopedSideBySideTrigger\@\@QEAA\@XZ
     */
    MCAPI ~ScopedSideBySideTrigger();
    /**
     * @symbol  ?tryTriggerIf\@ScopedSideBySideTrigger\@\@SA?AV1\@_NAEAUIActorMovementProxy\@\@W4SideBySideExtractionId\@\@\@Z
     */
    MCAPI static class ScopedSideBySideTrigger tryTriggerIf(bool, struct IActorMovementProxy &, enum class SideBySideExtractionId);

};