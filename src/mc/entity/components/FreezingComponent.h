#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FreezingComponent {
public:
    // prevent constructor by default
    FreezingComponent& operator=(FreezingComponent const&);
    FreezingComponent(FreezingComponent const&);
    FreezingComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@FreezingComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?decreaseFreezingEffect@FreezingComponent@@QEAAXXZ
    MCAPI void decreaseFreezingEffect();

    // symbol: ?getFreezingEffectStrength@FreezingComponent@@QEBAMXZ
    MCAPI float getFreezingEffectStrength() const;

    // symbol: ?increaseFreezingEffect@FreezingComponent@@QEAAXXZ
    MCAPI void increaseFreezingEffect();

    // symbol: ?isFullyFrozen@FreezingComponent@@QEBA_NXZ
    MCAPI bool isFullyFrozen() const;

    // symbol: ?isFullyUnfrozen@FreezingComponent@@QEBA_NXZ
    MCAPI bool isFullyUnfrozen() const;

    // symbol: ?readAdditionalSaveData@FreezingComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?resetFreezingEffect@FreezingComponent@@QEAAXXZ
    MCAPI void resetFreezingEffect();

    // NOLINTEND
};
