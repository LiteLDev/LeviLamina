#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class SemVersion;
struct StateVectorComponent;
// clang-format on

class BuoyancyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd49cb8;
    ::ll::UntypedStorage<4, 4>  mUnk90b5b6;
    ::ll::UntypedStorage<4, 4>  mUnk29a4fc;
    ::ll::UntypedStorage<4, 4>  mUnk743c34;
    ::ll::UntypedStorage<1, 1>  mUnkb926b0;
    ::ll::UntypedStorage<1, 1>  mUnkf3368c;
    ::ll::UntypedStorage<8, 8>  mUnke73503;
    ::ll::UntypedStorage<8, 24> mUnkc70479;
    // NOLINTEND

public:
    // prevent constructor by default
    BuoyancyComponent& operator=(BuoyancyComponent const&);
    BuoyancyComponent(BuoyancyComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BuoyancyComponent();

    MCAPI bool canFloat(::StateVectorComponent const& stateVectorComponent, ::IConstBlockSource const& region) const;

    MCAPI float getBaseBuoyancy() const;

    MCAPI float getBigWaveProbability() const;

    MCAPI float getBigWaveSpeedMultiplier() const;

    MCAPI double getTimer() const;

    MCAPI void increaseTimer(float toAdd);

    MCAPI void loadData(::std::string const& data, ::SemVersion const& engineVersion);

    MCAPI bool
    needToResurface(::StateVectorComponent const& stateVectorComponent, ::IConstBlockSource const& region) const;

    MCAPI bool shouldApplyGravity() const;

    MCAPI bool shouldSimulateWaves() const;

    MCAPI ~BuoyancyComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
