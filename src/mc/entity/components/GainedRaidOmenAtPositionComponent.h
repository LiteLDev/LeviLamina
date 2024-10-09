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
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(class CompoundTag const& tag);

    // NOLINTEND
};
