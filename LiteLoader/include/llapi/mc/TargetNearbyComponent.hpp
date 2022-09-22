/**
 * @file  TargetNearbyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TargetNearbyComponent.
 *
 */
class TargetNearbyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETNEARBYCOMPONENT
public:
    class TargetNearbyComponent& operator=(class TargetNearbyComponent const &) = delete;
    TargetNearbyComponent(class TargetNearbyComponent const &) = delete;
    TargetNearbyComponent() = delete;
#endif

public:
    /**
     * @hash   -2141176652
     * @symbol ?getWasInsideRange@TargetNearbyComponent@@QEBA_NXZ
     */
    MCAPI bool getWasInsideRange() const;
    /**
     * @hash   -134875386
     * @symbol ?getWasOutsideRange@TargetNearbyComponent@@QEBA_NXZ
     */
    MCAPI bool getWasOutsideRange() const;
    /**
     * @hash   -1716526378
     * @symbol ?getWasSeenLastTick@TargetNearbyComponent@@QEBA_NXZ
     */
    MCAPI bool getWasSeenLastTick() const;
    /**
     * @hash   2013517496
     * @symbol ?setPreviousDistance@TargetNearbyComponent@@QEAAXM@Z
     */
    MCAPI void setPreviousDistance(float);
    /**
     * @hash   -1348371096
     * @symbol ?setWasInsideRange@TargetNearbyComponent@@QEAAX_N@Z
     */
    MCAPI void setWasInsideRange(bool);
    /**
     * @hash   1622632342
     * @symbol ?setWasOutsideRange@TargetNearbyComponent@@QEAAX_N@Z
     */
    MCAPI void setWasOutsideRange(bool);
    /**
     * @hash   -391072762
     * @symbol ?setWasSeenLastTick@TargetNearbyComponent@@QEAAX_N@Z
     */
    MCAPI void setWasSeenLastTick(bool);

};