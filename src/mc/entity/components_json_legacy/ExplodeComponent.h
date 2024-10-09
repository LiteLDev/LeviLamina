#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExplodeComponent {
public:
    // prevent constructor by default
    ExplodeComponent& operator=(ExplodeComponent const&);
    ExplodeComponent(ExplodeComponent const&);

public:
    // NOLINTBEGIN
    MCAPI ExplodeComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void explode(class Actor& actor, class Vec3 const& explosionPosition);

    MCAPI int getFuseLength() const;

    MCAPI int getInitialFuseLength() const;

    MCAPI bool getIsFuseLit() const;

    MCAPI bool isFuseLit() const;

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool requiresTntExplodeGameRuleEnabled() const;

    MCAPI void setAllowUnderwater(bool allow);

    MCAPI void setFuseLength(int fuseLength);

    MCAPI void setTntExpodeGameRuleRequired();

    // NOLINTEND
};
