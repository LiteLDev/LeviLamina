#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class GrowingPlantFeature : public ::IFeature {
public:
    // GrowingPlantFeature inner types declare
    // clang-format off
    struct WeightedBlockReference;
    struct WeightedRandomNumberReference;
    // clang-format on
    
    // GrowingPlantFeature inner types define
    struct WeightedRandomNumberReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::IntRange> mRandomNumber;
        ::ll::TypedStorage<4, 4, float> mWeight;
        // NOLINTEND
    
    };
    
    struct WeightedBlockReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 184, ::BlockDescriptor> mBlockDescriptor;
        ::ll::TypedStorage<4, 4, float> mWeight;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WeightedBlockReference();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GrowingPlantFeature::WeightedRandomNumberReference>> mHeightDistribution;
    ::ll::TypedStorage<1, 1, uchar> mGrowthDirection;
    ::ll::TypedStorage<4, 8, ::IntRange> mAge;
    ::ll::TypedStorage<8, 24, ::std::vector<::GrowingPlantFeature::WeightedBlockReference>> mBodyBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::GrowingPlantFeature::WeightedBlockReference>> mHeadBlocks;
    ::ll::TypedStorage<1, 1, bool> mAllowWater;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GrowingPlantFeature() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
