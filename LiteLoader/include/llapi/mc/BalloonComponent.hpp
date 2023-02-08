/**
 * @file  BalloonComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BalloonComponent.
 *
 */
class BalloonComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONCOMPONENT
public:
    class BalloonComponent& operator=(class BalloonComponent const &) = delete;
    BalloonComponent(class BalloonComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1747808742
     * @symbol  ??0BalloonComponent\@\@QEAA\@XZ
     */
    MCAPI BalloonComponent();
    /**
     * @hash   -973005528
     * @symbol  ?addAdditionalSaveData\@BalloonComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -2129661750
     * @symbol  ?computeMaxHeight\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void computeMaxHeight(class Actor &);
    /**
     * @hash   -597514262
     * @symbol  ?detach\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void detach(class Actor &);
    /**
     * @hash   -741122285
     * @symbol  ?getAttachedActor\@BalloonComponent\@\@QEAAPEAVActor\@\@AEAV2\@\@Z
     */
    MCAPI class Actor * getAttachedActor(class Actor &);
    /**
     * @hash   -434554810
     * @symbol  ?getMaxHeight\@BalloonComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxHeight() const;
    /**
     * @hash   1434907324
     * @symbol  ?integrate\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void integrate(class Actor &);
    /**
     * @hash   1428204557
     * @symbol  ?onRemoved\@BalloonComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void onRemoved(class Actor &, bool);
    /**
     * @hash   1795255238
     * @symbol  ?readAdditionalSaveData\@BalloonComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1881412425
     * @symbol  ?setAttachedActor\@BalloonComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void setAttachedActor(class Actor &, class Actor &);
    /**
     * @hash   1641157499
     * @symbol  ?shouldPop\@BalloonComponent\@\@QEAA_NAEAVActor\@\@AEA_N\@Z
     */
    MCAPI bool shouldPop(class Actor &, bool &);
    /**
     * @hash   -1354667019
     * @symbol  ?ATTACHED_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ATTACHED_TAG;
    /**
     * @hash   2068885435
     * @symbol  ?FENCE_BALLOON_RANGE\@BalloonComponent\@\@2MB
     */
    MCAPI static float const FENCE_BALLOON_RANGE;
    /**
     * @hash   -352845417
     * @symbol  ?MAX_BALLOON_RANGE\@BalloonComponent\@\@2MB
     */
    MCAPI static float const MAX_BALLOON_RANGE;
    /**
     * @hash   1320965649
     * @symbol  ?MAX_HEIGHT_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MAX_HEIGHT_TAG;
    /**
     * @hash   -133393403
     * @symbol  ?SHOULD_DROP_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SHOULD_DROP_TAG;
    /**
     * @hash   -1327103449
     * @symbol  ?getBalloonForActor\@BalloonComponent\@\@SAPEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI static class Actor * getBalloonForActor(class Actor const &);

};