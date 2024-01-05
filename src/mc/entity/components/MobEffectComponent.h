#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectComponent {
public:
    // prevent constructor by default
    MobEffectComponent& operator=(MobEffectComponent const&);
    MobEffectComponent(MobEffectComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MobEffectComponent@@QEAA@XZ
    MCAPI MobEffectComponent();

    // symbol: ??0MobEffectComponent@@QEAA@$$QEAV0@@Z
    MCAPI MobEffectComponent(class MobEffectComponent&&);

    // symbol: ?addAdditionalSaveData@MobEffectComponent@@QEBAXAEAVCompoundTag@@AEBVActor@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag, class Actor const& owner) const;

    // symbol: ??4MobEffectComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class MobEffectComponent& operator=(class MobEffectComponent&&);

    // symbol: ?readAdditionalSaveData@MobEffectComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper&);

    // symbol: ?tick@MobEffectComponent@@QEAAXAEAVActor@@@Z
    MCAPI void tick(class Actor& owner);

    // symbol: ??1MobEffectComponent@@QEAA@XZ
    MCAPI ~MobEffectComponent();

    // NOLINTEND
};
