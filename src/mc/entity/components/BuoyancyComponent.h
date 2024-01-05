#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BuoyancyComponent {
public:
    // prevent constructor by default
    BuoyancyComponent& operator=(BuoyancyComponent const&);
    BuoyancyComponent(BuoyancyComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BuoyancyComponent@@QEAA@XZ
    MCAPI BuoyancyComponent();

    // symbol: ?canFloat@BuoyancyComponent@@QEBA_NAEBUStateVectorComponent@@AEBVIConstBlockSource@@@Z
    MCAPI bool canFloat(struct StateVectorComponent const&, class IConstBlockSource const&) const;

    // symbol: ?getBaseBuoyancy@BuoyancyComponent@@QEBAMXZ
    MCAPI float getBaseBuoyancy() const;

    // symbol: ?getBigWaveProbability@BuoyancyComponent@@QEBAMXZ
    MCAPI float getBigWaveProbability() const;

    // symbol: ?getBigWaveSpeedMultiplier@BuoyancyComponent@@QEBAMXZ
    MCAPI float getBigWaveSpeedMultiplier() const;

    // symbol: ?getTimer@BuoyancyComponent@@QEBANXZ
    MCAPI double getTimer() const;

    // symbol: ?increaseTimer@BuoyancyComponent@@QEAAXM@Z
    MCAPI void increaseTimer(float toAdd);

    // symbol:
    // ?loadData@BuoyancyComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@@Z
    MCAPI void loadData(std::string const& data, class SemVersion const& engineVersion);

    // symbol: ?needToResurface@BuoyancyComponent@@QEBA_NAEBUStateVectorComponent@@AEBVIConstBlockSource@@@Z
    MCAPI bool needToResurface(struct StateVectorComponent const&, class IConstBlockSource const&) const;

    // symbol: ??4BuoyancyComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class BuoyancyComponent& operator=(class BuoyancyComponent&&);

    // symbol: ?shouldApplyGravity@BuoyancyComponent@@QEBA_NXZ
    MCAPI bool shouldApplyGravity() const;

    // symbol: ?shouldSimulateWaves@BuoyancyComponent@@QEBA_NXZ
    MCAPI bool shouldSimulateWaves() const;

    // symbol: ??1BuoyancyComponent@@QEAA@XZ
    MCAPI ~BuoyancyComponent();

    // NOLINTEND
};
