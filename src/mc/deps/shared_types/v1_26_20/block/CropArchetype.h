#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct CropArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                          mSeedItem;
    ::ll::TypedStorage<4, 4, float>                                   mGrowthPointsThreshold;
    ::ll::TypedStorage<4, 4, int>                                     mMinGrowthLightLevel;
    ::ll::TypedStorage<4, 4, int>                                     mMaxAge;
    ::ll::TypedStorage<4, 4, int>                                     mMinSurvivalLightLevel;
    ::ll::TypedStorage<4, 4, int>                                     mMinBonemealAgeIncrease;
    ::ll::TypedStorage<4, 4, int>                                     mMaxBonemealAgeIncrease;
    ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor> mGrowsIntoBlock;
    ::ll::TypedStorage<8, 32, ::std::string>                          mGrowsIntoFeature;
    ::ll::TypedStorage<8, 32, ::std::string>                          mPlacementSurface;
    // NOLINTEND

public:
    // prevent constructor by default
    CropArchetype();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CropArchetype(::SharedTypes::v1_26_20::BlockDefinition::CropArchetype const&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::CropArchetype&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::CropArchetype&&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::CropArchetype&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::CropArchetype const&);

    MCAPI bool operator==(::SharedTypes::v1_26_20::BlockDefinition::CropArchetype const&) const;

    MCAPI ~CropArchetype();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::CropArchetype const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
