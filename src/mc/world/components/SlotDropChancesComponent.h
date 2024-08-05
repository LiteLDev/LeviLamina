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
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;

    MCAPI void readAdditionalSaveData(class CompoundTag const&);

    // NOLINTEND
};
