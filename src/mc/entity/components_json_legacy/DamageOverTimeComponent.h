#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class DamageOverTimeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mHurtValue;
    ::ll::TypedStorage<4, 4, int> mDamageTimeInterval;
    ::ll::TypedStorage<4, 4, int> mDamageTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD int getDamageTime() const;

    MCFOLD int getDamageTimeInterval() const;

    MCFOLD int getHurtValue() const;

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void setDamageTime(int damageTime);
    // NOLINTEND
};
