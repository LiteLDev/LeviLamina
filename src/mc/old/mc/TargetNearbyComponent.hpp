/**
 * @file  TargetNearbyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?getWasInsideRange\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasInsideRange() const;
    /**
     * @symbol  ?getWasOutsideRange\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasOutsideRange() const;
    /**
     * @symbol  ?getWasSeenLastTick\@TargetNearbyComponent\@\@QEBA_NXZ
     */
    MCAPI bool getWasSeenLastTick() const;
    /**
     * @symbol  ?setPreviousDistance\@TargetNearbyComponent\@\@QEAAXM\@Z
     */
    MCAPI void setPreviousDistance(float);
    /**
     * @symbol  ?setWasInsideRange\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasInsideRange(bool);
    /**
     * @symbol  ?setWasOutsideRange\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasOutsideRange(bool);
    /**
     * @symbol  ?setWasSeenLastTick\@TargetNearbyComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWasSeenLastTick(bool);

};