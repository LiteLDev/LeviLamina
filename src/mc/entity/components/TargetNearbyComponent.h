#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetNearbyComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETNEARBYCOMPONENT
public:
    TargetNearbyComponent& operator=(TargetNearbyComponent const&) = delete;
    TargetNearbyComponent(TargetNearbyComponent const&)            = delete;
    TargetNearbyComponent()                                        = delete;
#endif

public:
    /**
     * @symbol ?getWasInsideRange\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasInsideRange() const;
    /**
     * @symbol ?getWasOutsideRange\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasOutsideRange() const;
    /**
     * @symbol ?getWasSeenLastTick\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasSeenLastTick() const;
    /**
     * @symbol ?setPreviousDistance\@TargetNearbyComponent\@\@QEAAXM\@Z
     */
    MCAPI void setPreviousDistance(float);
    /**
     * @symbol ?setWasInsideRange\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasInsideRange(bool);
    /**
     * @symbol ?setWasOutsideRange\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasOutsideRange(bool);
    /**
     * @symbol ?setWasSeenLastTick\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasSeenLastTick(bool);
};
