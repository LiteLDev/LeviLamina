/**
 * @file  BalloonComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -895532438
     * @symbol ??0BalloonComponent@@QEAA@XZ
     */
    MCAPI BalloonComponent();
    /**
     * @hash   -120729224
     * @symbol ?addAdditionalSaveData@BalloonComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1277385446
     * @symbol ?computeMaxHeight@BalloonComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void computeMaxHeight(class Actor &);
    /**
     * @hash   254762042
     * @symbol ?detach@BalloonComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void detach(class Actor &);
    /**
     * @hash   111246275
     * @symbol ?getAttachedActor@BalloonComponent@@QEAAPEAVActor@@AEAV2@@Z
     */
    MCAPI class Actor * getAttachedActor(class Actor &);
    /**
     * @hash   -700052202
     * @symbol ?getMaxHeight@BalloonComponent@@QEBAMXZ
     */
    MCAPI float getMaxHeight() const;
    /**
     * @hash   -2007706788
     * @symbol ?integrate@BalloonComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void integrate(class Actor &);
    /**
     * @hash   -2014394179
     * @symbol ?onRemoved@BalloonComponent@@QEAAXAEAVActor@@_N@Z
     */
    MCAPI void onRemoved(class Actor &, bool);
    /**
     * @hash   -1647358874
     * @symbol ?readAdditionalSaveData@BalloonComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1561109431
     * @symbol ?setAttachedActor@BalloonComponent@@QEAAXAEAVActor@@0@Z
     */
    MCAPI void setAttachedActor(class Actor &, class Actor &);
    /**
     * @hash   -1801272101
     * @symbol ?shouldPop@BalloonComponent@@QEAA_NAEAVActor@@AEA_N@Z
     */
    MCAPI bool shouldPop(class Actor &, bool &);
    /**
     * @hash   1273372741
     * @symbol ?ATTACHED_TAG@BalloonComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ATTACHED_TAG;
    /**
     * @hash   1099063455
     * @symbol ?FENCE_BALLOON_RANGE@BalloonComponent@@2MB
     */
    MCAPI static float const FENCE_BALLOON_RANGE;
    /**
     * @hash   -1322667397
     * @symbol ?MAX_BALLOON_RANGE@BalloonComponent@@2MB
     */
    MCAPI static float const MAX_BALLOON_RANGE;
    /**
     * @hash   -345961887
     * @symbol ?MAX_HEIGHT_TAG@BalloonComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const MAX_HEIGHT_TAG;
    /**
     * @hash   -1800320939
     * @symbol ?SHOULD_DROP_TAG@BalloonComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const SHOULD_DROP_TAG;
    /**
     * @hash   -474734889
     * @symbol ?getBalloonForActor@BalloonComponent@@SAPEAVActor@@AEBV2@@Z
     */
    MCAPI static class Actor * getBalloonForActor(class Actor const &);

};