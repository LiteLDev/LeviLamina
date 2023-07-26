#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BalloonComponent {

public:
    // prevent constructor by default
    BalloonComponent& operator=(BalloonComponent const&) = delete;
    BalloonComponent(BalloonComponent const&)            = delete;

public:
    /**
     * @symbol ??0BalloonComponent\@\@QEAA\@XZ
     */
    MCAPI BalloonComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@BalloonComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?computeMaxHeight\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void computeMaxHeight(class Actor&); // NOLINT
    /**
     * @symbol ?detach\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void detach(class Actor&); // NOLINT
    /**
     * @symbol ?getAttachedActor\@BalloonComponent\@\@QEAAPEAVActor\@\@AEAV2\@\@Z
     */
    MCAPI class Actor* getAttachedActor(class Actor&); // NOLINT
    /**
     * @symbol ?getMaxHeight\@BalloonComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxHeight() const; // NOLINT
    /**
     * @symbol ?integrate\@BalloonComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void integrate(class Actor&); // NOLINT
    /**
     * @symbol ?onRemoved\@BalloonComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void onRemoved(class Actor&, bool); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@BalloonComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?setAttachedActor\@BalloonComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void setAttachedActor(class Actor&, class Actor&); // NOLINT
    /**
     * @symbol ?shouldPop\@BalloonComponent\@\@QEAA_NAEAVActor\@\@AEA_N\@Z
     */
    MCAPI bool shouldPop(class Actor&, bool&); // NOLINT
    /**
     * @symbol ?getBalloonForActor\@BalloonComponent\@\@SAPEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI static class Actor* getBalloonForActor(class Actor const&); // NOLINT
    /**
     * @symbol
     * ?ATTACHED_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ATTACHED_TAG; // NOLINT
    /**
     * @symbol ?FENCE_BALLOON_RANGE\@BalloonComponent\@\@2MB
     */
    MCAPI static float const FENCE_BALLOON_RANGE; // NOLINT
    /**
     * @symbol ?MAX_BALLOON_RANGE\@BalloonComponent\@\@2MB
     */
    MCAPI static float const MAX_BALLOON_RANGE; // NOLINT
    /**
     * @symbol
     * ?MAX_HEIGHT_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MAX_HEIGHT_TAG; // NOLINT
    /**
     * @symbol
     * ?SHOULD_DROP_TAG\@BalloonComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SHOULD_DROP_TAG; // NOLINT
};
