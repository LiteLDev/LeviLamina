/**
 * @file  BalloonComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0BalloonComponent\@\@QEAA\@XZ
     */
    MCAPI BalloonComponent();
    /**
     * @symbol  ?addAdditionalSaveData\@BalloonComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?computeMaxHeight\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void computeMaxHeight(class Actor &);
    /**
     * @symbol  ?detach\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void detach(class Actor &);
    /**
     * @symbol  ?getAttachedActor\@BalloonComponent\@\@QEAAPEAVActor\@\@AEAV2\@\@Z
     */
    MCAPI class Actor * getAttachedActor(class Actor &);
    /**
     * @symbol  ?getMaxHeight\@BalloonComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxHeight() const;
    /**
     * @symbol  ?integrate\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void integrate(class Actor &);
    /**
     * @symbol  ?onRemoved\@BalloonComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void onRemoved(class Actor &, bool);
    /**
     * @symbol  ?readAdditionalSaveData\@BalloonComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?setAttachedActor\@BalloonComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void setAttachedActor(class Actor &, class Actor &);
    /**
     * @symbol  ?shouldPop\@BalloonComponent\@\@QEAA_NAEAVActor\@\@AEA_N\@Z
     */
    MCAPI bool shouldPop(class Actor &, bool &);
    /**
     * @symbol  ?ATTACHED_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ATTACHED_TAG;
    /**
     * @symbol  ?FENCE_BALLOON_RANGE\@BalloonComponent\@\@2MB
     */
    MCAPI static float const FENCE_BALLOON_RANGE;
    /**
     * @symbol  ?MAX_BALLOON_RANGE\@BalloonComponent\@\@2MB
     */
    MCAPI static float const MAX_BALLOON_RANGE;
    /**
     * @symbol  ?MAX_HEIGHT_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MAX_HEIGHT_TAG;
    /**
     * @symbol  ?SHOULD_DROP_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SHOULD_DROP_TAG;
    /**
     * @symbol  ?getBalloonForActor\@BalloonComponent\@\@SAPEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI static class Actor * getBalloonForActor(class Actor const &);

};