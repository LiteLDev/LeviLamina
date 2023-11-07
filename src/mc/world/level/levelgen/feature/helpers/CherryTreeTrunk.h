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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CherryTreeTrunk() = default;

    // vIndex: 1, symbol:
    // ?placeTrunk@CherryTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*)
        const;

    // vIndex: 2, symbol: ?getTreeHeight@CherryTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int getTreeHeight(class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateBranch@CherryTreeTrunk@@AEBA?AVBlockPos@@AEAVIBlockWorldGenAPI@@AEBVBlock@@1AEAVRandom@@HV2@AEBUTreeParams@TreeHelper@@3H_N@Z
    MCAPI class BlockPos _generateBranch(
        class IBlockWorldGenAPI&,
        class Block const&,
        class Block const&,
        class Random&,
        int,
        class BlockPos,
        struct TreeHelper::TreeParams const&,
        class BlockPos,
        int,
        bool
    ) const;

    // symbol:
    // ?_tryPlaceBlock@CherryTreeTrunk@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@AEBUTreeParams@TreeHelper@@@Z
    MCAPI bool
    _tryPlaceBlock(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, struct TreeHelper::TreeParams const&)
        const;

    // NOLINTEND
};
