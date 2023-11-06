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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FallenTreeTrunk();

    // vIndex: 1, symbol:
    // ?placeTrunk@FallenTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*)
        const;

    // vIndex: 2, symbol: ?getTreeHeight@FallenTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int getTreeHeight(class Random&) const;

    // NOLINTEND
};
