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
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, int treeHeight, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, class ITreeCanopy const*)
        const;

    // vIndex: 2
    virtual int getTreeHeight(class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _placeBranch(class IBlockWorldGenAPI& target, std::vector<class BlockPos>*, class Random& random, int treeHeight, class RenderParams&, struct TreeHelper::TreeParams const& treeParams, class BlockPos&, int, uchar, int branchPos, int, class Block const*)
        const;

    // NOLINTEND
};
