#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotDropChancesComponent {
public:
    // prevent constructor by default
    SlotDropChancesComponent& operator=(SlotDropChancesComponent const&);
    SlotDropChancesComponent(SlotDropChancesComponent const&);
    SlotDropChancesComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@SlotDropChancesComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;

    // symbol: ?readAdditionalSaveData@SlotDropChancesComponent@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class CompoundTag const&);

    // NOLINTEND
};
