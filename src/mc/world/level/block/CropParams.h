#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

struct CropParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mSeedItem;
    ::ll::TypedStorage<4, 4, float>               mGrowthPointsThreshold;
    ::ll::TypedStorage<4, 4, int>                 mMinGrowthLightLevel;
    ::ll::TypedStorage<4, 4, int>                 mMaxAge;
    ::ll::TypedStorage<4, 4, int>                 mMinSurvivalLightLevel;
    ::ll::TypedStorage<4, 4, int>                 mMinBonemealAgeIncrease;
    ::ll::TypedStorage<4, 4, int>                 mMaxBonemealAgeIncrease;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mGrowsIntoBlock;
    ::ll::TypedStorage<8, 32, ::std::string>      mGrowsIntoFeature;
    ::ll::TypedStorage<8, 32, ::std::string>      mPlacementSurface;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CropParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
