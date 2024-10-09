#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MegaTreeTrunk {
public:
    // prevent constructor by default
    MegaTreeTrunk& operator=(MegaTreeTrunk const&);
    MegaTreeTrunk(MegaTreeTrunk const&);
    MegaTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MegaTreeTrunk() = default;

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
    MCAPI bool _prepareSpawn(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        int                                  treeHeight,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // NOLINTEND
};
