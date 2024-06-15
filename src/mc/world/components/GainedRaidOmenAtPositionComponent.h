#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GainedRaidOmenAtPositionComponent {
public:
    // prevent constructor by default
    GainedRaidOmenAtPositionComponent& operator=(GainedRaidOmenAtPositionComponent const&);
    GainedRaidOmenAtPositionComponent(GainedRaidOmenAtPositionComponent const&);
    GainedRaidOmenAtPositionComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@GainedRaidOmenAtPositionComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;

    // symbol: ?readAdditionalSaveData@GainedRaidOmenAtPositionComponent@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class CompoundTag const&);

    // NOLINTEND
};
