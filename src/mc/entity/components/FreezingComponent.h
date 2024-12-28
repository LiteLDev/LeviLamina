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
    ::ll::UntypedStorage<4, 4> mUnk9a2e4e;
    // NOLINTEND

public:
    // prevent constructor by default
    FreezingComponent& operator=(FreezingComponent const&);
    FreezingComponent(FreezingComponent const&);
    FreezingComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void decreaseFreezingEffect();

    MCAPI float getFreezingEffectStrength() const;

    MCAPI void increaseFreezingEffect();

    MCAPI bool isFullyFrozen() const;

    MCAPI bool isFullyUnfrozen() const;

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void resetFreezingEffect();
    // NOLINTEND
};
