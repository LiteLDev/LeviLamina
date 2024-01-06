#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class HomeComponent {
public:
    // prevent constructor by default
    HomeComponent& operator=(HomeComponent const&);
    HomeComponent(HomeComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0HomeComponent@@QEAA@XZ
    MCAPI HomeComponent();

    // symbol: ?addAdditionalSaveData@HomeComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?getHomeDimension@HomeComponent@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCAPI DimensionType getHomeDimension() const;

    // symbol: ?getHomePos@HomeComponent@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getHomePos() const;

    // symbol: ?getRestrictionRadius@HomeComponent@@QEBAHXZ
    MCAPI int getRestrictionRadius() const;

    // symbol: ?hasRestriction@HomeComponent@@QEBA_NXZ
    MCAPI bool hasRestriction() const;

    // symbol: ?hasValidHomePos@HomeComponent@@QEBA_NXZ
    MCAPI bool hasValidHomePos() const;

    // symbol: ?isWithinRestriction@HomeComponent@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isWithinRestriction(class BlockPos const& pos) const;

    // symbol: ??4HomeComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class HomeComponent& operator=(class HomeComponent&&);

    // symbol: ?readAdditionalSaveData@HomeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?setHome@HomeComponent@@QEAAXAEBVBlockPos@@AEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setHome(class BlockPos const& pos, DimensionType const& id);

    // symbol: ?tick@HomeComponent@@QEAAXAEAVActor@@@Z
    MCAPI void tick(class Actor& owner);

    // NOLINTEND
};
