#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 184> mUnkb3a627;
    ::ll::UntypedStorage<4, 8>   mUnk8cdc5a;
    ::ll::UntypedStorage<4, 8>   mUnk1ddc86;
    ::ll::UntypedStorage<4, 4>   mUnk80ac2a;
    ::ll::UntypedStorage<4, 12>  mUnk7f620e;
    ::ll::UntypedStorage<4, 12>  mUnk7fad39;
    ::ll::UntypedStorage<4, 12>  mUnk397cda;
    ::ll::UntypedStorage<4, 12>  mUnke423a1;
    // NOLINTEND

public:
    // prevent constructor by default
    CherryTreeCanopy& operator=(CherryTreeCanopy const&);
    CherryTreeCanopy(CherryTreeCanopy const&);
    CherryTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CherryTreeCanopy() /*override*/ = default;

    // vIndex: 1
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

    MCAPI bool _shouldSkipPosition(::Random& random, ::BlockPos const& pos, int radius) const;
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
