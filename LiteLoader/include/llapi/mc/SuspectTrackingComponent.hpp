/**
 * @file  SuspectTrackingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SuspectTrackingComponent.
 *
 */
class SuspectTrackingComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPECTTRACKINGCOMPONENT
public:
    class SuspectTrackingComponent& operator=(class SuspectTrackingComponent const &) = delete;
    SuspectTrackingComponent(class SuspectTrackingComponent const &) = delete;
    SuspectTrackingComponent() = delete;
#endif

public:
    /**
     * @symbol  ?clearSuspiciousPos\@SuspectTrackingComponent\@\@QEAAXXZ
     */
    MCAPI void clearSuspiciousPos();
    /**
     * @symbol  ?getSuspiciousPos\@SuspectTrackingComponent\@\@QEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class BlockPos> getSuspiciousPos() const;
    /**
     * @symbol  ?getTicksSinceLastSuspect\@SuspectTrackingComponent\@\@QEBA?AV?$optional\@_K\@std\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastSuspect(class ILevel const &) const;
    /**
     * @symbol  ?setSuspiciousPos\@SuspectTrackingComponent\@\@QEAAXV?$optional\@VBlockPos\@\@\@std\@\@UTick\@\@\@Z
     */
    MCAPI void setSuspiciousPos(class std::optional<class BlockPos>, struct Tick);

};