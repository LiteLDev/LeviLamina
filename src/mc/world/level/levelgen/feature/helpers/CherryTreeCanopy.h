#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    CherryTreeCanopy& operator=(CherryTreeCanopy const&);
    CherryTreeCanopy(CherryTreeCanopy const&);
    CherryTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CherryTreeCanopy() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _placeLayerOfLeaves(
        class IBlockWorldGenAPI&             target,
        class Random&                        random,
        class BlockPos const&                canopyPos,
        int                                  layerOffset,
        class Block const&                   leavesBlock,
        int                                  radius,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    MCAPI void _placeLayerOfLeavesWithHangingLeavesBelow(
        class IBlockWorldGenAPI&             target,
        class Random&                        random,
        class BlockPos const&                canopyPos,
        int                                  layerOffset,
        class Block const&                   leavesBlock,
        int                                  radius,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    MCAPI bool _tryPlaceBlock(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Block const&                   leavesBlock,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::optional<class BlockPos>
    placeCanopy$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND
};
