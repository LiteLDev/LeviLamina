#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class HomeComponent {
public:
    // prevent constructor by default
    HomeComponent& operator=(HomeComponent const&);
    HomeComponent(HomeComponent const&);

public:
    // NOLINTBEGIN
    MCAPI HomeComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI DimensionType getHomeDimension() const;

    MCAPI class BlockPos getHomePos() const;

    MCAPI int getRestrictionRadius() const;

    MCAPI bool hasRestriction() const;

    MCAPI bool hasValidHomePos() const;

    MCAPI bool isWithinRestriction(class BlockPos const& pos) const;

    MCAPI class HomeComponent& operator=(class HomeComponent&&);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void setHome(class BlockPos const& pos, DimensionType const& id);

    MCAPI void tick(class Actor& owner);

    // NOLINTEND
};
