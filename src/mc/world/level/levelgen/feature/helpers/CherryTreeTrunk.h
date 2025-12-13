#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/util/WeightedRandom.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopyWrapper.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>                                 mTrunkBlockDescriptor;
    ::ll::TypedStorage<4, 4, int>                                                 mBaseHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                 mHeightIntervals;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeightedRandom::WeighedRandomItem>> mTreeTypeWeights;
    ::ll::TypedStorage<4, 8, ::IntRange>                                          mBranchHorizontalLength;
    ::ll::TypedStorage<4, 8, ::IntRange>                                          mBranchStartOffsetFromTop;
    ::ll::TypedStorage<4, 8, ::IntRange>                                          mBranchEndOffsetFromTop;
    ::ll::TypedStorage<8, 8, ::ITreeCanopyWrapper>                                mBranchCanopy;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CherryTreeTrunk() /*override*/ = default;

    // vIndex: 2
    virtual int getTreeHeight(::Random& random) const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPos _generateBranch(
        ::IBlockWorldGenAPI&            target,
        ::Block const&                  trunkBlock,
        ::Block const&                  sidewaysTrunkBlock,
        ::Random&                       random,
        int                             treeHeight,
        ::BlockPos                      origin,
        ::TreeHelper::TreeParams const& treeParams,
        ::BlockPos                      branchDirection,
        int                             offsetFromOrigin,
        bool                            middleContinuesUpwards
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getTreeHeight(::Random& random) const;

    MCAPI ::std::optional<::BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
