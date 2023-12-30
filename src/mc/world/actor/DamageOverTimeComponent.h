#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeComponent {
public:
    // prevent constructor by default
    DamageOverTimeComponent& operator=(DamageOverTimeComponent const&);
    DamageOverTimeComponent(DamageOverTimeComponent const&);
    DamageOverTimeComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@DamageOverTimeComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?getDamageTime@DamageOverTimeComponent@@QEBAHXZ
    MCAPI int getDamageTime() const;

    // symbol: ?getDamageTimeInterval@DamageOverTimeComponent@@QEBAHXZ
    MCAPI int getDamageTimeInterval() const;

    // symbol: ?getHurtValue@DamageOverTimeComponent@@QEBAHXZ
    MCAPI int getHurtValue() const;

    // symbol: ?readAdditionalSaveData@DamageOverTimeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?setDamageTime@DamageOverTimeComponent@@QEAAXH@Z
    MCAPI void setDamageTime(int damageTime);

    // NOLINTEND
};
