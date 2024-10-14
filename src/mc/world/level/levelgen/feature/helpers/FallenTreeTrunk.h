#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FallenTreeTrunk {
public:
    // prevent constructor by default
    FallenTreeTrunk& operator=(FallenTreeTrunk const&);
    FallenTreeTrunk(FallenTreeTrunk const&);
    FallenTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FallenTreeTrunk() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, int treeHeight, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, class ITreeCanopy const*)
        const;

    // vIndex: 2
    virtual int getTreeHeight(class Random& random) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI int getTreeHeight$(class Random& random) const;

    MCAPI std::optional<class BlockPos>
    placeTrunk$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, int treeHeight, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, class ITreeCanopy const*)
        const;

    // NOLINTEND
};
