#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FancyTreeTrunk {
public:
    // prevent constructor by default
    FancyTreeTrunk& operator=(FancyTreeTrunk const&);
    FancyTreeTrunk(FancyTreeTrunk const&);
    FancyTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FancyTreeTrunk() = default;

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
    MCAPI int _checkLine(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                startPos,
        class BlockPos const&                endPos,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    MCAPI void
    _placeLimb(class IBlockWorldGenAPI& target, class BlockPos const& startPos, class BlockPos const& endPos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

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
