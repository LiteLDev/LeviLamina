#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SuspectTrackingComponent {

public:
    // prevent constructor by default
    SuspectTrackingComponent& operator=(SuspectTrackingComponent const&) = delete;
    SuspectTrackingComponent(SuspectTrackingComponent const&)            = delete;
    SuspectTrackingComponent()                                           = delete;

public:
    /**
     * @symbol ?clearSuspiciousPos\@SuspectTrackingComponent\@\@QEAAXXZ
     */
    MCAPI void clearSuspiciousPos(); // NOLINT
    /**
     * @symbol ?getSuspiciousPos\@SuspectTrackingComponent\@\@QEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class BlockPos> getSuspiciousPos() const; // NOLINT
    /**
     * @symbol ?getTicksSinceLastSuspect\@SuspectTrackingComponent\@\@QEBA?AV?$optional\@_K\@std\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastSuspect(class ILevel const&) const; // NOLINT
    /**
     * @symbol ?setSuspiciousPos\@SuspectTrackingComponent\@\@QEAAXV?$optional\@VBlockPos\@\@\@std\@\@UTick\@\@\@Z
     */
    MCAPI void setSuspiciousPos(class std::optional<class BlockPos>, struct Tick); // NOLINT
};
