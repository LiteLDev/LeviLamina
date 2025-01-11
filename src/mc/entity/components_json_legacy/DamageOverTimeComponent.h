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
    ::ll::UntypedStorage<4, 4> mUnk319214;
    ::ll::UntypedStorage<4, 4> mUnk13f547;
    ::ll::UntypedStorage<4, 4> mUnkcf6bc9;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageOverTimeComponent& operator=(DamageOverTimeComponent const&);
    DamageOverTimeComponent(DamageOverTimeComponent const&);
    DamageOverTimeComponent();

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
