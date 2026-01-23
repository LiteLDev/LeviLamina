#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
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

class CherryTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>  mLeavesBlockDescriptor;
    ::ll::TypedStorage<4, 8, ::IntRange>           mHeight;
    ::ll::TypedStorage<4, 8, ::IntRange>           mRadius;
    ::ll::TypedStorage<4, 4, int>                  mTrunkWidth;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mWideBottomLayerHoleChance;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mCornerHoleChance;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mHangingLeavesChance;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mHangingLeavesExtensionChance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CherryTreeCanopy() /*override*/ = default;

    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Random&            random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeLayerOfLeaves(
        ::IBlockWorldGenAPI&            target,
        ::Random&                       random,
        ::BlockPos const&               canopyPos,
        int                             layerOffset,
        ::Block const&                  leavesBlock,
        int                             radius,
        ::TreeHelper::TreeParams const& treeParams
    ) const;

    MCAPI void _placeLayerOfLeavesWithHangingLeavesBelow(
        ::IBlockWorldGenAPI&            target,
        ::Random&                       random,
        ::BlockPos const&               canopyPos,
        int                             layerOffset,
        ::Block const&                  leavesBlock,
        int                             radius,
        ::TreeHelper::TreeParams const& treeParams
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Random&            random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
