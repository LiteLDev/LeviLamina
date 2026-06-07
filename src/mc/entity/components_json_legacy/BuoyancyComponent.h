#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/BuoyancyMovementType.h"

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
    ::ll::TypedStorage<1, 1, ::BuoyancyMovementType>            mMovementType;
    ::ll::TypedStorage<1, 1, bool>                              mApplyGravity;
    ::ll::TypedStorage<1, 1, bool>                              mCanAutoStepFromLiquid;
    ::ll::TypedStorage<8, 8, double>                            mTimer;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mLiquidBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BuoyancyComponent();

    MCFOLD bool canAutoStepFromLiquid() const;

    MCAPI bool canFloat(::StateVectorComponent const& stateVectorComponent, ::IConstBlockSource const& region) const;

    MCFOLD float getBaseBuoyancy() const;

    MCFOLD float getBigWaveProbability() const;

    MCFOLD float getBigWaveSpeedMultiplier() const;

    MCFOLD ::BuoyancyMovementType getMovementType() const;

    MCAPI double getTimer() const;

    MCAPI void increaseTimer(float toAdd);

    MCAPI void loadData(::std::string const& data, ::SemVersion const& engineVersion);

    MCAPI bool
    needToResurface(::StateVectorComponent const& stateVectorComponent, ::IConstBlockSource const& region) const;

    MCFOLD bool shouldApplyGravity() const;

#ifdef LL_PLAT_C
    MCAPI ~BuoyancyComponent();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
