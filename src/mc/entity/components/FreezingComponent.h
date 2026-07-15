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

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND
};
