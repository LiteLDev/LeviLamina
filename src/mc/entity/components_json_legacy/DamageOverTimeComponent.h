#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeComponent {
public:
    // prevent constructor by default
    DamageOverTimeComponent& operator=(DamageOverTimeComponent const&);
    DamageOverTimeComponent(DamageOverTimeComponent const&);
    DamageOverTimeComponent();

public:
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI int getDamageTime() const;

    MCAPI int getDamageTimeInterval() const;

    MCAPI int getHurtValue() const;

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void setDamageTime(int damageTime);

    // NOLINTEND
};
