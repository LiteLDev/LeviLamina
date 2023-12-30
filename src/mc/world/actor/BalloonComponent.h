#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BalloonComponent {
public:
    // prevent constructor by default
    BalloonComponent& operator=(BalloonComponent const&);
    BalloonComponent(BalloonComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BalloonComponent@@QEAA@XZ
    MCAPI BalloonComponent();

    // symbol: ?addAdditionalSaveData@BalloonComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?computeMaxHeight@BalloonComponent@@QEAAXAEAVActor@@@Z
    MCAPI void computeMaxHeight(class Actor& owner);

    // symbol: ?detach@BalloonComponent@@QEAAXAEAVActor@@@Z
    MCAPI void detach(class Actor& owner);

    // symbol: ?getAttachedActor@BalloonComponent@@QEAAPEAVActor@@AEAV2@@Z
    MCAPI class Actor* getAttachedActor(class Actor& owner);

    // symbol: ?getMaxHeight@BalloonComponent@@QEBAMXZ
    MCAPI float getMaxHeight() const;

    // symbol: ?integrate@BalloonComponent@@QEAAXAEAVActor@@@Z
    MCAPI void integrate(class Actor& owner);

    // symbol: ?onRemoved@BalloonComponent@@QEAAXAEAVActor@@_N@Z
    MCAPI void onRemoved(class Actor& owner, bool shouldPop);

    // symbol: ?readAdditionalSaveData@BalloonComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?setAttachedActor@BalloonComponent@@QEAAXAEAVActor@@0@Z
    MCAPI void setAttachedActor(class Actor& owner, class Actor& toAttach);

    // symbol: ?shouldPop@BalloonComponent@@QEAA_NAEAVActor@@AEA_N@Z
    MCAPI bool shouldPop(class Actor& owner, bool& removeAttached);

    // symbol: ?getBalloonForActor@BalloonComponent@@SAPEAVActor@@AEBV2@@Z
    MCAPI static class Actor* getBalloonForActor(class Actor const& actor);

    // symbol: ?ATTACHED_TAG@BalloonComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ATTACHED_TAG;

    // symbol: ?FENCE_BALLOON_RANGE@BalloonComponent@@2MB
    MCAPI static float const FENCE_BALLOON_RANGE;

    // symbol: ?MAX_BALLOON_RANGE@BalloonComponent@@2MB
    MCAPI static float const MAX_BALLOON_RANGE;

    // symbol: ?MAX_HEIGHT_TAG@BalloonComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const MAX_HEIGHT_TAG;

    // symbol: ?SHOULD_DROP_TAG@BalloonComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SHOULD_DROP_TAG;

    // NOLINTEND
};
