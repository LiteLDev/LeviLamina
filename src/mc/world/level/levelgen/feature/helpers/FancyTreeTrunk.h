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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FancyTreeTrunk() = default;

    // vIndex: 1, symbol:
    // ?placeTrunk@FancyTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*)
        const;

    // vIndex: 2, symbol: ?getTreeHeight@FancyTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int getTreeHeight(class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkLine@FancyTreeTrunk@@AEBAHAEAVIBlockWorldGenAPI@@AEBVBlockPos@@1AEBUTreeParams@TreeHelper@@@Z
    MCAPI int
    _checkLine(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&, struct TreeHelper::TreeParams const&)
        const;

    // symbol: ?_placeLimb@FancyTreeTrunk@@AEBAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@1@Z
    MCAPI void _placeLimb(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&) const;

    // NOLINTEND
};
