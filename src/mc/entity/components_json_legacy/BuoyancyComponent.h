#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class IConstBlockSource;
class SemVersion;
struct StateVectorComponent;
// clang-format on

class BuoyancyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             mBaseBuoyancy;
    ::ll::TypedStorage<4, 4, float>                             mDragDownOnRemoval;
    ::ll::TypedStorage<4, 4, float>                             mBigWaveProbability;
    ::ll::TypedStorage<4, 4, float>                             mBigWaveSpeedMultiplier;
    ::ll::TypedStorage<1, 1, bool>                              mSimulateWaves;
    ::ll::TypedStorage<1, 1, bool>                              mApplyGravity;
    ::ll::TypedStorage<8, 8, double>                            mTimer;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mLiquidBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool canFloat(::StateVectorComponent const& stateVectorComponent, ::IConstBlockSource const& region) const;

    MCNAPI void loadData(::std::string const& data, ::SemVersion const& engineVersion);

    MCNAPI bool
    needToResurface(::StateVectorComponent const& stateVectorComponent, ::IConstBlockSource const& region) const;

    MCNAPI_C ~BuoyancyComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
