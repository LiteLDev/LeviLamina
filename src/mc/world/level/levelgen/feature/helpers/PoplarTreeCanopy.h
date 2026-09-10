#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class PoplarTreeCanopy : public ::ITreeCanopy {
public:
    // PoplarTreeCanopy inner types declare
    // clang-format off
    struct WeightedInt;
    // clang-format on

    // PoplarTreeCanopy inner types define
    struct WeightedInt {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mValue;
        ::ll::TypedStorage<4, 4, int> mWeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                             mLeavesBlockDescriptor;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                             mBranchBlockDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::PoplarTreeCanopy::WeightedInt>> mWeightedRadius;
    ::ll::TypedStorage<4, 8, ::IntRange>                                      mHeight;
    ::ll::TypedStorage<4, 4, float>                                           mSideHoleChance;
    ::ll::TypedStorage<4, 4, int>                                             mTrunkWidth;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                origin,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeLayerOfLeaves(
        ::IBlockWorldGenAPI&            target,
        ::Block const&                  leavesBlock,
        ::TreeHelper::TreeParams const& treeParams,
        ::BlockPos const&               origin,
        ::Random&                       random,
        int                             foliageHeight,
        int                             currentRadius,
        int                             y,
        bool                            flipRhombusShape,
        bool                            isDoubleTrunk
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                origin,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const;


    // NOLINTEND
};
