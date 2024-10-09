#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeTrunk {
public:
    // prevent constructor by default
    CherryTreeTrunk& operator=(CherryTreeTrunk const&);
    CherryTreeTrunk(CherryTreeTrunk const&);
    CherryTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CherryTreeTrunk() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> placeTrunk(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Random&                        random,
        int                                  treeHeight,
        class RenderParams&                  renderParams,
        struct TreeHelper::TreeParams const& treeParams,
        class ITreeCanopy const*             canopy
    ) const;

    // vIndex: 2
    virtual int getTreeHeight(class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class BlockPos _generateBranch(
        class IBlockWorldGenAPI&             target,
        class Block const&                   trunkBlock,
        class Block const&                   sidewaysTrunkBlock,
        class Random&                        random,
        int                                  treeHeight,
        class BlockPos                       origin,
        struct TreeHelper::TreeParams const& treeParams,
        class BlockPos                       branchDirection,
        int                                  offsetFromOrigin,
        bool                                 middleContinuesUpwards
    ) const;

    MCAPI bool _tryPlaceBlock(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Block const&                   block,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // NOLINTEND
};
