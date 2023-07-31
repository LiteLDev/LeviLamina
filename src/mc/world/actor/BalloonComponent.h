#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BalloonComponent {

public:
    // prevent constructor by default
    BalloonComponent& operator=(BalloonComponent const&) = delete;
    BalloonComponent(BalloonComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BalloonComponent\@\@QEAA\@XZ
     */
    MCAPI BalloonComponent();
    /**
     * @symbol ?addAdditionalSaveData\@BalloonComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?computeMaxHeight\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void computeMaxHeight(class Actor&);
    /**
     * @symbol ?detach\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void detach(class Actor&);
    /**
     * @symbol ?getAttachedActor\@BalloonComponent\@\@QEAAPEAVActor\@\@AEAV2\@\@Z
     */
    MCAPI class Actor* getAttachedActor(class Actor&);
    /**
     * @symbol ?getMaxHeight\@BalloonComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxHeight() const;
    /**
     * @symbol ?integrate\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void integrate(class Actor&);
    /**
     * @symbol ?onRemoved\@BalloonComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void onRemoved(class Actor&, bool);
    /**
     * @symbol
     * ?readAdditionalSaveData\@BalloonComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?setAttachedActor\@BalloonComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void setAttachedActor(class Actor&, class Actor&);
    /**
     * @symbol ?shouldPop\@BalloonComponent\@\@QEAA_NAEAVActor\@\@AEA_N\@Z
     */
    MCAPI bool shouldPop(class Actor&, bool&);
    /**
     * @symbol ?getBalloonForActor\@BalloonComponent\@\@SAPEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI static class Actor* getBalloonForActor(class Actor const&);
    /**
     * @symbol
     * ?ATTACHED_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ATTACHED_TAG;
    /**
     * @symbol ?FENCE_BALLOON_RANGE\@BalloonComponent\@\@2MB
     */
    MCAPI static float const FENCE_BALLOON_RANGE;
    /**
     * @symbol ?MAX_BALLOON_RANGE\@BalloonComponent\@\@2MB
     */
    MCAPI static float const MAX_BALLOON_RANGE;
    /**
     * @symbol
     * ?MAX_HEIGHT_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MAX_HEIGHT_TAG;
    /**
     * @symbol
     * ?SHOULD_DROP_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SHOULD_DROP_TAG;
    // NOLINTEND
};
