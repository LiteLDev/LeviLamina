#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopyWrapper.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class AcaciaTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mBaseHeight;
    ::ll::TypedStorage<4, 4, int>                                  mTrunkWidth;
    ::ll::TypedStorage<4, 4, int>                                  mMinHeightForCanopy;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mLeanHeight;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mLeanSteps;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mLeanLength;
    ::ll::TypedStorage<1, 1, bool>                                 mAllowDiagonalGrowth;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mBranchLength;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mBranchPos;
    ::ll::TypedStorage<4, 12, ::ChanceInformation>                 mBranchChance;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>                  mTrunkBlockDescriptor;
    ::ll::TypedStorage<8, 8, ::ITreeCanopyWrapper>                 mBranchCanopy;
    ::ll::TypedStorage<8, 208, ::TreeHelper::AttachableDecoration> mDecoration;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                  mHeightIntervals;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AcaciaTreeTrunk() /*override*/ = default;

    virtual int getTreeHeight(::Random& random) const /*override*/;

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
    MCAPI void _placeLeaningBranches(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::BlockPos const&               branchPos,
        ::Random&                       random,
        ::RenderParams&                 renderParams,
        int                             treeHeight,
        int                             leanDirection,
        int                             leanHeight,
        ::TreeHelper::TreeParams const& treeParams
    ) const;

    MCAPI void _placeVerticalBranches(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::BlockPos const&               branchPos,
        ::Random&                       random,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams
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
