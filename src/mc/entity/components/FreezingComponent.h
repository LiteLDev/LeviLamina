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
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void decreaseFreezingEffect();

    MCAPI float getFreezingEffectStrength() const;

    MCAPI void increaseFreezingEffect();

    MCAPI bool isFullyFrozen() const;

    MCAPI bool isFullyUnfrozen() const;

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void resetFreezingEffect();

    // NOLINTEND
};
