#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeTrunk {
public:
    // prevent constructor by default
    MangroveTreeTrunk& operator=(MangroveTreeTrunk const&);
    MangroveTreeTrunk(MangroveTreeTrunk const&);
    MangroveTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveTreeTrunk() = default;

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
    MCAPI void _placeBranch(
        class IBlockWorldGenAPI&     target,
        std::vector<class BlockPos>* canopyAttachmentPositions,
        class Random&                random,
        int                          treeHeight,
        class RenderParams&,
        struct TreeHelper::TreeParams const& treeParams,
        class BlockPos&                      logPos,
        int                                  currentHeight,
        uchar                                branchDir,
        int                                  branchPos,
        int                                  branchSteps,
        class Block const*                   trunkBlock
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI int getTreeHeight$(class Random& random) const;

    MCAPI std::optional<class BlockPos> placeTrunk$(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Random&                        random,
        int                                  treeHeight,
        class RenderParams&                  renderParams,
        struct TreeHelper::TreeParams const& treeParams,
        class ITreeCanopy const*             canopy
    ) const;

    // NOLINTEND
};
