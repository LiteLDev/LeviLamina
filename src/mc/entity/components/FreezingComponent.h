#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class FreezingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFreezingEffectStrength;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void decreaseFreezingEffect();

    MCFOLD float getFreezingEffectStrength() const;

    MCAPI void increaseFreezingEffect();

    MCAPI bool isFullyFrozen() const;

    MCAPI bool isFullyUnfrozen() const;

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void resetFreezingEffect();
    // NOLINTEND
};
