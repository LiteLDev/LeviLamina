#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeRoots {
public:
    // prevent constructor by default
    MangroveTreeRoots& operator=(MangroveTreeRoots const&);
    MangroveTreeRoots(MangroveTreeRoots const&);
    MangroveTreeRoots();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveTreeRoots() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> placeRoots(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        int                      trunkHeight,
        class RenderParams&,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canPlaceRoot(class IBlockWorldGenAPI& target, class BlockPos const& pos) const;

    MCAPI void _placeRoot(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random) const;

    MCAPI std::vector<class BlockPos>
    _potentialRootPositions(class BlockPos const& pos, uchar, class Random& random, class BlockPos const& origin) const;

    MCAPI bool _simulateRoots(
        class IBlockWorldGenAPI& target,
        class Random&            random,
        class BlockPos const&,
        class BlockPos const&,
        uchar dir,
        std::vector<class BlockPos>*,
        int                                  layer,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static float const RANDOM_SKEW_CHANCE;

    // NOLINTEND
};
