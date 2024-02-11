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
    // vIndex: 0, symbol: __gen_??1CherryTreeTrunk@@UEAA@XZ
    virtual ~CherryTreeTrunk() = default;

    // vIndex: 1, symbol:
    // ?placeTrunk@CherryTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, int treeHeight, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, class ITreeCanopy const*)
        const;

    // vIndex: 2, symbol: ?getTreeHeight@CherryTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int getTreeHeight(class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateBranch@CherryTreeTrunk@@AEBA?AVBlockPos@@AEAVIBlockWorldGenAPI@@AEBVBlock@@1AEAVRandom@@HV2@AEBUTreeParams@TreeHelper@@3H_N@Z
    MCAPI class BlockPos _generateBranch(
        class IBlockWorldGenAPI& target,
        class Block const&,
        class Block const&,
        class Random&                        random,
        int                                  treeHeight,
        class BlockPos                       origin,
        struct TreeHelper::TreeParams const& treeParams,
        class BlockPos,
        int,
        bool
    ) const;

    // symbol:
    // ?_tryPlaceBlock@CherryTreeTrunk@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@AEBUTreeParams@TreeHelper@@@Z
    MCAPI bool _tryPlaceBlock(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Block const&                   block,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // NOLINTEND
};
