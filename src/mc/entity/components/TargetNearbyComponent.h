#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetNearbyComponent {

public:
    // prevent constructor by default
    TargetNearbyComponent& operator=(TargetNearbyComponent const&) = delete;
    TargetNearbyComponent(TargetNearbyComponent const&)            = delete;
    TargetNearbyComponent()                                        = delete;

public:
    /**
     * @symbol ?getWasInsideRange\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasInsideRange() const; // NOLINT
    /**
     * @symbol ?getWasOutsideRange\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasOutsideRange() const; // NOLINT
    /**
     * @symbol ?getWasSeenLastTick\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasSeenLastTick() const; // NOLINT
    /**
     * @symbol ?setPreviousDistance\@TargetNearbyComponent\@\@QEAAXM\@Z
     */
    MCAPI void setPreviousDistance(float); // NOLINT
    /**
     * @symbol ?setWasInsideRange\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasInsideRange(bool); // NOLINT
    /**
     * @symbol ?setWasOutsideRange\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasOutsideRange(bool); // NOLINT
    /**
     * @symbol ?setWasSeenLastTick\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasSeenLastTick(bool); // NOLINT
};
