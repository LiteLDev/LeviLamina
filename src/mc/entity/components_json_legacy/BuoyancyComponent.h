#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BuoyancyComponent {
public:
    // prevent constructor by default
    BuoyancyComponent& operator=(BuoyancyComponent const&);
    BuoyancyComponent(BuoyancyComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BuoyancyComponent();

    MCAPI bool
    canFloat(struct StateVectorComponent const& stateVectorComponent, class IConstBlockSource const& region) const;

    MCAPI float getBaseBuoyancy() const;

    MCAPI float getBigWaveProbability() const;

    MCAPI float getBigWaveSpeedMultiplier() const;

    MCAPI double getTimer() const;

    MCAPI void increaseTimer(float toAdd);

    MCAPI void loadData(std::string const& data, class SemVersion const& engineVersion);

    MCAPI bool needToResurface(
        struct StateVectorComponent const& stateVectorComponent,
        class IConstBlockSource const&     region
    ) const;

    MCAPI class BuoyancyComponent& operator=(class BuoyancyComponent&&);

    MCAPI bool shouldApplyGravity() const;

    MCAPI bool shouldSimulateWaves() const;

    MCAPI ~BuoyancyComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
