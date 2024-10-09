#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class AcaciaTreeTrunk {
public:
    // prevent constructor by default
    AcaciaTreeTrunk& operator=(AcaciaTreeTrunk const&);
    AcaciaTreeTrunk(AcaciaTreeTrunk const&);
    AcaciaTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AcaciaTreeTrunk() = default;

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
    MCAPI void _placeLeaningBranches(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class BlockPos const&                branchPos,
        class Random&                        random,
        class RenderParams&                  renderParams,
        int                                  treeHeight,
        int                                  leanDirection,
        int                                  leanHeight,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    MCAPI void _placeVerticalBranches(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class BlockPos const&                branchPos,
        class Random&                        random,
        class RenderParams&                  renderParams,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // NOLINTEND
};
