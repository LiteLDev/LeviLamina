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
    // vIndex: 0, symbol: __gen_??1MangroveTreeRoots@@UEAA@XZ
    virtual ~MangroveTreeRoots() = default;

    // vIndex: 1, symbol:
    // ?placeRoots@MangroveTreeRoots@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@@Z
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
    // symbol: ?_canPlaceRoot@MangroveTreeRoots@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool _canPlaceRoot(class IBlockWorldGenAPI& target, class BlockPos const& pos) const;

    // symbol: ?_placeRoot@MangroveTreeRoots@@AEBAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void _placeRoot(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random) const;

    // symbol:
    // ?_potentialRootPositions@MangroveTreeRoots@@AEBA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@EAEAVRandom@@0@Z
    MCAPI std::vector<class BlockPos>
    _potentialRootPositions(class BlockPos const& pos, uchar, class Random& random, class BlockPos const& origin) const;

    // symbol:
    // ?_simulateRoots@MangroveTreeRoots@@AEBA_NAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@2EPEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@HAEBUTreeParams@TreeHelper@@@Z
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
    // symbol: ?RANDOM_SKEW_CHANCE@MangroveTreeRoots@@0MB
    MCAPI static float const RANDOM_SKEW_CHANCE;

    // NOLINTEND
};
